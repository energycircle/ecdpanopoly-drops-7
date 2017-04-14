<?php
/**
 * @file
 * ec_audience.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_audience_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node audience breadcrumbs'.
  $permissions['administer panelizer node audience breadcrumbs'] = array(
    'name' => 'administer panelizer node audience breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node audience content'.
  $permissions['administer panelizer node audience content'] = array(
    'name' => 'administer panelizer node audience content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node audience context'.
  $permissions['administer panelizer node audience context'] = array(
    'name' => 'administer panelizer node audience context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node audience defaults'.
  $permissions['administer panelizer node audience defaults'] = array(
    'name' => 'administer panelizer node audience defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node audience layout'.
  $permissions['administer panelizer node audience layout'] = array(
    'name' => 'administer panelizer node audience layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node audience overview'.
  $permissions['administer panelizer node audience overview'] = array(
    'name' => 'administer panelizer node audience overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node audience settings'.
  $permissions['administer panelizer node audience settings'] = array(
    'name' => 'administer panelizer node audience settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create audience content'.
  $permissions['create audience content'] = array(
    'name' => 'create audience content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audience content'.
  $permissions['delete any audience content'] = array(
    'name' => 'delete any audience content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audience content'.
  $permissions['delete own audience content'] = array(
    'name' => 'delete own audience content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audience content'.
  $permissions['edit any audience content'] = array(
    'name' => 'edit any audience content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audience content'.
  $permissions['edit own audience content'] = array(
    'name' => 'edit own audience content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
