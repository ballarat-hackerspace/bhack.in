<?php
/**
 * @file
 * Profile2 module integration.
 */

/**
 * Implements hook_bhackin_core_form_user_register_form_alter() on behalf of
 * profile2.module.
 */
function profile2_bhackin_core_form_user_register_form_alter(&$form, &$form_state) {
  // Change Profile wrapper from fieldset to container.
  $form['profile_profile']['#type'] = 'container';

  // Unset all group information.
  unset($form['profile_profile']['#groups'], $form['profile_profile']['#fieldgroups'], $form['profile_profile']['#group_children']);

  // Only show required fields.
  foreach (element_children($form['profile_profile']) as $child) {
    $form['profile_profile'][$child]['#access'] = $form['profile_profile'][$child][LANGUAGE_NONE]['#required'];
  }
}
