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
  $items['commerce_payment_bhackin_bank_transfer'] = entity_import('rules_config', '{ "commerce_payment_bhackin_bank_transfer" : {
      "LABEL" : "Bank Transfer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "bank_transfer",
                "settings" : {
                  "details" : {
                    "account_owner" : "Ballarat Hackerspace, Inc",
                    "account_number" : "' . variable_get('bhackin_account_number', '') . '",
                    "account_iban" : "",
                    "bank_code_appellation" : "BSB",
                    "bank_code" : "' . variable_get('bhackin_account_bsb', '') . '",
                    "account_swift" : "",
                    "account_bank" : "",
                    "account_branch" : ""
                  },
                  "subject_oid" : 0,
                  "policy" : ""
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_blog_new'] = entity_import('rules_config', '{ "rules_blog_new" : {
      "LABEL" : "Node: New blog post",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
  $items['rules_contact_new_submission'] = entity_import('rules_config', '{ "rules_contact_new_submission" : {
      "LABEL" : "Contact: New submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "contact" : "contact" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "site:mail" ],
            "subject" : "[contact] [entityform:field-contact-subject]",
            "message" : "Contact form submission @ [entityform:created]\\r\\n\\r\\nName: [entityform:field-contact-name]\\r\\nEmail: [entityform:field-contact-email]\\r\\nSubject: [entityform:field-contact-subject]\\r\\n\\r\\nMessage:\\r\\n\\r\\n[entityform:field-contact-message]",
            "from" : [ "entityform:field-contact-email" ],
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_create_new_memberships'] = entity_import('rules_config', '{ "rules_create_new_memberships" : {
      "LABEL" : "Create new membership(s)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [
        "rules",
        "commerce_billy",
        "rules_conditional",
        "commerce_cart",
        "commerce_checkout",
        "tweaker",
        "commerce_billy_mail"
      ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "user:profile-membership:field-membership-type" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "commerce_order",
              "param_status" : "cart",
              "param_type" : "commerce_order",
              "param_owner" : [ "user" ],
              "param_commerce_order_total" : { "value" : { "amount" : 0, "currency_code" : "AUD" } }
            },
            "PROVIDE" : { "entity_created" : { "order" : "Order" } }
          }
        },
        { "commerce_billy_invoice_nr" : { "order" : [ "order" ] } },
        { "data_set" : { "data" : [ "order:mail" ], "value" : [ "user:mail" ] } },
        { "entity_query" : {
            "USING" : {
              "type" : "commerce_customer_profile",
              "property" : "uid",
              "value" : [ "user:uid" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "customer_profiles" : "Customer profiles" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "customer-profiles:0" ] } },
              "DO" : [
                { "entity_create" : {
                    "USING" : {
                      "type" : "commerce_customer_profile",
                      "param_type" : "billing",
                      "param_user" : [ "user" ]
                    },
                    "PROVIDE" : { "entity_created" : { "customer_profile" : "Customer profile" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "customer-profile:commerce-customer-address" ],
                    "value" : [ "user:profile-membership:field-membership-address" ]
                  }
                },
                { "data_set" : {
                    "data" : [ "customer-profile:commerce-customer-address:name-line" ],
                    "value" : "[user:profile-profile:field-profile-first-name] [user:profile-profile:field-profile-last-name]"
                  }
                },
                { "entity_save" : { "data" : [ "customer-profile" ], "immediate" : 1 } },
                { "list_add" : {
                    "list" : [ "customer-profiles" ],
                    "item" : [ "customer-profile" ],
                    "pos" : "start"
                  }
                }
              ]
            }
          ]
        },
        { "data_set" : {
            "data" : [ "order:commerce-customer-billing" ],
            "value" : [ "customer-profiles:0" ]
          }
        },
        { "data_set" : { "data" : [ "order:field-commerce-billy-i-date" ], "value" : "now" } },
        { "entity_save" : { "data" : [ "order" ], "immediate" : 1 } },
        { "LOOP" : {
            "USING" : { "list" : [ "user:profile-membership:field-membership-type" ] },
            "ITEM" : { "membership_type" : "Membership type" },
            "DO" : [
              { "commerce_cart_product_add_by_sku" : {
                  "USING" : {
                    "user" : [ "user" ],
                    "sku" : [ "membership-type:sku" ],
                    "quantity" : "1",
                    "combine" : 0
                  },
                  "PROVIDE" : { "product_add_line_item" : { "line_item" : "Line item" } }
                }
              }
            ]
          }
        },
        { "commerce_checkout_complete" : { "commerce_order" : [ "order" ] } },
        { "entity_create" : {
            "USING" : {
              "type" : "commerce_payment_transaction",
              "param_user" : [ "user" ],
              "param_order" : [ "order" ],
              "param_payment_method" : "bank_transfer"
            },
            "PROVIDE" : { "entity_created" : { "transaction" : "Transaction" } }
          }
        },
        { "data_set" : { "data" : [ "transaction:status" ], "value" : "pending" } },
        { "data_set" : {
            "data" : [ "transaction:amount" ],
            "value" : [ "order:commerce-order-total:amount" ]
          }
        },
        { "data_set" : {
            "data" : [ "transaction:currency-code" ],
            "value" : [ "order:commerce-order-total:currency-code" ]
          }
        },
        { "drupal_array_set_nested_value" : {
            "data" : [ "order:data" ],
            "parents" : "payment_method",
            "value" : "bank_transfer|commerce_payment_bhackin_bank_transfer"
          }
        },
        { "commerce_billy_mail_action_send_invoice" : { "order" : [ "order" ] } }
      ]
    }
  }');
  $items['rules_register_interest'] = entity_import('rules_config', '{ "rules_register_interest" : {
      "LABEL" : "Entityform: New registration of interest",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
  $items['rules_require_menu_link_or_url_alias'] = entity_import('rules_config', '{ "rules_require_menu_link_or_url_alias" : {
      "LABEL" : "Require Menu link or URL alias",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "tweaker", "rules" ],
      "ON" : { "form_validate" : [] },
      "IF" : [
        { "drupal_array_nested_key_exists" : { "array" : [ "form" ], "parents" : "#node" } },
        { "node_is_of_type" : { "node" : [ "form:#node" ], "type" : { "value" : { "page" : "page" } } } },
        { "drupal_array_get_nested_value_empty" : { "array" : [ "form-state" ], "parents" : "values:menu:enabled" } },
        { "drupal_array_get_nested_value_empty" : { "array" : [ "form-state" ], "parents" : "values:path:alias" } },
        { "data_is" : { "data" : [ "form:#node_edit_form" ], "value" : 1 } }
      ],
      "DO" : [
        { "form_set_error" : {
            "name" : "menu[enabled]",
            "message" : "A menu entry or a manual URL alias is required."
          }
        }
      ]
    }
  }');
  return $items;
}
