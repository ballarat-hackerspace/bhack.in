<?php
/**
 * @file
 * Contains 'Copyright' block class.
 */

class bhackinBlock_Copyright extends bhackinTokenBlock {

  /**
   * Implements hook_block_info().
   */
  function info() {
    return parent::info(array(
      'info' => t('Copyright'),
      'cache' => DRUPAL_CACHE_GLOBAL,
    ));
  }

  /**
   * Value callback for token_replace().
   */
  function value() {
    return '&copy; 2013 - [site:current-date:custom:Y] bHack.';
  }

}
