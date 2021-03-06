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

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access connections tab'.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
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

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'connect with oauthconnector_github'.
  $permissions['connect with oauthconnector_github'] = array(
    'name' => 'connect with oauthconnector_github',
    'roles' => array(),
    'module' => 'connector',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any block bean'.
  $permissions['edit any block bean'] = array(
    'name' => 'edit any block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own profile profile'.
  $permissions['edit own profile profile'] = array(
    'name' => 'edit own profile profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'menu view unpublished'.
  $permissions['menu view unpublished'] = array(
    'name' => 'menu view unpublished',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'menu_view_unpublished',
  );

  // Exported permission: 'publish button publish any content types'.
  $permissions['publish button publish any content types'] = array(
    'name' => 'publish button publish any content types',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'use text format markdown'.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'superuser' => 'superuser',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any block bean'.
  $permissions['view any block bean'] = array(
    'name' => 'view any block bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'superuser' => 'superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view bot logs: #bHack'.
  $permissions['view bot logs: #bHack'] = array(
    'name' => 'view bot logs: #bHack',
    'roles' => array(),
    'module' => 'bot_log',
  );

  // Exported permission: 'view own profile profile'.
  $permissions['view own profile profile'] = array(
    'name' => 'view own profile profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'superuser' => 'superuser',
    ),
    'module' => 'node',
  );

  return $permissions;
}
