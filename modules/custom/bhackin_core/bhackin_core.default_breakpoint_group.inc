<?php
/**
 * @file
 * bhackin_core.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function bhackin_core_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'blog_image';
  $breakpoint_group->name = 'Blog image';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.wide',
    1 => 'custom.user.desktop',
    2 => 'custom.user.tablet',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['blog_image'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'page_images';
  $breakpoint_group->name = 'Page images';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.tablet',
    1 => 'custom.user.desktop',
    2 => 'custom.user.wide',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['page_images'] = $breakpoint_group;

  return $export;
}
