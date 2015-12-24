<?php
/**
 * @file
 * ec_citypages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_citypages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node city_page breadcrumbs'.
  $permissions['administer panelizer node city_page breadcrumbs'] = array(
    'name' => 'administer panelizer node city_page breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page content'.
  $permissions['administer panelizer node city_page content'] = array(
    'name' => 'administer panelizer node city_page content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page context'.
  $permissions['administer panelizer node city_page context'] = array(
    'name' => 'administer panelizer node city_page context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page defaults'.
  $permissions['administer panelizer node city_page defaults'] = array(
    'name' => 'administer panelizer node city_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page layout'.
  $permissions['administer panelizer node city_page layout'] = array(
    'name' => 'administer panelizer node city_page layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page overview'.
  $permissions['administer panelizer node city_page overview'] = array(
    'name' => 'administer panelizer node city_page overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page settings'.
  $permissions['administer panelizer node city_page settings'] = array(
    'name' => 'administer panelizer node city_page settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create city_page content'.
  $permissions['create city_page content'] = array(
    'name' => 'create city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any city_page content'.
  $permissions['delete any city_page content'] = array(
    'name' => 'delete any city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own city_page content'.
  $permissions['delete own city_page content'] = array(
    'name' => 'delete own city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any city_page content'.
  $permissions['edit any city_page content'] = array(
    'name' => 'edit any city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own city_page content'.
  $permissions['edit own city_page content'] = array(
    'name' => 'edit own city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
