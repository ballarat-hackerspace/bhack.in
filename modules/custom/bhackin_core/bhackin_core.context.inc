<?php
/**
 * @file
 * bhackin_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bhackin_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'servser-dev';
  $context->description = '';
  $context->tag = 'bhack.in::server';
  $context->conditions = array(
    'server_vars' => array(
      'values' => array(
        'variables' => array(
          0 => array(
            'name' => 'HTTP_HOST',
            'op' => '==',
            'negate' => 0,
            'value' => 'bhack.ld',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'reroute_email' => 'enable',
    ),
    'variable' => array(
      'prepro' => array(
        'filetypes' => array(
          'sass' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
          'scss' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
        ),
        'additional' => array(
          'sassy' => array(
            'watchdog' => 1,
            'debug' => 1,
            'errors' => 'output',
            'style' => 'expanded',
          ),
        ),
        'show_warnings' => TRUE,
      ),
      'reroute_email_enable' => 1,
      'reroute_email_address' => 'admin@bhack.in',
      'googleanalytics_account' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::server');
  $export['servser-dev'] = $context;

  return $export;
}
