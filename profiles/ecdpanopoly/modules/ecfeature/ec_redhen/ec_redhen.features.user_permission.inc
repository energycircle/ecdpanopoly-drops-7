<?php
/**
 * @file
 * ec_redhen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_redhen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access redhen'.
  $permissions['access redhen'] = array(
    'name' => 'access redhen',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen',
  );

  // Exported permission: 'access redhen contacts'.
  $permissions['access redhen contacts'] = array(
    'name' => 'access redhen contacts',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'access redhen notes'.
  $permissions['access redhen notes'] = array(
    'name' => 'access redhen notes',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_note',
  );

  // Exported permission: 'access redhen org revisions'.
  $permissions['access redhen org revisions'] = array(
    'name' => 'access redhen org revisions',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: 'access redhen orgs'.
  $permissions['access redhen orgs'] = array(
    'name' => 'access redhen orgs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: 'administer redhen'.
  $permissions['administer redhen'] = array(
    'name' => 'administer redhen',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen',
  );

  // Exported permission: 'administer redhen contacts'.
  $permissions['administer redhen contacts'] = array(
    'name' => 'administer redhen contacts',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'administer redhen notes'.
  $permissions['administer redhen notes'] = array(
    'name' => 'administer redhen notes',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_note',
  );

  // Exported permission: 'administer redhen orgs'.
  $permissions['administer redhen orgs'] = array(
    'name' => 'administer redhen orgs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: 'administer redhen_contact types'.
  $permissions['administer redhen_contact types'] = array(
    'name' => 'administer redhen_contact types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'administer redhen_org types'.
  $permissions['administer redhen_org types'] = array(
    'name' => 'administer redhen_org types',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: 'delete redhen contact connections'.
  $permissions['delete redhen contact connections'] = array(
    'name' => 'delete redhen contact connections',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: 'delete redhen contact revisions'.
  $permissions['delete redhen contact revisions'] = array(
    'name' => 'delete redhen contact revisions',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'delete redhen org connections'.
  $permissions['delete redhen org connections'] = array(
    'name' => 'delete redhen org connections',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: 'edit own redhen contact'.
  $permissions['edit own redhen contact'] = array(
    'name' => 'edit own redhen contact',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'edit redhen contact connections'.
  $permissions['edit redhen contact connections'] = array(
    'name' => 'edit redhen contact connections',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: 'edit redhen contact revisions'.
  $permissions['edit redhen contact revisions'] = array(
    'name' => 'edit redhen contact revisions',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'edit redhen org connections'.
  $permissions['edit redhen org connections'] = array(
    'name' => 'edit redhen org connections',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: 'manage redhen contacts'.
  $permissions['manage redhen contacts'] = array(
    'name' => 'manage redhen contacts',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'manage redhen notes'.
  $permissions['manage redhen notes'] = array(
    'name' => 'manage redhen notes',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_note',
  );

  // Exported permission: 'manage redhen org revisions'.
  $permissions['manage redhen org revisions'] = array(
    'name' => 'manage redhen org revisions',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: 'manage redhen orgs'.
  $permissions['manage redhen orgs'] = array(
    'name' => 'manage redhen orgs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: 'view own redhen contact'.
  $permissions['view own redhen contact'] = array(
    'name' => 'view own redhen contact',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'view redhen contact connections'.
  $permissions['view redhen contact connections'] = array(
    'name' => 'view redhen contact connections',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: 'view redhen contact revisions'.
  $permissions['view redhen contact revisions'] = array(
    'name' => 'view redhen contact revisions',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'view redhen org connections'.
  $permissions['view redhen org connections'] = array(
    'name' => 'view redhen org connections',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_relation',
  );

  return $permissions;
}
