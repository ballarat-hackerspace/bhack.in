<?php
/**
 * @file
 * bhackin_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhackin_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "oauthconnector" && $api == "oauthconnector") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function bhackin_core_default_entityform_type() {
  $items = array();
  $items['register_interest'] = entity_import('entityform_type', '{
    "type" : "register_interest",
    "label" : "Register interest",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "Register interest",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thanks",
      "submission_text" : { "value" : "Thanks", "format" : "plain_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : 0, "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "plain_text" },
      "current_type" : "register_interest",
      "enable_block" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function bhackin_core_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
