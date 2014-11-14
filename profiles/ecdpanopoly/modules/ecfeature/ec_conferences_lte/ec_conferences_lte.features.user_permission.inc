<?php
/**
 * @file
 * ec_conferences_lte.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_conferences_lte_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in sponsor_types'.
  $permissions['delete terms in sponsor_types'] = array(
    'name' => 'delete terms in sponsor_types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sponsor_types'.
  $permissions['edit terms in sponsor_types'] = array(
    'name' => 'edit terms in sponsor_types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
