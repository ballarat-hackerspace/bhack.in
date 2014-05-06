<?php
/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess().
 */
/** *
function bhackin_theme_preprocess(&$vars, $hook) {
  $debug = 1;
}
/** */

/**
 * Implements hook_preprocess_page().
 */
function bhackin_theme_preprocess_page(&$vars) {
  $vars['logo'] = file_create_url(drupal_get_path('theme', 'bhackin_theme') . '/logo.svg');
}
