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

  // Exported permission: 'edit any handbook content'.
  $permissions['edit any handbook content'] = array(
    'name' => 'edit any handbook content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own handbook content'.
  $permissions['edit own handbook content'] = array(
    'name' => 'edit own handbook content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
