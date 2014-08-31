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
  $field_group->identifier = 'group_profile_main|profile2|profile|form';
  $field_group->group_name = 'group_profile_main';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_bio',
      1 => 'field_profile_first_name',
      2 => 'field_profile_last_name',
      3 => 'field_profile_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-main field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_main|profile2|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_social|profile2|profile|form';
  $field_group->group_name = 'group_profile_social';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '6',
    'children' => array(
      0 => 'field_profile_irc',
      1 => 'field_profile_facebook',
      2 => 'field_profile_github',
      3 => 'field_profile_gplus',
      4 => 'field_profile_linkedin',
      5 => 'field_profile_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-social field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_social|profile2|profile|form'] = $field_group;

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
