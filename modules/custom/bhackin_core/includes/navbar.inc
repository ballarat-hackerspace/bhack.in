<?php
/**
 * @file
 * Mobile Friendly Navigation Toolbar module integration.
 */

/**
 * Implements hook_navbar_alter().
 */
function bhackin_core_navbar_alter(&$items) {
  $items['home']['tab']['#title'] = variable_get('site_name', NULL);

  // Inject main-menu into Navbar.
  $tree = menu_tree_all_data('main-menu');
  navbar_menu_navigation_links($tree);

  $items['home']['tray'] = array(
    '#heading'    => t('Main menu'),
    'navbar_home' => array(
      '#type'       => 'container',
      '#attributes' => array(
        'class' => array('navbar-menu-administration'),
      ),
      'home'        => menu_tree_output($tree),
    ),
  );
}
