<?php
/**
 * @file
 * ec_staff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node staff breadcrumbs'.
  $permissions['administer panelizer node staff breadcrumbs'] = array(
    'name' => 'administer panelizer node staff breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff choice'.
  $permissions['administer panelizer node staff choice'] = array(
    'name' => 'administer panelizer node staff choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff content'.
  $permissions['administer panelizer node staff content'] = array(
    'name' => 'administer panelizer node staff content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff context'.
  $permissions['administer panelizer node staff context'] = array(
    'name' => 'administer panelizer node staff context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff defaults'.
  $permissions['administer panelizer node staff defaults'] = array(
    'name' => 'administer panelizer node staff defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff layout'.
  $permissions['administer panelizer node staff layout'] = array(
    'name' => 'administer panelizer node staff layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff overview'.
  $permissions['administer panelizer node staff overview'] = array(
    'name' => 'administer panelizer node staff overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff settings'.
  $permissions['administer panelizer node staff settings'] = array(
    'name' => 'administer panelizer node staff settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create staff content'.
  $permissions['create staff content'] = array(
    'name' => 'create staff content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any staff content'.
  $permissions['delete any staff content'] = array(
    'name' => 'delete any staff content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff content'.
  $permissions['delete own staff content'] = array(
    'name' => 'delete own staff content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in departments'.
  $permissions['delete terms in departments'] = array(
    'name' => 'delete terms in departments',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any staff content'.
  $permissions['edit any staff content'] = array(
    'name' => 'edit any staff content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff content'.
  $permissions['edit own staff content'] = array(
    'name' => 'edit own staff content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in departments'.
  $permissions['edit terms in departments'] = array(
    'name' => 'edit terms in departments',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
