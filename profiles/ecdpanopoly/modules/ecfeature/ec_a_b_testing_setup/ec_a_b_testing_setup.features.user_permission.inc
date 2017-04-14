<?php
/**
 * @file
 * ec_a_b_testing_setup.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_a_b_testing_setup_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer content_experiments'.
  $permissions['administer content_experiments'] = array(
    'name' => 'administer content_experiments',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'content_experiments',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'use PHP for content experiments visibility'.
  $permissions['use PHP for content experiments visibility'] = array(
    'name' => 'use PHP for content experiments visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'content_experiments',
  );

  return $permissions;
}
