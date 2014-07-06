<?php
/**
 * @file
 * Definition of the 'bhackin_row' panels style plugin.
 */

$plugin = array(
  'title'              => t('bHack.in row'),
  'description'        => t('Render using bHack.in row'),
  'render pane'        => 'panels_bhackin_row_render_pane',
  'pane settings form' => 'panels_bhackin_row_settings_form',
  'hook theme'         => array(
    'panels_bhackin_row_render_pane' => array(
      'variables' => array('class' => ''),
      'template'  => 'panels_bhackin_row',
      'path'      => drupal_get_path('theme', 'bhackin_theme') . '/plugins/style/bhackin_row',
    ),
  ),
);

/**
 * @param $vars
 *
 * @return string
 */
function theme_panels_bhackin_row_render_pane($vars) {
  $settings = $vars['settings'];

  $class = array();
  if ($settings['column_size']) {
    $class[] = 'col-sm-' . $settings['column_size'];
  }
  if ($settings['offset_size']) {
    $class[] = 'col-sm-offset-' . $settings['offset_size'];
  }
  $class = implode(' ', $class);

  if (!empty($vars['content']->title)) {
    $vars['content']->title = "<h1 class='text-center'>{$vars['content']->title}</h1>";
  }

  if (is_array($vars['content']->content)) {
    $vars['content']->content = render($vars['content']->content);
  }
  return "<div class='row'><div class='{$class}'>{$vars['content']->title}{$vars['content']->content}</div></div>";
}

/**
 * Options for the Panels style plugin to help style panes.
 */
function panels_bhackin_row_settings_form($settings, $display, $pid, $type, $form_state) {
  $options    = range(0, 12);
  $options[0] = t('-- None --');

  $form['column_size'] = array(
    '#type'          => 'select',
    '#title'         => t('Сolumn size'),
    '#options'       => $options,
    '#default_value' => isset($style_settings['column_size']) ? $style_settings['column_size'] : 12,
  );

  $form['offset_size'] = array(
    '#type'          => 'select',
    '#title'         => t('Offset size'),
    '#options'       => $options,
    '#default_value' => isset($style_settings['offset_size']) ? $style_settings['offset_size'] : 0,
  );

  return $form;
}
