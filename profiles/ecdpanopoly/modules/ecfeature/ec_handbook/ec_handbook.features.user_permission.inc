<?php
/**
 * @file
 * ec_handbook.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_handbook_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer deployment endpoints'.
  $permissions['administer deployment endpoints'] = array(
    'name' => 'administer deployment endpoints',
    'roles' => array(),
    'module' => 'deploy',
  );

  // Exported permission: 'administer deployment plans'.
  $permissions['administer deployment plans'] = array(
    'name' => 'administer deployment plans',
    'roles' => array(),
    'module' => 'deploy',
  );

  // Exported permission: 'administer panelizer node handbook defaults'.
  $permissions['administer panelizer node handbook defaults'] = array(
    'name' => 'administer panelizer node handbook defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create handbook content'.
  $permissions['create handbook content'] = array(
    'name' => 'create handbook content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'delete any handbook content'.
  $permissions['delete any handbook content'] = array(
    'name' => 'delete any handbook content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own handbook content'.
  $permissions['delete own handbook content'] = array(
    'name' => 'delete own handbook content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'deploy deployment plans'.
  $permissions['deploy deployment plans'] = array(
    'name' => 'deploy deployment plans',
    'roles' => array(),
    'module' => 'deploy',
  );

  // Exported permission: 'diff deployment plans'.
  $permissions['diff deployment plans'] = array(
    'name' => 'diff deployment plans',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'deploy_services',
  );

  // Exported permission: 'edit any handbook content'.
  $permissions['edit any handbook content'] = array(
    'name' => 'edit any handbook content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit deployment plans'.
  $permissions['edit deployment plans'] = array(
    'name' => 'edit deployment plans',
    'roles' => array(),
    'module' => 'deploy',
  );

  // Exported permission: 'edit own handbook content'.
  $permissions['edit own handbook content'] = array(
    'name' => 'edit own handbook content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view deployment plans'.
  $permissions['view deployment plans'] = array(
    'name' => 'view deployment plans',
    'roles' => array(),
    'module' => 'deploy',
  );

  return $permissions;
}
