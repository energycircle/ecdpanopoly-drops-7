<?php
/**
 * @file
 * ec_administrative_dashboard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_administrative_dashboard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer total control'.
  $permissions['administer total control'] = array(
    'name' => 'administer total control',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'have total control'.
  $permissions['have total control'] = array(
    'name' => 'have total control',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'total_control',
  );

  return $permissions;
}
