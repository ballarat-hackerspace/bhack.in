<?php
/**
 * @file
 * bhackin_core.mollom.inc
 */

/**
 * Implements hook_default_mollom_form().
 */
function bhackin_core_default_mollom_form() {
  $export = array();

  $mollom_form = new stdClass();
  $mollom_form->disabled = FALSE; /* Edit this to true to make a default mollom_form disabled initially */
  $mollom_form->api_version = 1;
  $mollom_form->form_id = 'user_register_form';
  $mollom_form->entity = 'user';
  $mollom_form->bundle = 'user';
  $mollom_form->mode = 1;
  $mollom_form->checks = array(
    0 => 'spam',
  );
  $mollom_form->unsure = 'captcha';
  $mollom_form->discard = TRUE;
  $mollom_form->moderation = FALSE;
  $mollom_form->enabled_fields = array();
  $mollom_form->strictness = 'normal';
  $mollom_form->module = 'user';
  $export['user_register_form'] = $mollom_form;

  return $export;
}
