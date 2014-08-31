<?php
/**
 * @file
 * User module integration.
 */

/**
 * Implements hook_bhackin_core_menu_alter() on behalf of user.module.
 */
function user_bhackin_core_menu_alter(&$items) {
  $items['user/%user/edit']['title'] = t('Edit account');
}
