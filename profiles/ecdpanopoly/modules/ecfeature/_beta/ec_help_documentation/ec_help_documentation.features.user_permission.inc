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

  // Exported permission: 'delete own help_documentation content'.
  $permissions['delete own help_documentation content'] = array(
    'name' => 'delete own help_documentation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in help_document_type'.
  $permissions['delete terms in help_document_type'] = array(
    'name' => 'delete terms in help_document_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any help_documentation content'.
  $permissions['edit any help_documentation content'] = array(
    'name' => 'edit any help_documentation content',
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

  // Exported permission: 'edit terms in help_document_type'.
  $permissions['edit terms in help_document_type'] = array(
    'name' => 'edit terms in help_document_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
