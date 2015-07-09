<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_conference_tracks_sessions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node conference_event breadcrumbs'.
  $permissions['administer panelizer node conference_event breadcrumbs'] = array(
    'name' => 'administer panelizer node conference_event breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event content'.
  $permissions['administer panelizer node conference_event content'] = array(
    'name' => 'administer panelizer node conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event context'.
  $permissions['administer panelizer node conference_event context'] = array(
    'name' => 'administer panelizer node conference_event context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event defaults'.
  $permissions['administer panelizer node conference_event defaults'] = array(
    'name' => 'administer panelizer node conference_event defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event layout'.
  $permissions['administer panelizer node conference_event layout'] = array(
    'name' => 'administer panelizer node conference_event layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event overview'.
  $permissions['administer panelizer node conference_event overview'] = array(
    'name' => 'administer panelizer node conference_event overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event settings'.
  $permissions['administer panelizer node conference_event settings'] = array(
    'name' => 'administer panelizer node conference_event settings',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_schedule defaults'.
  $permissions['administer panelizer node conference_schedule defaults'] = array(
    'name' => 'administer panelizer node conference_schedule defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node session defaults'.
  $permissions['administer panelizer node session defaults'] = array(
    'name' => 'administer panelizer node session defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node track defaults'.
  $permissions['administer panelizer node track defaults'] = array(
    'name' => 'administer panelizer node track defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create conference content'.
  $permissions['create conference content'] = array(
    'name' => 'create conference content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create conference_details content'.
  $permissions['create conference_details content'] = array(
    'name' => 'create conference_details content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create conference_event content'.
  $permissions['create conference_event content'] = array(
    'name' => 'create conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create conference_schedule content'.
  $permissions['create conference_schedule content'] = array(
    'name' => 'create conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create track content'.
  $permissions['create track content'] = array(
    'name' => 'create track content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference content'.
  $permissions['delete any conference content'] = array(
    'name' => 'delete any conference content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_details content'.
  $permissions['delete any conference_details content'] = array(
    'name' => 'delete any conference_details content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_event content'.
  $permissions['delete any conference_event content'] = array(
    'name' => 'delete any conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_schedule content'.
  $permissions['delete any conference_schedule content'] = array(
    'name' => 'delete any conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any session content'.
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any track content'.
  $permissions['delete any track content'] = array(
    'name' => 'delete any track content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference content'.
  $permissions['delete own conference content'] = array(
    'name' => 'delete own conference content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_details content'.
  $permissions['delete own conference_details content'] = array(
    'name' => 'delete own conference_details content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_event content'.
  $permissions['delete own conference_event content'] = array(
    'name' => 'delete own conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_schedule content'.
  $permissions['delete own conference_schedule content'] = array(
    'name' => 'delete own conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own session content'.
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own track content'.
  $permissions['delete own track content'] = array(
    'name' => 'delete own track content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in conferences_types'.
  $permissions['delete terms in conferences_types'] = array(
    'name' => 'delete terms in conferences_types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any conference content'.
  $permissions['edit any conference content'] = array(
    'name' => 'edit any conference content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_details content'.
  $permissions['edit any conference_details content'] = array(
    'name' => 'edit any conference_details content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_event content'.
  $permissions['edit any conference_event content'] = array(
    'name' => 'edit any conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_schedule content'.
  $permissions['edit any conference_schedule content'] = array(
    'name' => 'edit any conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any session content'.
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any track content'.
  $permissions['edit any track content'] = array(
    'name' => 'edit any track content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference content'.
  $permissions['edit own conference content'] = array(
    'name' => 'edit own conference content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_details content'.
  $permissions['edit own conference_details content'] = array(
    'name' => 'edit own conference_details content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_event content'.
  $permissions['edit own conference_event content'] = array(
    'name' => 'edit own conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_schedule content'.
  $permissions['edit own conference_schedule content'] = array(
    'name' => 'edit own conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own track content'.
  $permissions['edit own track content'] = array(
    'name' => 'edit own track content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in conferences_types'.
  $permissions['edit terms in conferences_types'] = array(
    'name' => 'edit terms in conferences_types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
