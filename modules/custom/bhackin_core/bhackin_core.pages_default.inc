<?php
/**
 * @file
 * bhackin_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bhackin_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Home - Anonymous',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'front-landing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bhackin_landing';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => 'container',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '',
        'region_separation' => '',
        'row_separation' => '',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'about',
        ),
        'parent' => 'main',
        'class' => 'region-color-grey-light',
      ),
      'about' => array(
        'type' => 'region',
        'title' => 'About',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'what',
        ),
        'parent' => 'main',
        'class' => 'region-color-grey-dark',
      ),
      'what' => array(
        'type' => 'region',
        'title' => 'What',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'quote',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'quote' => array(
        'type' => 'region',
        'title' => 'Quote',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'where',
        ),
        'parent' => 'main',
        'class' => 'region-color-grey-light',
      ),
      'where' => array(
        'type' => 'region',
        'title' => 'Where',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'quote' => NULL,
      'where' => NULL,
      'about' => NULL,
      'center' => NULL,
      'default' => NULL,
      'header' => NULL,
      'what' => NULL,
    ),
    'about' => array(
      'style' => 'naked',
    ),
    'center' => array(
      'style' => 'naked',
    ),
    'what' => array(
      'style' => 'naked',
    ),
    'quote' => array(
      'style' => 'naked',
    ),
    'where' => array(
      'style' => 'naked',
    ),
    'style' => 'naked',
    'header' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a32bd270-98cc-469d-97c8-3d49fad9c56e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ad47cab-cd7c-413a-8307-ff30a97b92ad';
    $pane->panel = 'about';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About',
      'body' => '<p>
  bHack is modeled on an <a href="http://hackerspaces.org"> international community of like minded spaces</a> that started in Germany in 1995. It supports and encourages science, technology, engineering, art and math culture in the Ballarat region by providing a physical space for residents to meet, interact and create.
</p>
<p>
  We hold public meetups on the 1<sup>st</sup> and 3<sup>rd</sup> Tuesdays of each month. These meetups are where we invite you to join us and chat, participate in show and tell, get help or advice, or talk about your projects.
</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'style' => 'bhackin_row',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ad47cab-cd7c-413a-8307-ff30a97b92ad';
    $display->content['new-5ad47cab-cd7c-413a-8307-ff30a97b92ad'] = $pane;
    $display->panels['about'][0] = 'new-5ad47cab-cd7c-413a-8307-ff30a97b92ad';
    $pane = new stdClass();
    $pane->pid = 'new-d568b89a-9161-4351-a905-22fc588d3a59';
    $pane->panel = 'about';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'The Hackerspace Movement',
      'title' => '',
      'body' => '<div class="the-box-landing border-hover-bottom text-center">
  <h4>The Hackerspace Movement</h4>
  <iframe class="youtube" width="560" height="315" src="https://www.youtube.com/embed/WkiX7R1-kaY" frameborder="0" allowfullscreen></iframe>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'column_size' => '8',
        'offset_size' => '2',
      ),
      'style' => 'bhackin_row',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd568b89a-9161-4351-a905-22fc588d3a59';
    $display->content['new-d568b89a-9161-4351-a905-22fc588d3a59'] = $pane;
    $display->panels['about'][1] = 'new-d568b89a-9161-4351-a905-22fc588d3a59';
    $pane = new stdClass();
    $pane->pid = 'new-ba3b178a-b600-4001-af60-33b62dced1e4';
    $pane->panel = 'header';
    $pane->type = 'page_slogan';
    $pane->subtype = 'page_slogan';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'h2',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba3b178a-b600-4001-af60-33b62dced1e4';
    $display->content['new-ba3b178a-b600-4001-af60-33b62dced1e4'] = $pane;
    $display->panels['header'][0] = 'new-ba3b178a-b600-4001-af60-33b62dced1e4';
    $pane = new stdClass();
    $pane->pid = 'new-42ad42ac-5cd6-4508-8b18-262e666d5e26';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'A Ballarat Hackerspace',
      'title' => '',
      'body' => '<h4>A <strong>Ballarat</strong> Hackerspace</h4>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => 0,
    );
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '42ad42ac-5cd6-4508-8b18-262e666d5e26';
    $display->content['new-42ad42ac-5cd6-4508-8b18-262e666d5e26'] = $pane;
    $display->panels['header'][1] = 'new-42ad42ac-5cd6-4508-8b18-262e666d5e26';
    $pane = new stdClass();
    $pane->pid = 'new-833eae70-8913-4f7e-afda-2477bbc48ee3';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-register_interest';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'bhackin_row',
      'settings' => array(
        'column_size' => '6',
        'offset_size' => '3',
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '833eae70-8913-4f7e-afda-2477bbc48ee3';
    $display->content['new-833eae70-8913-4f7e-afda-2477bbc48ee3'] = $pane;
    $display->panels['header'][2] = 'new-833eae70-8913-4f7e-afda-2477bbc48ee3';
    $pane = new stdClass();
    $pane->pid = 'new-9efed2c7-a87e-40c8-8fc8-a5999ab0b729';
    $pane->panel = 'quote';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Thomas A. Edison',
      'title' => '',
      'body' => '<h1>To invent, you need a good imagination and a pile of junk.</h1>
<h3>– Thomas A. Edison</h3>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'container text-center',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9efed2c7-a87e-40c8-8fc8-a5999ab0b729';
    $display->content['new-9efed2c7-a87e-40c8-8fc8-a5999ab0b729'] = $pane;
    $display->panels['quote'][0] = 'new-9efed2c7-a87e-40c8-8fc8-a5999ab0b729';
    $pane = new stdClass();
    $pane->pid = 'new-d44232bd-192b-4b07-b653-588d4d8dd8e8';
    $pane->panel = 'what';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What',
      'body' => '<p>
  Hackerspaces are centers of unique community, each supporting the individuals there to explore and do what they love, each an inspirational source of true education where anyone can learn what they need to live the lives they want to live, each a vibrant hub of local community.
</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'style' => 'bhackin_row',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd44232bd-192b-4b07-b653-588d4d8dd8e8';
    $display->content['new-d44232bd-192b-4b07-b653-588d4d8dd8e8'] = $pane;
    $display->panels['what'][0] = 'new-d44232bd-192b-4b07-b653-588d4d8dd8e8';
    $pane = new stdClass();
    $pane->pid = 'new-f182e996-5b30-43a7-8196-7acb3afe1fc2';
    $pane->panel = 'what';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Regional Hackerspaces',
      'title' => '',
      'body' => '<div class="the-box-landing border-hover-bottom text-center">
  <h4>Regional Hackerspaces</h4>
  <iframe class="youtube" width="560" height="315" src="https://www.youtube.com/embed/hoe7YX_vdgk?list=UUPWv9iwjQ3SZ196VsjP3hEg" frameborder="0" allowfullscreen></iframe>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'column_size' => '8',
        'offset_size' => '2',
      ),
      'style' => 'bhackin_row',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f182e996-5b30-43a7-8196-7acb3afe1fc2';
    $display->content['new-f182e996-5b30-43a7-8196-7acb3afe1fc2'] = $pane;
    $display->panels['what'][1] = 'new-f182e996-5b30-43a7-8196-7acb3afe1fc2';
    $pane = new stdClass();
    $pane->pid = 'new-492d5060-30ab-48dc-a5c1-0b6807160fc0';
    $pane->panel = 'what';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>
  A hackerspace is a real physical space, like a shop or warehouse, where people are supported to explore and do what they love through hacking. Hacking is taking what is, improving on it to the best of your ability, and sharing it. Since anything, no matter how cool, can be improved, we can hack anything. We can hack computers and electronics, of course, but also art and craft, math, science, yourself, society, the planet. We can and do hack anything.
</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'style' => 'bhackin_row',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '492d5060-30ab-48dc-a5c1-0b6807160fc0';
    $display->content['new-492d5060-30ab-48dc-a5c1-0b6807160fc0'] = $pane;
    $display->panels['what'][2] = 'new-492d5060-30ab-48dc-a5c1-0b6807160fc0';
    $pane = new stdClass();
    $pane->pid = 'new-f694afb4-bccb-4e78-b5cb-f9dd01e31046';
    $pane->panel = 'where';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Where',
      'body' => '<p>
  Whilst bHack does not yet have permanent home, it does not stop us from getting together and sharing our projects. Our temporary location is at Pilates Ballarat located at 113 Albert St, Sebastopol. There is parking at the rear.
</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'style' => 'bhackin_row',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f694afb4-bccb-4e78-b5cb-f9dd01e31046';
    $display->content['new-f694afb4-bccb-4e78-b5cb-f9dd01e31046'] = $pane;
    $display->panels['where'][0] = 'new-f694afb4-bccb-4e78-b5cb-f9dd01e31046';
    $pane = new stdClass();
    $pane->pid = 'new-93524d94-d98f-45bf-81aa-0d1cbe48b052';
    $pane->panel = 'where';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Map',
      'title' => '',
      'body' => '<div class="the-box-landing border-hover-bottom text-center">
  <iframe src="https://www.google.com/maps/embed?pb=!1m14!1m8!1m3!1d3161.4412906296457!2d143.841486!3d-37.591772!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x6ad15b4b35371405%3A0xa2845dd5cd0bafe5!2s113+Albert+St!5e0!3m2!1sen!2sau!4v1395922552175" width="100%" height="300" frameborder="0" style="border:0"></iframe>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'column_size' => '8',
        'offset_size' => '2',
      ),
      'style' => 'bhackin_row',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '93524d94-d98f-45bf-81aa-0d1cbe48b052';
    $display->content['new-93524d94-d98f-45bf-81aa-0d1cbe48b052'] = $pane;
    $display->panels['where'][1] = 'new-93524d94-d98f-45bf-81aa-0d1cbe48b052';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
