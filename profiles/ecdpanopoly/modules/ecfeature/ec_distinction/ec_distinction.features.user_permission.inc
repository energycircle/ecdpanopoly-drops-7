<?php
/**
 * @file
 * ec_distinction.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_distinction_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node distinction breadcrumbs'.
  $permissions['administer panelizer node distinction breadcrumbs'] = array(
    'name' => 'administer panelizer node distinction breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction content'.
  $permissions['administer panelizer node distinction content'] = array(
    'name' => 'administer panelizer node distinction content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction context'.
  $permissions['administer panelizer node distinction context'] = array(
    'name' => 'administer panelizer node distinction context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction defaults'.
  $permissions['administer panelizer node distinction defaults'] = array(
    'name' => 'administer panelizer node distinction defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction layout'.
  $permissions['administer panelizer node distinction layout'] = array(
    'name' => 'administer panelizer node distinction layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction overview'.
  $permissions['administer panelizer node distinction overview'] = array(
    'name' => 'administer panelizer node distinction overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction settings'.
  $permissions['administer panelizer node distinction settings'] = array(
    'name' => 'administer panelizer node distinction settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term distinction_types defaults'.
  $permissions['administer panelizer taxonomy_term distinction_types defaults'] = array(
    'name' => 'administer panelizer taxonomy_term distinction_types defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create distinction content'.
  $permissions['create distinction content'] = array(
    'name' => 'create distinction content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any distinction content'.
  $permissions['delete any distinction content'] = array(
    'name' => 'delete any distinction content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own distinction content'.
  $permissions['delete own distinction content'] = array(
    'name' => 'delete own distinction content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in distinction_types'.
  $permissions['delete terms in distinction_types'] = array(
    'name' => 'delete terms in distinction_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any distinction content'.
  $permissions['edit any distinction content'] = array(
    'name' => 'edit any distinction content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own distinction content'.
  $permissions['edit own distinction content'] = array(
    'name' => 'edit own distinction content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in distinction_types'.
  $permissions['edit terms in distinction_types'] = array(
    'name' => 'edit terms in distinction_types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
