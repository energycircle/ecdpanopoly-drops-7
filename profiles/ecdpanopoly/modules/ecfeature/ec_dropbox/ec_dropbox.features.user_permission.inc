<?php
/**
 * @file
 * ec_dropbox.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_dropbox_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node dropbox_upload defaults'.
  $permissions['administer panelizer node dropbox_upload defaults'] = array(
    'name' => 'administer panelizer node dropbox_upload defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'assign EC Contractor role'.
  $permissions['assign EC Contractor role'] = array(
    'name' => 'assign EC Contractor role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'create dropbox_upload content'.
  $permissions['create dropbox_upload content'] = array(
    'name' => 'create dropbox_upload content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dropbox_upload content'.
  $permissions['delete any dropbox_upload content'] = array(
    'name' => 'delete any dropbox_upload content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dropbox_upload content'.
  $permissions['delete own dropbox_upload content'] = array(
    'name' => 'delete own dropbox_upload content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dropbox_upload content'.
  $permissions['edit any dropbox_upload content'] = array(
    'name' => 'edit any dropbox_upload content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dropbox_upload content'.
  $permissions['edit own dropbox_upload content'] = array(
    'name' => 'edit own dropbox_upload content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
