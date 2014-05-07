<?php
/**
 * @file
 * Mobile Friendly Navigation Toolbar module integration.
 */

/**
 * Implements hook_navbar_alter().
 */
function bhackin_core_navbar_alter(&$items) {
  // Remove user menu as it's in the site's navigation menu.
  unset($items['user']);
}
