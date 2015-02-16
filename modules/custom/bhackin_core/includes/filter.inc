<?php
/**
 * @file
 * Filter module integration.
 */

/**
 * Implements hook_filter_info().
 */
function bhackin_core_filter_info() {
  $filters['bhackin_page_image'] = array(
    'title'            => t('bHack.in page image'),
    'process callback' => 'bhackin_core_filter_page_image_process',
  );

  return $filters;
}

/**
 * Process callback for 'bHack.in page image' filter.
 */
function bhackin_core_filter_page_image_process($text, $filter, $format, $langcode, $cache, $cache_id) {
  $recursion =& drupal_static(__FUNCTION__, FALSE);

  if (!$recursion) {
    $entity_type = 'node';
    $bundle_name = 'page';
    $field_name  = 'field_page_images';

    preg_match_all('/\!\(FID\:(.*?)\)/', $text, $matches, PREG_SET_ORDER);
    foreach ($matches as $match) {
      $query  = new EntityFieldQuery();
      $result = $query->entityCondition('entity_type', $entity_type)
        ->entityCondition('bundle', $bundle_name)
        ->fieldCondition($field_name, 'fid', $match[1])
        ->addMetaData('account', user_load(1))
        ->execute();
      if (!empty($result[$entity_type])) {
        $recursion = TRUE;
        $entities  = entity_load($entity_type, array_keys($result[$entity_type]));
        $entity    = reset($entities);
        $field     = field_info_field($field_name);
        $instance  = field_info_instance($entity_type, $field_name, $bundle_name);
        $langcode  = field_language($entity_type, $entity, $field_name);

        $items = field_get_items($entity_type, $entity, $field_name, $langcode);
        foreach ($items as $delta => $item) {
          if ($item['fid'] != $match[1]) {
            unset($items[$delta]);
          }
        }

        $display = array(
          'settings' => array(
            'picture_mapping'      => 'page_image',
            'fallback_image_style' => 'page_image',
            'image_link'           => '',
            'module'               => 'picture',
          )
        );

        $output = picture_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display);
        $text   = str_replace($match[0], render($output), $text);
      }
    }
  }

  return $text;
}
