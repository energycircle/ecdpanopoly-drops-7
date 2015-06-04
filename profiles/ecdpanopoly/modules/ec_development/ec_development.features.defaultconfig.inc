<?php
/**
 * @file
 * ec_development.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_development_defaultconfig_features() {
  return array(
    'ec_development' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ec_development_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  return $permissions;
}
