<?php
/**
 * @file
 * Profile2 pages module integration.
 */

/**
 * Implements hook_bhackin_core_menu_alter() on behalf of profile2_page.module.
 */
function profile2_page_bhackin_core_menu_alter(&$items) {
  foreach (profile2_get_types() as $type_name => $type) {
    if (!empty($type->data['use_page'])) {
      $path = profile2_page_get_base_path($type);

      unset($items[$path], $items[$path . '/%profile2_by_uid'], $items[$path . '/%profile2_by_uid/view'], $items[$path . '/%profile2_by_uid/delete']);

      $items["user/%profile2_by_uid/{$type->type}"] = $items[$path . '/%profile2_by_uid/edit'];
      $items["user/%profile2_by_uid/{$type->type}"]['title'] = t('Edit @type', array('@type' => $type->type));
      unset($items[$path . '/%profile2_by_uid/edit']);

      if (module_exists('devel')) {
        $items["user/%profile2_by_uid/{$type->type}/devel"] = $items[$path . '/%profile2_by_uid/devel'];
        unset($items[$path . '/%profile2_by_uid/devel']);

        $items["user/%profile2_by_uid/{$type->type}/devel/load"] = $items[$path . '/%profile2_by_uid/devel/load'];
        unset($items[$path . '/%profile2_by_uid/devel/load']);

        $items["user/%profile2_by_uid/{$type->type}/devel/render"] = $items[$path . '/%profile2_by_uid/devel/render'];
        unset($items[$path . '/%profile2_by_uid/devel/render']);
      }
    }
  }
}
