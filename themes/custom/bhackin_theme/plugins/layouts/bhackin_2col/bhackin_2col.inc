<?php
/**
 * implementation of hook_panels_layouts()
 */

// Plugin definition
$plugin = array(
  'title'    => t('bHack: Two column'),
  'category' => t('bHack'),
  'icon'     => 'bhackin_2col.png',
  'theme'    => 'panels_bhackin_2col',
  'regions'  => array(
    'left'  => t('Left'),
    'right' => t('Right'),
  ),
);
