<?php
/**
 * @file
 * kickstart_staff.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kickstart_staff_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:staff
  $menu_links['main-menu:staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:node/add/staff
  $menu_links['navigation:node/add/staff'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/staff',
    'router_path' => 'node/add/staff',
    'link_title' => 'Staff',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Staff');


  return $menu_links;
}
