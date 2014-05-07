<?php
/**
 * @file
 * bhackin_core.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function bhackin_core_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'blog_image';
  $picture_mapping->breakpoint_group = 'blog_image';
  $picture_mapping->mapping = array(
    'custom.user.wide' => array(
      '1x' => 'blog_custom_user_wide_1x',
    ),
    'custom.user.desktop' => array(
      '1x' => 'blog_custom_user_desktop_1x',
    ),
    'custom.user.tablet' => array(
      '1x' => 'blog_custom_user_tablet_1x',
    ),
  );
  $export['blog_image'] = $picture_mapping;

  return $export;
}
