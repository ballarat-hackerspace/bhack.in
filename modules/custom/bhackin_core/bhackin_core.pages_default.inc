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
  $page->name = 'content';
  $page->task = 'page';
  $page->admin_title = 'Admin: Content';
  $page->admin_description = '';
  $page->path = 'admin/content';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'content';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Superuser',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Find content';
  $display->uuid = '7ea6ff58-1b93-4ac8-a572-64439d07032a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-787be360-781a-48a4-b70e-b825c6c90053';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-admin_content-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '787be360-781a-48a4-b70e-b825c6c90053';
    $display->content['new-787be360-781a-48a4-b70e-b825c6c90053'] = $pane;
    $display->panels['middle'][0] = 'new-787be360-781a-48a4-b70e-b825c6c90053';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'content';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Administrator',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Find content';
  $display->uuid = '5cea34a3-6e79-4d1a-944e-8b8679a22682';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f20cfda-45e3-4c85-ad0e-32da3943f941';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-admin_content-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f20cfda-45e3-4c85-ad0e-32da3943f941';
    $display->content['new-0f20cfda-45e3-4c85-ad0e-32da3943f941'] = $pane;
    $display->panels['middle'][0] = 'new-0f20cfda-45e3-4c85-ad0e-32da3943f941';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0f20cfda-45e3-4c85-ad0e-32da3943f941';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'content';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Member',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Find content';
  $display->uuid = '5cea34a3-6e79-4d1a-944e-8b8679a22682';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e739bf3-3102-4950-b421-d7fded0d99e3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-admin_content-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e739bf3-3102-4950-b421-d7fded0d99e3';
    $display->content['new-7e739bf3-3102-4950-b421-d7fded0d99e3'] = $pane;
    $display->panels['middle'][0] = 'new-7e739bf3-3102-4950-b421-d7fded0d99e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['content'] = $page;

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
      'blog' => NULL,
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
    'blog' => array(
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
    $pane->pid = 'new-66a25b61-0b93-4e4f-a20b-53f1d936f359';
    $pane->panel = 'blog';
    $pane->type = 'block';
    $pane->subtype = 'views-blog-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '66a25b61-0b93-4e4f-a20b-53f1d936f359';
    $display->content['new-66a25b61-0b93-4e4f-a20b-53f1d936f359'] = $pane;
    $display->panels['blog'][0] = 'new-66a25b61-0b93-4e4f-a20b-53f1d936f359';
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
    $pane->pid = 'new-11fcdffa-7923-4b92-bb54-63f8fb8fc263';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Social icons',
      'title' => '',
      'body' => '<a href="https://github.com/ballarat-hackerspace/" data-toggle="tooltip" title="GitHub"><i class="fa fa-2x fa-github-alt social ico-github"></i></a>
<a href="https://plus.bhack.in" data-toggle="tooltip" title="Google+"><i class="fa fa-2x fa-google-plus social ico-google-plus"></i></a>
<a href="https://twitter.com/bHackerspace" data-toggle="tooltip" title="Twitter"><i class="fa fa-2x fa-twitter social ico-twitter"></i></a>',
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
          'class' => 'social-icons',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '11fcdffa-7923-4b92-bb54-63f8fb8fc263';
    $display->content['new-11fcdffa-7923-4b92-bb54-63f8fb8fc263'] = $pane;
    $display->panels['header'][2] = 'new-11fcdffa-7923-4b92-bb54-63f8fb8fc263';
    $pane = new stdClass();
    $pane->pid = 'new-d3c602e9-ac33-4be3-91f6-319a46fdbbbe';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Join / Log in',
      'title' => '',
      'body' => '<a href="/user/register" class="btn btn-primary btn-lg" role="button">Join us</a>
<a href="/user" class="btn btn-default btn-lg" role="button">Log in</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd3c602e9-ac33-4be3-91f6-319a46fdbbbe';
    $display->content['new-d3c602e9-ac33-4be3-91f6-319a46fdbbbe'] = $pane;
    $display->panels['header'][3] = 'new-d3c602e9-ac33-4be3-91f6-319a46fdbbbe';
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
      'body' => '<p>&nbsp;</p>',
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
  <iframe src="https://www.google.com/maps/embed?pb=!1m14!1m8!1m3!1d3162.557667332649!2d143.857577!3d-37.565484000000005!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x6ad144fa1820aff1%3A0xcccfffb2cb152dd7!2sBallarat+Hackerspace!5e0!3m2!1sen!2sau!4v1422321706092" width="100%" height="300" frameborder="0" style="border:0"></iframe>
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
