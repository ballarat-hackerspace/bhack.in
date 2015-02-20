<?php
/**
 * @file
 * System module integration.
 */

/**
 * Implements hook_init().
 */
function bhackin_core_init() {
  module_invoke_all('bhackin_core_init');
}

/**
 * Implements hook_module_implementations_alter().
 */
function bhackin_core_module_implements_alter(&$implementations, $hook) {
  $hooks = array('form_alter', 'query_alter');
  if (in_array($hook, $hooks) && isset($implementations['bhackin_core'])) {
    $implementation = $implementations['bhackin_core'];
    unset($implementations['bhackin_core']);
    $implementations['bhackin_core'] = $implementation;
  }
}

/**
 * Implements hook_preprocess().
 */
function bhackin_core_preprocess(&$vars, $hook) {
  drupal_alter('bhackin_core_preprocess', $vars, $hook);
  drupal_alter("bhackin_core_preprocess_{$hook}", $vars);
}

/**
 * Implements hook_form_alter().
 */
function bhackin_core_form_alter(&$form, $form_state, $form_id) {
  // Debug code; display $form_id.
  if (module_exists('devel') && isset($_GET['debug']) && ($_GET['debug'] == 1 || isset($_GET['debug']['form_id']))) {
    dpm($form_id, '$form_id');
  }

  drupal_alter('bhackin_core_form', $form, $form_state, $form_id);
  drupal_alter("bhackin_core_form_{$form_id}", $form, $form_state);
}

/**
 * Implements hook_block_info().
 */
function bhackin_core_block_info() {
  $blocks = array();

  // Load all block includes.
  $dirname  = dirname(__FILE__);
  $includes = file_scan_directory("{$dirname}/../blocks", '/.inc$/');
  foreach ($includes as $file) {
    require_once $file->uri;

    // Process block into class name.
    $block = 'bhackinBlock_' . bhackin_core_underscores_to_camelcase($file->name, TRUE);

    // Build block info.
    $block               = new $block();
    $blocks[$file->name] = $block->info();
  }

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function bhackin_core_block_view($delta = '') {
  if (file_exists($file = dirname(__FILE__) . "/../blocks/{$delta}.inc")) {
    require_once $file;

    // Process block into class name.
    $block = 'bhackinBlock_' . bhackin_core_underscores_to_camelcase($delta, TRUE);

    // Return block view.
    $block = new $block();

    return $block->view();
  }

  return FALSE;
}

/**
 * Implements hook_field_extra_fields().
 */
function bhackin_core_field_extra_fields() {
  $extra = array();
  drupal_alter('bhackin_core_field_extra_fields', $extra);

  return $extra;
}
