<?php
/**
 * @file
 * ec_financing_option.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_financing_option_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node financing_option breadcrumbs'.
  $permissions['administer panelizer node financing_option breadcrumbs'] = array(
    'name' => 'administer panelizer node financing_option breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node financing_option content'.
  $permissions['administer panelizer node financing_option content'] = array(
    'name' => 'administer panelizer node financing_option content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node financing_option context'.
  $permissions['administer panelizer node financing_option context'] = array(
    'name' => 'administer panelizer node financing_option context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node financing_option defaults'.
  $permissions['administer panelizer node financing_option defaults'] = array(
    'name' => 'administer panelizer node financing_option defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node financing_option layout'.
  $permissions['administer panelizer node financing_option layout'] = array(
    'name' => 'administer panelizer node financing_option layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node financing_option overview'.
  $permissions['administer panelizer node financing_option overview'] = array(
    'name' => 'administer panelizer node financing_option overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node financing_option settings'.
  $permissions['administer panelizer node financing_option settings'] = array(
    'name' => 'administer panelizer node financing_option settings',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create financing_option content'.
  $permissions['create financing_option content'] = array(
    'name' => 'create financing_option content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any financing_option content'.
  $permissions['delete any financing_option content'] = array(
    'name' => 'delete any financing_option content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own financing_option content'.
  $permissions['delete own financing_option content'] = array(
    'name' => 'delete own financing_option content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any financing_option content'.
  $permissions['edit any financing_option content'] = array(
    'name' => 'edit any financing_option content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own financing_option content'.
  $permissions['edit own financing_option content'] = array(
    'name' => 'edit own financing_option content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
