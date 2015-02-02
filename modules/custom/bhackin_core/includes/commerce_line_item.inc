<?php
/**
 * @file
 * Line Item module integration.
 */

/**
 * Implements hook_query_TAG_alter().
 *
 * Modify Line item access conditions if this is the result of a valid user
 * registration.
 */
function bhackin_core_query_commerce_line_item_access_alter(QueryAlterableInterface $query) {
  if (isset($_POST['form_build_id'])) {
    list($form, $form_state, $form_id, $form_build_id, $commands) = ajax_get_form();
    if ($form['#form_id'] == 'user_register_form') {
      // Remove preventative condition.
      $conditions =& $query->conditions();
      foreach (element_children($conditions) as $delta) {
        if (is_string($conditions[$delta]['field']) && $conditions[$delta]['field'] == '1 = 0') {
          unset($conditions[$delta]);
        }
      }

      // Ensure user owns the order.
      $user = user_load_by_mail($form_state['input']['mail']);
      $query->fields('co', array('uid'));
      $query->condition('uid', $user->uid);
    }
  }
}
