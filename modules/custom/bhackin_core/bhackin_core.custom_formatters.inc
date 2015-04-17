<?php
/**
 * @file
 * bhackin_core.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function bhackin_core_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'event_type';
  $formatter->label = 'Event type';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'taxonomy_term_reference';
  $formatter->code = '$elements = array();

$terms = array();
foreach ($items as $item) {
  if (!isset($terms[$item[\'tid\']])) {
    $terms[$item[\'tid\']] = taxonomy_term_load($item[\'tid\']);
  }
  $term = $terms[$item[\'tid\']];
  if ($item[\'tid\'] == 14) {
    $elements[] = array(
      \'#type\'  => \'link\',
      \'#title\' => $object->title,
      \'#href\'  => "node/{$object->nid}",
    );
    continue;
  }
  $elements[] = array(
    \'#type\'   => \'markup\',
    \'#markup\' => $term->name,
  );
}

return $elements;';
  $formatter->fapi = '';
  $export['event_type'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'fontawesome_links';
  $formatter->label = 'Fontawesome links';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'links';
  $formatter->code = '$elements = array();

foreach ($items as $item) {
  $elements[] = array(
    \'#type\' => \'link\',
    \'#href\' => $item[\'field_links_url\'][LANGUAGE_NONE][0][\'url\'],
    \'#title\' => "<i class=\'fa fa-lg fa-{$item[\'field_links_type\'][LANGUAGE_NONE][0][\'value\']} social\'></i>",
    \'#attributes\' => array(
      \'rel\' => \'nofollow\',
    ),
    \'#options\' => array(
      \'html\' => TRUE
    ),
  );
}

return $elements;';
  $formatter->fapi = '';
  $export['fontawesome_links'] = $formatter;

  return $export;
}
