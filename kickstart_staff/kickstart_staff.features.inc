<?php
/**
 * @file
 * kickstart_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kickstart_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kickstart_staff_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kickstart_staff_node_info() {
  $items = array(
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
