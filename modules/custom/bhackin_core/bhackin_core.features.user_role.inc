<?php
/**
 * @file
 * bhackin_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bhackin_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: association member.
  $roles['association member'] = array(
    'name' => 'association member',
    'weight' => 4,
  );

  // Exported role: superuser.
  $roles['superuser'] = array(
    'name' => 'superuser',
    'weight' => 2,
  );

  // Exported role: workshop member.
  $roles['workshop member'] = array(
    'name' => 'workshop member',
    'weight' => 5,
  );

  return $roles;
}
