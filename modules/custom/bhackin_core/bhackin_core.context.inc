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
  $context->name = 'layout-blog';
  $context->description = '';
  $context->tag = 'bhack.in::layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog*' => 'blog*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::layout');
  $export['layout-blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-blog-post';
  $context->description = '';
  $context->tag = 'bhack.in::layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'gplus_comments_block-gplus_comments' => array(
          'module' => 'gplus_comments_block',
          'delta' => 'gplus_comments',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
    'breadcrumb' => 'blog',
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::layout');
  $export['layout-blog-post'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-contact';
  $context->description = '';
  $context->tag = 'bhack.in::layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact*' => 'contact*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-contact-information' => array(
          'module' => 'bean',
          'delta' => 'contact-information',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::layout');
  $export['layout-contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-global';
  $context->description = '';
  $context->tag = 'bhack.in::layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'bhackin_core-copyright' => array(
          'module' => 'bhackin_core',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::layout');
  $export['layout-global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-members-profile';
  $context->description = '';
  $context->tag = 'bhack.in::layout';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'members',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::layout');
  $export['layout-members-profile'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-user_op-anonymous';
  $context->description = '';
  $context->tag = 'bhack.in::layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/register' => 'user/register',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'connector-one_click_block' => array(
          'module' => 'connector',
          'delta' => 'one_click_block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::layout');
  $export['layout-user_op-anonymous'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-development';
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
          1 => array(
            'name' => 'HTTP_HOST',
            'op' => '==',
            'negate' => 0,
            'value' => 'bhack.dev',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'reroute_email' => 'enable',
      'coffee' => 'enable',
      'module_filter' => 'enable',
      'context_ui' => 'enable',
      'dblog' => 'enable',
      'views_ui' => 'enable',
      'stage_file_proxy' => 'enable',
      'which_feature' => 'enable',
      'devel' => 'enable',
      'devel_generate' => 'enable',
      'ds_ui' => 'enable',
      'variable_admin' => 'enable',
      'syslog' => 'disable',
      'xmlsitemap_engines' => 'disable',
      'securesite' => 'disable',
    ),
    'variable' => array(
      'bot_channels' => '#bHack-dev',
      'bot_nickname' => 'bOTHack-dev',
      'bot_password' => '',
      'environment_indicator_overwrite' => 1,
      'environment_indicator_overwritten_name' => 'Development',
      'googleanalytics_account' => '',
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
        'show_warnings' => FALSE,
      ),
      'reroute_email_enable' => 1,
      'reroute_email_address' => 'admin@bhack.in',
      'stage_file_proxy_origin' => 'http://bhack.in',
      'stage_file_proxy_origin_dir' => 'sites/bhack.in/files',
      'preprocess_css' => 0,
      'preprocess_js' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::server');
  $export['server-development'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-production';
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
            'value' => 'ballarathackerspace.org.au',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'syslog' => 'enable',
      'xmlsitemap_engines' => 'enable',
      'module_filter' => 'disable',
      'coffee' => 'disable',
      'context_ui' => 'disable',
      'dblog' => 'disable',
      'reroute_email' => 'disable',
      'views_ui' => 'disable',
      'stage_file_proxy' => 'disable',
      'which_feature' => 'disable',
      'devel' => 'disable',
      'devel_generate' => 'disable',
      'ds_ui' => 'disable',
      'variable_admin' => 'disable',
      'securesite' => 'disable',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::server');
  $export['server-production'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-staging';
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
            'value' => 'stage.ballarathackerspace.org.au',
          ),
          1 => array(
            'name' => 'HTTP_HOST',
            'op' => '==',
            'negate' => 0,
            'value' => 'bhack.stage',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'reroute_email' => 'enable',
      'dblog' => 'enable',
      'syslog' => 'disable',
      'xmlsitemap_engines' => 'disable',
      'devel' => 'disable',
      'devel_generate' => 'disable',
      'coffee' => 'disable',
      'module_filter' => 'disable',
      'context_ui' => 'disable',
      'views_ui' => 'disable',
      'stage_file_proxy' => 'disable',
      'which_feature' => 'disable',
      'ds_ui' => 'disable',
      'variable_admin' => 'disable',
      'securesite' => 'enable',
    ),
    'variable' => array(
      'bot_channels' => '#bHack-dev',
      'bot_nickname' => 'bOTHack-dev',
      'bot_password' => '',
      'googleanalytics_account' => '',
      'prepro' => array(
        'filetypes' => array(
          'sass' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/cache',
            'cache_path' => 'public://prepro',
          ),
          'scss' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/cache',
            'cache_path' => 'public://prepro',
          ),
        ),
        'additional' => array(
          'sassy' => array(
            'watchdog' => 1,
            'debug' => 0,
            'errors' => 'watchdog',
            'style' => 'nested',
          ),
        ),
        'show_warnings' => FALSE,
      ),
      'reroute_email_enable' => 1,
      'reroute_email_address' => 'admin@bhack.in',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bhack.in::server');
  $export['server-staging'] = $context;

  return $export;
}
