<?php
/**
 * @file
 * kickstart_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kickstart_banner_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kickstart_banner_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kickstart_banner_node_info() {
  $items = array(
    'featured_banner' => array(
      'name' => t('Featured Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
