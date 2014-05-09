<?php
/**
 * @file
 * bhackin_core.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function bhackin_core_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'links';
  $multifield->label = 'Links';
  $multifield->description = '';
  $export['links'] = $multifield;

  return $export;
}
