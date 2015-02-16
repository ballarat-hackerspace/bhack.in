<?php
/**
 * @file
 * Insert module integration.
 */

/**
 * Implements hook_insert_styles().
 */
function bhackin_core_insert_styles() {
  $insert_styles['bhackin_page_image'] = array(
    'label' => t('bHack.in page image'),
  );

  return $insert_styles;
}

/**
 * Implements hook_insert_content().
 */
function bhackin_core_insert_content($item, $style, $widget) {
  return "!(FID:{$item['fid']})";
}
