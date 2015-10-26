<?php
/**
 * @file
 * ec_external_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_external_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create external_video content'.
  $permissions['create external_video content'] = array(
    'name' => 'create external_video content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any external_video content'.
  $permissions['delete any external_video content'] = array(
    'name' => 'delete any external_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own external_video content'.
  $permissions['delete own external_video content'] = array(
    'name' => 'delete own external_video content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any external_video content'.
  $permissions['edit any external_video content'] = array(
    'name' => 'edit any external_video content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own external_video content'.
  $permissions['edit own external_video content'] = array(
    'name' => 'edit own external_video content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
