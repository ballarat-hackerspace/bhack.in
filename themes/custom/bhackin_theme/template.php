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

/**
 * Theme link override.
 *
 * @param $variables
 *
 * @return string
 */
function bhackin_theme_link($variables) {
  // Prevent Gratars linking to user profiles.
  if (strstr($variables['text'], 'gravatar') && strpos($variables['path'], 'user/') === 0) {
    return $variables['text'];
  }

  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
}
