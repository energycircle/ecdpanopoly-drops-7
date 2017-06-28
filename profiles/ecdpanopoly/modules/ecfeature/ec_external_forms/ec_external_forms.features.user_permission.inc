<?php
/**
 * @file
 * ec_external_forms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_external_forms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node external_form defaults'.
  $permissions['administer panelizer node external_form defaults'] = array(
    'name' => 'administer panelizer node external_form defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create external_form content'.
  $permissions['create external_form content'] = array(
    'name' => 'create external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any external_form content'.
  $permissions['delete any external_form content'] = array(
    'name' => 'delete any external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own external_form content'.
  $permissions['delete own external_form content'] = array(
    'name' => 'delete own external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any external_form content'.
  $permissions['edit any external_form content'] = array(
    'name' => 'edit any external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own external_form content'.
  $permissions['edit own external_form content'] = array(
    'name' => 'edit own external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
