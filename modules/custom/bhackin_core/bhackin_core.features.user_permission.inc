<?php
/**
 * @file
 * bhackin_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bhackin_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access connections tab'.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superuser' => 'superuser',
    ),
    'module' => 'connector',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'connect with oauthconnector_github'.
  $permissions['connect with oauthconnector_github'] = array(
    'name' => 'connect with oauthconnector_github',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'connector',
  );

  return $permissions;
}
