<?php
/**
 * @file
 * bhackin_core.oauthconnector.inc
 */

/**
 * Implements hook_default_oauthconnector_provider().
 */
function bhackin_core_default_oauthconnector_provider() {
  $export = array();

  $provider = new stdClass();
  $provider->disabled = FALSE; /* Edit this to true to make a default provider disabled initially */
  $provider->api_version = 1;
  $provider->name = 'github';
  $provider->title = 'GitHub';
  $provider->url = 'https://github.com';
  $provider->consumer_advanced = array(
    'oauth2' => 1,
    'signature method' => 'HMAC-SHA1',
    'authentication realm' => '',
    'request token endpoint' => '/oauth/request_token',
    'authorization scope' => 'repo,user',
    'authorization endpoint' => '/login/oauth/authorize',
    'access token endpoint' => '/login/oauth/access_token',
  );
  $provider->mapping = array(
    'fields' => array(
      'uid' => array(
        'resource' => 'https://api.github.com/user',
        'method post' => 0,
        'field' => 'login',
        'querypath' => FALSE,
        'sync_with_field' => 'name',
      ),
      'name' => array(
        'resource' => 'https://api.github.com/user',
        'method post' => 0,
        'field' => 'name',
        'querypath' => FALSE,
        'sync_with_field' => '',
      ),
      'avatar' => array(
        'resource' => '',
        'method post' => 0,
        'field' => '',
        'querypath' => FALSE,
        'sync_with_field' => '',
      ),
    ),
    'format' => 'json',
  );
  $export['github'] = $provider;

  return $export;
}
