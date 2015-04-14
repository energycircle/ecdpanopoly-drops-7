<?php
/**
 * @file
 * ec_promotions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_promotions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node promotion breadcrumbs'.
  $permissions['administer panelizer node promotion breadcrumbs'] = array(
    'name' => 'administer panelizer node promotion breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion content'.
  $permissions['administer panelizer node promotion content'] = array(
    'name' => 'administer panelizer node promotion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion context'.
  $permissions['administer panelizer node promotion context'] = array(
    'name' => 'administer panelizer node promotion context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion defaults'.
  $permissions['administer panelizer node promotion defaults'] = array(
    'name' => 'administer panelizer node promotion defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion layout'.
  $permissions['administer panelizer node promotion layout'] = array(
    'name' => 'administer panelizer node promotion layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion overview'.
  $permissions['administer panelizer node promotion overview'] = array(
    'name' => 'administer panelizer node promotion overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion settings'.
  $permissions['administer panelizer node promotion settings'] = array(
    'name' => 'administer panelizer node promotion settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create promotion content'.
  $permissions['create promotion content'] = array(
    'name' => 'create promotion content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any promotion content'.
  $permissions['delete any promotion content'] = array(
    'name' => 'delete any promotion content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own promotion content'.
  $permissions['delete own promotion content'] = array(
    'name' => 'delete own promotion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any promotion content'.
  $permissions['edit any promotion content'] = array(
    'name' => 'edit any promotion content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own promotion content'.
  $permissions['edit own promotion content'] = array(
    'name' => 'edit own promotion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
