<?php
/**
 * @file
 * User module integration.
 */

/**
 * Implements hook_bhackin_core_menu_alter() on behalf of user.module.
 */
function user_bhackin_core_menu_alter(&$items) {
  $items['user/%user/edit']['title'] = t('Edit account');
}

/**
 * Implements hook_form_alter().
 */
function bhackin_core_form_user_register_form_alter(&$form, $form_state) {
  $form['#submit'][] = 'bhackin_core_form_user_register_form_submit';
}

/**
 * Submit callback form user register form.
 */
function bhackin_core_form_user_register_form_submit($form, &$form_state) {
  rules_invoke_component('rules_create_new_memberships', $form_state['user']);
}
