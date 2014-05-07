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

  // Exported role: superuser.
  $roles['superuser'] = array(
    'name' => 'superuser',
    'weight' => 2,
  );

  return $roles;
}
