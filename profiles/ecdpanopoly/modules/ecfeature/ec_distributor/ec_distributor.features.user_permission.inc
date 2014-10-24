<?php
/**
 * @file
 * ec_distributor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_distributor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node distributor breadcrumbs'.
  $permissions['administer panelizer node distributor breadcrumbs'] = array(
    'name' => 'administer panelizer node distributor breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor content'.
  $permissions['administer panelizer node distributor content'] = array(
    'name' => 'administer panelizer node distributor content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor context'.
  $permissions['administer panelizer node distributor context'] = array(
    'name' => 'administer panelizer node distributor context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor defaults'.
  $permissions['administer panelizer node distributor defaults'] = array(
    'name' => 'administer panelizer node distributor defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor layout'.
  $permissions['administer panelizer node distributor layout'] = array(
    'name' => 'administer panelizer node distributor layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor overview'.
  $permissions['administer panelizer node distributor overview'] = array(
    'name' => 'administer panelizer node distributor overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor settings'.
  $permissions['administer panelizer node distributor settings'] = array(
    'name' => 'administer panelizer node distributor settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create distributor content'.
  $permissions['create distributor content'] = array(
    'name' => 'create distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any distributor content'.
  $permissions['delete any distributor content'] = array(
    'name' => 'delete any distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own distributor content'.
  $permissions['delete own distributor content'] = array(
    'name' => 'delete own distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any distributor content'.
  $permissions['edit any distributor content'] = array(
    'name' => 'edit any distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own distributor content'.
  $permissions['edit own distributor content'] = array(
    'name' => 'edit own distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
