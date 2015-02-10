<?php
/**
 * @file
 * bhackin_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhackin_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "mollom" && $api == "mollom") {
    return array("version" => "1");
  }
  if ($module == "oauthconnector" && $api == "oauthconnector") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bhackin_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "plain_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : 0, "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "thank-you",
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
 * Implements hook_image_default_styles().
 */
function bhackin_core_image_default_styles() {
  $styles = array();

  // Exported image style: blog.
  $styles['blog'] = array(
    'name' => 'blog',
    'label' => 'Blog',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 737,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 737,
          'height' => 415,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: blog_custom_user_desktop_1x.
  $styles['blog_custom_user_desktop_1x'] = array(
    'name' => 'blog_custom_user_desktop_1x',
    'label' => 'Blog - Desktop',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 698,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 698,
          'height' => 393,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: blog_custom_user_tablet_1x.
  $styles['blog_custom_user_tablet_1x'] = array(
    'name' => 'blog_custom_user_tablet_1x',
    'label' => 'Blog - Tablet',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 533,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 533,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: blog_custom_user_wide_1x.
  $styles['blog_custom_user_wide_1x'] = array(
    'name' => 'blog_custom_user_wide_1x',
    'label' => 'Blog - Wide',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 848,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 848,
          'height' => 477,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_mailchimp_list().
 */
function bhackin_core_default_mailchimp_list() {
  $items = array();
  $items['register_interest'] = entity_import('mailchimp_list', '{
    "name" : "register_interest",
    "mc_list_id" : "e82fdfd78f",
    "label" : "bHack newsletter",
    "description" : "",
    "settings" : {
      "roles" : { "1" : 1 },
      "mergefields" : {
        "EMAIL" : "mail",
        "FNAME" : "profile-profile:field_profile_first_name",
        "LNAME" : "profile-profile:field-profile-last-name"
      },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 1, "LNAME" : 1 },
      "doublein" : 0,
      "show_register_form" : 1,
      "default_register_form_optin" : 0,
      "show_account_form" : 1,
      "form_label" : "bHack newsletter",
      "submit_label" : "Submit",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function bhackin_core_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function bhackin_core_default_profile2_type() {
  $items = array();
  $items['membership'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "membership",
    "label" : "Membership",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 }
  }');
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 }
  }');
  return $items;
}
