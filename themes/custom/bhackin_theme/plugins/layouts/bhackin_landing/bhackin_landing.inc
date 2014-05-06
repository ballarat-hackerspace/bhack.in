<?php
/**
 * implementation of hook_panels_layouts()
 */

// Plugin definition
$plugin = array(
  'title'    => t('bHack: Landing'),
  'category' => t('bHack'),
  'icon'     => 'bhackin_landing.png',
  'theme'    => 'panels_bhackin_landing',
  'css'      => 'bhackin_landing.css',
  'regions'  => array(
    'header' => t('Header'),
    'about'  => t('About'),
    'what'   => t('What'),
    'quote'  => t('Quote'),
    'where'  => t('Where'),
  ),
);
