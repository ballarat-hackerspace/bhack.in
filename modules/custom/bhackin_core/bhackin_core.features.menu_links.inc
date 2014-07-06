<?php
/**
 * @file
 * bhackin_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bhackin_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:<front>
  $menu_links['main-menu_about:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'fragment' => 'about',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_what:<front>
  $menu_links['main-menu_what:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'What',
    'options' => array(
      'fragment' => 'what',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_what:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_where:<front>
  $menu_links['main-menu_where:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Where',
    'options' => array(
      'fragment' => 'where',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_where:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_add-content:node/add
  $menu_links['menu-administration_add-content:node/add'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-administration_content:admin/content',
  );
  // Exported menu link: menu-administration_basic-page:node/add/page
  $menu_links['menu-administration_basic-page:node/add/page'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_basic-page:node/add/page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-administration_add-content:node/add',
  );
  // Exported menu link: menu-administration_blog-post:node/add/blog
  $menu_links['menu-administration_blog-post:node/add/blog'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog post',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_blog-post:node/add/blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-administration_add-content:node/add',
  );
  // Exported menu link: menu-administration_content:admin/content
  $menu_links['menu-administration_content:admin/content'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_content:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Add content');
  t('Basic page');
  t('Blog post');
  t('Content');
  t('Home');
  t('What');
  t('Where');


  return $menu_links;
}
