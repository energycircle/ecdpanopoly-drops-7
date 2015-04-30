<?php
/**
 * @file
 * ec_casestudy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_casestudy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node case_study breadcrumbs'.
  $permissions['administer panelizer node case_study breadcrumbs'] = array(
    'name' => 'administer panelizer node case_study breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study content'.
  $permissions['administer panelizer node case_study content'] = array(
    'name' => 'administer panelizer node case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study context'.
  $permissions['administer panelizer node case_study context'] = array(
    'name' => 'administer panelizer node case_study context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study defaults'.
  $permissions['administer panelizer node case_study defaults'] = array(
    'name' => 'administer panelizer node case_study defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study layout'.
  $permissions['administer panelizer node case_study layout'] = array(
    'name' => 'administer panelizer node case_study layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study overview'.
  $permissions['administer panelizer node case_study overview'] = array(
    'name' => 'administer panelizer node case_study overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study settings'.
  $permissions['administer panelizer node case_study settings'] = array(
    'name' => 'administer panelizer node case_study settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create case_study content'.
  $permissions['create case_study content'] = array(
    'name' => 'create case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any case_study content'.
  $permissions['delete any case_study content'] = array(
    'name' => 'delete any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own case_study content'.
  $permissions['delete own case_study content'] = array(
    'name' => 'delete own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any case_study content'.
  $permissions['edit any case_study content'] = array(
    'name' => 'edit any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own case_study content'.
  $permissions['edit own case_study content'] = array(
    'name' => 'edit own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
