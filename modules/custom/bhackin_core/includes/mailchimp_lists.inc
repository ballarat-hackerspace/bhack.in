<?php
/**
 * @file
 * MailChimp Lists module integration.
 */

/**
 * Implements hook_mailchimp_lists_merge_values().
 */
function bhackin_core_mailchimp_lists_merge_values($mergevars, $account, $list) {
  return array(
    'FNAME' => $account->profile_profile['field_profile_first_name'][LANGUAGE_NONE][0]['value'],
    'LNAME' => $account->profile_profile['field_profile_last_name'][LANGUAGE_NONE][0]['value'],
  );
}

/**
 * Implements hook_bhackin_core_form_user_register_form_alter() on behalf of
 * mailchimp_lists.module.
 */
function mailchimp_lists_bhackin_core_form_user_register_form_alter(&$form, &$form_state) {
  $form['mailchimp_lists']['#type'] = 'container';
  $form['mailchimp_lists']['mailchimp_register_interest']['subscribe']['#title'] = t('Sign up for the bHack Newsletter?');
}
