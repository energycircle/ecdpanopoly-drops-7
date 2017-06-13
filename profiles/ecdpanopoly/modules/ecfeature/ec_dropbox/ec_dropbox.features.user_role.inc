<?php
/**
 * @file
 * ec_dropbox.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ec_dropbox_user_default_roles() {
  $roles = array();

  // Exported role: EC Contractor.
  $roles['EC Contractor'] = array(
    'name' => 'EC Contractor',
    'weight' => 5,
  );

  return $roles;
}
