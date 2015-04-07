<?php
/**
 * @file
 * ec_help_documentation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_help_documentation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create help_documentation content'.
  $permissions['create help_documentation content'] = array(
    'name' => 'create help_documentation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any help_documentation content'.
  $permissions['delete any help_documentation content'] = array(
    'name' => 'delete any help_documentation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own help_documentation content'.
  $permissions['edit own help_documentation content'] = array(
    'name' => 'edit own help_documentation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
