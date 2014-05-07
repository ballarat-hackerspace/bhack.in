<?php
/**
 * @file
 * Entityforms module integration.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function bhackin_core_form_register_interest_entityform_edit_form_alter(&$form, &$form_state) {
  if (drupal_is_front_page()) {
    $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';

    $language = field_language('entityform', $form['#entity'], 'field_ri_referer');
    $form['field_ri_referer'][$language][0]['value']['#type'] = 'value';
    foreach (array_keys($_GET) as $key) {
      if (empty($_GET[$key])) {
        $form['field_ri_referer'][$language][0]['value']['#value'] = $key;
        return;
      }
    }
  }
}
