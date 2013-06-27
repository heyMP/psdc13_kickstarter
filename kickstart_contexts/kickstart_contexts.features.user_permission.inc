<?php
/**
 * @file
 * kickstart_contexts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kickstart_contexts_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  return $permissions;
}
