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
  $items['commerce_billy_invoice_order'] = entity_import('rules_config', '{ "commerce_billy_invoice_order" : {
      "LABEL" : "Invoice order",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "rules", "commerce_order", "commerce_billy", "commerce_billy_mail" ],
      "USES VARIABLES" : { "order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "order" ], "field" : "field_commerce_billy_i_date" } },
        { "data_is_empty" : { "data" : [ "order:field-commerce-billy-i-date" ] } }
      ],
      "DO" : [
        { "commerce_order_update_state" : { "commerce_order" : [ "order" ], "order_state" : "invoiced" } },
        { "commerce_billy_invoice_nr" : { "order" : [ "order" ] } },
        { "data_set" : { "data" : [ "order:field-commerce-billy-i-date" ], "value" : "now" } },
        { "commerce_billy_mail_action_send_invoice" : { "order" : [ "order" ] } }
      ]
    }
  }');
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
  $items['commerce_recurring_bhackin_generate_recurring_order'] = entity_import('rules_config', '{ "commerce_recurring_bhackin_generate_recurring_order" : {
      "LABEL" : "Generate recurring orders on cron run",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "commerce_recurring", "rules" ],
      "ON" : { "commerce_recurring_cron" : [] },
      "DO" : [
        { "commerce_recurring_get_due_items" : {
            "USING" : { "number_items" : 5, "timestamp" : [ "site:current-date" ] },
            "PROVIDE" : { "commerce_recurring_entities" : { "commerce_recurring_entities" : "Commerce recurring entities" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-recurring-entities" ] },
            "ITEM" : { "current_recurring_entity" : "Current recurring entity" },
            "DO" : [
              { "commerce_recurring_provide_order_properties" : {
                  "USING" : { "commerce_recurring" : [ "current-recurring-entity" ] },
                  "PROVIDE" : {
                    "commerce_order" : { "commerce_order" : "Commerce Order" },
                    "commerce_customer_billing" : { "commerce_customer_billing" : "Billing information" }
                  }
                }
              },
              { "commerce_recurring_generate_order_from_recurring" : {
                  "USING" : {
                    "commerce_recurring" : [ "current-recurring-entity" ],
                    "timestamp" : [ "site:current-date" ],
                    "commerce_customer_billing" : [ "commerce-customer-billing" ]
                  },
                  "PROVIDE" : { "commerce_order" : { "recurring_order" : "Recurring Order" } }
                }
              },
              { "component_rules_add_payment_entity" : { "order" : [ "recurring-order" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_add_payment_entity'] = entity_import('rules_config', '{ "rules_add_payment_entity" : {
      "LABEL" : "Add payment entity",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "rules", "tweaker" ],
      "USES VARIABLES" : { "order" : { "label" : "Order", "type" : "commerce_order" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "commerce_payment_transaction",
              "param_user" : [ "order:owner" ],
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
        }
      ]
    }
  }');
  $items['rules_bhackin_complete_order'] = entity_import('rules_config', '{ "rules_bhackin_complete_order" : {
      "LABEL" : "Complete order on full payment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "commerce_order", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "DO" : [
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce_order" ], "order_state" : "completed" } }
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
        "commerce_checkout"
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
        { "component_rules_add_payment_entity" : { "order" : [ "order" ] } }
      ]
    }
  }');
  $items['rules_invoice_on_order'] = entity_import('rules_config', '{ "rules_invoice_on_order" : {
      "LABEL" : "Invoice on order",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "bHack.in" ],
      "REQUIRES" : [ "rules", "commerce_payment", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "commerce-order" ],
            "type" : "commerce_order",
            "bundle" : { "value" : { "commerce_order" : "commerce_order" } }
          }
        },
        { "data_is_empty" : { "data" : [ "commerce-order:field-commerce-billy-i-date" ] } },
        { "list_count_is" : {
            "list" : [ "commerce-order:commerce-line-items" ],
            "op" : "\\u003E",
            "value" : "0"
          }
        },
        { "commerce_payment_selected_payment_method" : { "commerce_order" : [ "commerce_order" ], "method_id" : "bank_transfer" } }
      ],
      "DO" : [
        { "component_commerce_billy_invoice_order" : { "order" : [ "commerce-order" ] } }
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
