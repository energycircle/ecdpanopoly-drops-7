<?php
/**
 * @file
 * ec_custom_tokens.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_custom_tokens_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer custom tokens'.
  $permissions['administer custom tokens'] = array(
    'name' => 'administer custom tokens',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'token_custom',
  );

  // Exported permission: 'list custom tokens'.
  $permissions['list custom tokens'] = array(
    'name' => 'list custom tokens',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'token_custom',
  );

  return $permissions;
}
