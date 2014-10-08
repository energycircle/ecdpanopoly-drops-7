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
  $roles['EC Platinum admin'] = array(
    'name' => 'EC Platinum admin',
    'weight' => 3,
  );

  // Exported role: EC Platinum editor.
  $roles['EC Platinum editor'] = array(
    'name' => 'EC Platinum editor',
    'weight' => 4,
  );

  return $roles;
}
