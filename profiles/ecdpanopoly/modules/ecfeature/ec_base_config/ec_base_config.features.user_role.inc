<?php
/**
 * @file
 * ec_base_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ec_base_config_user_default_roles() {
  $roles = array();

  // Exported role: EC Platinum admin.
  $roles['EC Platinum admin'] = (object) array(
    'name' => 'EC Platinum admin',
    'weight' => 3,
  );

  // Exported role: EC Platinum editor.
  $roles['EC Platinum editor'] = (object) array(
    'name' => 'EC Platinum editor',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = (object) array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
