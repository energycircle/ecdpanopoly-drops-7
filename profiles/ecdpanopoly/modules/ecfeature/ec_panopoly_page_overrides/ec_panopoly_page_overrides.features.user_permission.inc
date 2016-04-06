<?php
/**
 * @file
 * ec_panopoly_page_overrides.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_panopoly_page_overrides_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create panopoly_landing_page content'.
  $permissions['create panopoly_landing_page content'] = array(
    'name' => 'create panopoly_landing_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panopoly_landing_page content'.
  $permissions['delete any panopoly_landing_page content'] = array(
    'name' => 'delete any panopoly_landing_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panopoly_landing_page content'.
  $permissions['delete own panopoly_landing_page content'] = array(
    'name' => 'delete own panopoly_landing_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panopoly_landing_page content'.
  $permissions['edit any panopoly_landing_page content'] = array(
    'name' => 'edit any panopoly_landing_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panopoly_landing_page content'.
  $permissions['edit own panopoly_landing_page content'] = array(
    'name' => 'edit own panopoly_landing_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
