<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_conference_tracks_sessions_defaultconfig_features() {
  return array(
    'ec_conference_tracks_sessions' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_conference_tracks_sessions_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_conference_schedule';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'rss' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'show_this_block' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_conference_schedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_conference_schedule_pattern';
  $strongarm->value = 'confernce/schedule/[node:title]';
  $export['pathauto_node_conference_schedule_pattern'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ec_conference_tracks_sessions_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node conference_event breadcrumbs'.
  $permissions['administer panelizer node conference_event breadcrumbs'] = array(
    'name' => 'administer panelizer node conference_event breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event content'.
  $permissions['administer panelizer node conference_event content'] = array(
    'name' => 'administer panelizer node conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event context'.
  $permissions['administer panelizer node conference_event context'] = array(
    'name' => 'administer panelizer node conference_event context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event defaults'.
  $permissions['administer panelizer node conference_event defaults'] = array(
    'name' => 'administer panelizer node conference_event defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event layout'.
  $permissions['administer panelizer node conference_event layout'] = array(
    'name' => 'administer panelizer node conference_event layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event overview'.
  $permissions['administer panelizer node conference_event overview'] = array(
    'name' => 'administer panelizer node conference_event overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_event settings'.
  $permissions['administer panelizer node conference_event settings'] = array(
    'name' => 'administer panelizer node conference_event settings',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node conference_schedule defaults'.
  $permissions['administer panelizer node conference_schedule defaults'] = array(
    'name' => 'administer panelizer node conference_schedule defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node session defaults'.
  $permissions['administer panelizer node session defaults'] = array(
    'name' => 'administer panelizer node session defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create conference_event content'.
  $permissions['create conference_event content'] = array(
    'name' => 'create conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create conference_schedule content'.
  $permissions['create conference_schedule content'] = array(
    'name' => 'create conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_event content'.
  $permissions['delete any conference_event content'] = array(
    'name' => 'delete any conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_schedule content'.
  $permissions['delete any conference_schedule content'] = array(
    'name' => 'delete any conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any session content'.
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_event content'.
  $permissions['delete own conference_event content'] = array(
    'name' => 'delete own conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_schedule content'.
  $permissions['delete own conference_schedule content'] = array(
    'name' => 'delete own conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own session content'.
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_event content'.
  $permissions['edit any conference_event content'] = array(
    'name' => 'edit any conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_schedule content'.
  $permissions['edit any conference_schedule content'] = array(
    'name' => 'edit any conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any session content'.
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_event content'.
  $permissions['edit own conference_event content'] = array(
    'name' => 'edit own conference_event content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_schedule content'.
  $permissions['edit own conference_schedule content'] = array(
    'name' => 'edit own conference_schedule content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
