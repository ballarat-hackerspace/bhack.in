<?php
/**
 * @file
 * Product Reference module integration.
 */

/**
 * Implements hook_field_widget_WIDGET_TYPE_form_alter().
 *
 * Some visual tweaks to the product reference field.
 */
function bhackin_core_field_widget_options_buttons_form_alter(&$element, &$form_state, $context) {
  if ($context['field']['type'] == 'commerce_product_reference') {
    foreach ($element['#options'] as $key => &$value) {
      $product = commerce_product_load($key);

      // Get product price.
      $field    = field_info_field('commerce_price');
      $instance = field_info_instance('commerce_product', 'commerce_price', 'membership');
      $langcode = field_language('commerce_product', $product, 'commerce_price');
      $items    = field_get_items('commerce_product', $product, 'commerce_price');
      $display  = array(
        'type' => 'commerce_price_formatted_amount',
      );
      $price    = commerce_price_field_formatter_view('commerce_product', $product, $field, $instance, $langcode, $items, $display);

      // Get product recurring period.
      $langcode = field_language('commerce_product', $product, 'commerce_recurring_rec_period');
      $period   = $product->commerce_recurring_rec_period[$langcode][0]['period'];

      $value = t('@title - @price per @period', array(
        '@title'  => $product->title,
        '@price'  => render($price),
        '@period' => $period,
      ));
    }
  }
}
