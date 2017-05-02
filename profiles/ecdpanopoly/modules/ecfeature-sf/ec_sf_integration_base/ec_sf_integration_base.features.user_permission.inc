<?php
/**
 * @file
 * ec_sf_integration_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_sf_integration_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer salesforce'.
  $permissions['administer salesforce'] = array(
    'name' => 'administer salesforce',
    'roles' => array(),
    'module' => 'salesforce',
  );

  // Exported permission: 'administer salesforce mapping'.
  $permissions['administer salesforce mapping'] = array(
    'name' => 'administer salesforce mapping',
    'roles' => array(),
    'module' => 'salesforce_mapping',
  );

  // Exported permission: 'create salesforce mapping object'.
  $permissions['create salesforce mapping object'] = array(
    'name' => 'create salesforce mapping object',
    'roles' => array(),
    'module' => 'salesforce_mapping',
  );

  // Exported permission: 'delete salesforce mapping object'.
  $permissions['delete salesforce mapping object'] = array(
    'name' => 'delete salesforce mapping object',
    'roles' => array(),
    'module' => 'salesforce_mapping',
  );

  // Exported permission: 'edit salesforce mapping object'.
  $permissions['edit salesforce mapping object'] = array(
    'name' => 'edit salesforce mapping object',
    'roles' => array(),
    'module' => 'salesforce_mapping',
  );

  // Exported permission: 'view salesforce mapping object'.
  $permissions['view salesforce mapping object'] = array(
    'name' => 'view salesforce mapping object',
    'roles' => array(),
    'module' => 'salesforce_mapping',
  );

  return $permissions;
}
