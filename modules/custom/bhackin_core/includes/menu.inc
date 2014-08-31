<?php
/**
 * @file
 * Menu module integration.
 */

/**
 * Implements hook_menu_alter().
 */
function bhackin_core_menu_alter(&$items) {
  drupal_alter('bhackin_core_menu', $items);
  return $items;
}
