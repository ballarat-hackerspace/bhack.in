<?php
/**
 * @file
 * Commerce module integration.
 */

/**
 * Implements hook_commerce_currency_info_alter().
 */
function bhackin_core_commerce_currency_info_alter(&$currencies) {
  $currencies['AUD']['code_placement'] = '';
}
