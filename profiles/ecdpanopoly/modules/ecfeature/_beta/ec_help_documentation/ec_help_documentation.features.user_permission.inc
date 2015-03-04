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

  // Exported permission: 'administer panelizer node help_documentation breadcrumbs'.
  $permissions['administer panelizer node help_documentation breadcrumbs'] = array(
    'name' => 'administer panelizer node help_documentation breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node help_documentation content'.
  $permissions['administer panelizer node help_documentation content'] = array(
    'name' => 'administer panelizer node help_documentation content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node help_documentation context'.
  $permissions['administer panelizer node help_documentation context'] = array(
    'name' => 'administer panelizer node help_documentation context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node help_documentation defaults'.
  $permissions['administer panelizer node help_documentation defaults'] = array(
    'name' => 'administer panelizer node help_documentation defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node help_documentation layout'.
  $permissions['administer panelizer node help_documentation layout'] = array(
    'name' => 'administer panelizer node help_documentation layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node help_documentation overview'.
  $permissions['administer panelizer node help_documentation overview'] = array(
    'name' => 'administer panelizer node help_documentation overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node help_documentation settings'.
  $permissions['administer panelizer node help_documentation settings'] = array(
    'name' => 'administer panelizer node help_documentation settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term help_document_type defaults'.
  $permissions['administer panelizer taxonomy_term help_document_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term help_document_type defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create help_documentation content'.
  $permissions['create help_documentation content'] = array(
    'name' => 'create help_documentation content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any help_documentation content'.
  $permissions['delete any help_documentation content'] = array(
    'name' => 'delete any help_documentation content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own help_documentation content'.
  $permissions['delete own help_documentation content'] = array(
    'name' => 'delete own help_documentation content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
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
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own help_documentation content'.
  $permissions['edit own help_documentation content'] = array(
    'name' => 'edit own help_documentation content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
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
