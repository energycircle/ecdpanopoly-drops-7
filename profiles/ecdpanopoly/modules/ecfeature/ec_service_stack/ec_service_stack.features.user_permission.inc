<?php
/**
 * @file
 * ec_service_stack.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_service_stack_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node service breadcrumbs'.
  $permissions['administer panelizer node service breadcrumbs'] = array(
    'name' => 'administer panelizer node service breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service content'.
  $permissions['administer panelizer node service content'] = array(
    'name' => 'administer panelizer node service content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service context'.
  $permissions['administer panelizer node service context'] = array(
    'name' => 'administer panelizer node service context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service defaults'.
  $permissions['administer panelizer node service defaults'] = array(
    'name' => 'administer panelizer node service defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service layout'.
  $permissions['administer panelizer node service layout'] = array(
    'name' => 'administer panelizer node service layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service overview'.
  $permissions['administer panelizer node service overview'] = array(
    'name' => 'administer panelizer node service overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service settings'.
  $permissions['administer panelizer node service settings'] = array(
    'name' => 'administer panelizer node service settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category breadcrumbs'.
  $permissions['administer panelizer node service_category breadcrumbs'] = array(
    'name' => 'administer panelizer node service_category breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category content'.
  $permissions['administer panelizer node service_category content'] = array(
    'name' => 'administer panelizer node service_category content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category context'.
  $permissions['administer panelizer node service_category context'] = array(
    'name' => 'administer panelizer node service_category context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category defaults'.
  $permissions['administer panelizer node service_category defaults'] = array(
    'name' => 'administer panelizer node service_category defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category layout'.
  $permissions['administer panelizer node service_category layout'] = array(
    'name' => 'administer panelizer node service_category layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category overview'.
  $permissions['administer panelizer node service_category overview'] = array(
    'name' => 'administer panelizer node service_category overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category settings'.
  $permissions['administer panelizer node service_category settings'] = array(
    'name' => 'administer panelizer node service_category settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group breadcrumbs'.
  $permissions['administer panelizer node service_group breadcrumbs'] = array(
    'name' => 'administer panelizer node service_group breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group content'.
  $permissions['administer panelizer node service_group content'] = array(
    'name' => 'administer panelizer node service_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group context'.
  $permissions['administer panelizer node service_group context'] = array(
    'name' => 'administer panelizer node service_group context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group defaults'.
  $permissions['administer panelizer node service_group defaults'] = array(
    'name' => 'administer panelizer node service_group defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group layout'.
  $permissions['administer panelizer node service_group layout'] = array(
    'name' => 'administer panelizer node service_group layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group overview'.
  $permissions['administer panelizer node service_group overview'] = array(
    'name' => 'administer panelizer node service_group overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group settings'.
  $permissions['administer panelizer node service_group settings'] = array(
    'name' => 'administer panelizer node service_group settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create service content'.
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_category content'.
  $permissions['create service_category content'] = array(
    'name' => 'create service_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_group content'.
  $permissions['create service_group content'] = array(
    'name' => 'create service_group content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service content'.
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_category content'.
  $permissions['delete any service_category content'] = array(
    'name' => 'delete any service_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_group content'.
  $permissions['delete any service_group content'] = array(
    'name' => 'delete any service_group content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service content'.
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_category content'.
  $permissions['delete own service_category content'] = array(
    'name' => 'delete own service_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_group content'.
  $permissions['delete own service_group content'] = array(
    'name' => 'delete own service_group content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service content'.
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_category content'.
  $permissions['edit any service_category content'] = array(
    'name' => 'edit any service_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_group content'.
  $permissions['edit any service_group content'] = array(
    'name' => 'edit any service_group content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service content'.
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_category content'.
  $permissions['edit own service_category content'] = array(
    'name' => 'edit own service_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_group content'.
  $permissions['edit own service_group content'] = array(
    'name' => 'edit own service_group content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
