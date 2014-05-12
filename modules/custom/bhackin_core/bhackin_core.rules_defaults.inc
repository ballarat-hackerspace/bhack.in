<?php
/**
 * @file
 * bhackin_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bhackin_core_default_rules_configuration() {
  $items = array();
  $items['rules_blog_new'] = entity_import('rules_config', '{ "rules_blog_new" : {
      "LABEL" : "Node: New blog post",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "botrules" ],
      "ON" : { "node_insert--blog" : { "bundle" : "blog" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : "[node:author:name]" },
            "PROVIDE" : { "variable_added" : { "name" : "Name" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "node:author:field-user-irc" ] } },
              "DO" : [
                { "data_set" : { "data" : [ "name" ], "value" : [ "node:author:field-user-irc" ] } }
              ]
            }
          ]
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "[bHack.in] New blog post by [name:value]: [node:title] - [node:url]"
            },
            "PROVIDE" : { "variable_added" : { "message" : "Message" } }
          }
        },
        { "botrules_action_message" : { "target" : "#bHack", "text" : [ "message" ] } }
      ]
    }
  }');
  $items['rules_register_interest'] = entity_import('rules_config', '{ "rules_register_interest" : {
      "LABEL" : "Register interest",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "rules", "rules_conditional", "mailchimp_lists", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "register_interest" : "register_interest" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_ri_email" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_ri_name" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_ri_referer" } }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : { "data" : [ "entityform:uid" ], "value" : "1" } },
              "DO" : [
                { "mail" : {
                    "to" : "admin@bhack.in",
                    "subject" : "New \\u0027Register interest\\u0027 submission",
                    "message" : "A new \\u0027Register interest\\u0027 submissions has been made:\\r\\n\\r\\nName: [entityform:field-ri-name]\\r\\nEmail: [entityform:field-ri-email]\\r\\nPostcode: [entityform:field-ri-postcode]\\r\\nReferer: [entityform:field-ri-referer]",
                    "from" : "admin@bhack.in",
                    "language" : [ "" ]
                  }
                },
                { "mail" : {
                    "to" : "[entityform:field-ri-email]",
                    "subject" : "Thank you for your interest",
                    "message" : "Hi [entityform:field-ri-name],\\r\\n\\r\\nThank you for registering your interest in bHack.\\r\\n\\r\\nAn event is run every 1st, 3rd and 5th Tuesday at 7pm at our temporary location, 113 Albert St, Sebastopol.\\r\\n\\r\\nMore information can be found at the bHack Google+ Community: http:\\/\\/plus.bhack.in.\\r\\n\\r\\nCheers,\\r\\nbHack team",
                    "from" : "no-reply@bhack.in",
                    "language" : [ "" ]
                  }
                },
                { "mailchimp_lists_email_subscribe_list" : {
                    "mail" : [ "entityform:field-ri-email" ],
                    "list" : "register_interest",
                    "mergevars" : [ "" ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
