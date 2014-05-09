<?php
/**
 * @file
 * bhackin_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bhackin_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_account|user|user|form';
  $field_group->group_name = 'group_user_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '3',
    'children' => array(
      0 => 'admin_select',
      1 => 'googleanalytics',
      2 => 'account',
      3 => 'timezone',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Account',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_user_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile|user|user|form';
  $field_group->group_name = 'group_user_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_irc',
      1 => 'field_user_name',
      2 => 'field_user_bio',
      3 => 'picture',
      4 => 'field_user_links',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_user_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user|user|user|form';
  $field_group->group_name = 'group_user';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User',
    'weight' => '1',
    'children' => array(
      0 => 'group_user_account',
      1 => 'group_user_profile',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'User',
      'instance_settings' => array(
        'classes' => 'nav nav-pills',
      ),
    ),
  );
  $export['group_user|user|user|form'] = $field_group;

  return $export;
}
