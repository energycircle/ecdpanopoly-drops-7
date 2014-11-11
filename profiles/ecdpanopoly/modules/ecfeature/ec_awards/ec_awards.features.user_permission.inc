<?php
/**
 * @file
 * ec_awards.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_awards_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node award defaults'.
  $permissions['administer panelizer node award defaults'] = array(
    'name' => 'administer panelizer node award defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term award_types defaults'.
  $permissions['administer panelizer taxonomy_term award_types defaults'] = array(
    'name' => 'administer panelizer taxonomy_term award_types defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create award content'.
  $permissions['create award content'] = array(
    'name' => 'create award content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any award content'.
  $permissions['delete any award content'] = array(
    'name' => 'delete any award content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own award content'.
  $permissions['delete own award content'] = array(
    'name' => 'delete own award content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in award_types'.
  $permissions['delete terms in award_types'] = array(
    'name' => 'delete terms in award_types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any award content'.
  $permissions['edit any award content'] = array(
    'name' => 'edit any award content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own award content'.
  $permissions['edit own award content'] = array(
    'name' => 'edit own award content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in award_types'.
  $permissions['edit terms in award_types'] = array(
    'name' => 'edit terms in award_types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
