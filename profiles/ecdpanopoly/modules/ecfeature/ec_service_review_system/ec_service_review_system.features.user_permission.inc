<?php
/**
 * @file
 * ec_service_review_system.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_service_review_system_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node sreview_site defaults'.
  $permissions['administer panelizer node sreview_site defaults'] = array(
    'name' => 'administer panelizer node sreview_site defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term service_review_tags defaults'.
  $permissions['administer panelizer taxonomy_term service_review_tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term service_review_tags defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create field_sreview_email_sent'.
  $permissions['create field_sreview_email_sent'] = array(
    'name' => 'create field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sreview_send_email'.
  $permissions['create field_sreview_send_email'] = array(
    'name' => 'create field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sreview_tags'.
  $permissions['create field_sreview_tags'] = array(
    'name' => 'create field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create sreview_site content'.
  $permissions['create sreview_site content'] = array(
    'name' => 'create sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sreview_site content'.
  $permissions['delete any sreview_site content'] = array(
    'name' => 'delete any sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sreview_site content'.
  $permissions['delete own sreview_site content'] = array(
    'name' => 'delete own sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in service_review_tags'.
  $permissions['delete terms in service_review_tags'] = array(
    'name' => 'delete terms in service_review_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any sreview_site content'.
  $permissions['edit any sreview_site content'] = array(
    'name' => 'edit any sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_sreview_email_sent'.
  $permissions['edit field_sreview_email_sent'] = array(
    'name' => 'edit field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sreview_send_email'.
  $permissions['edit field_sreview_send_email'] = array(
    'name' => 'edit field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sreview_tags'.
  $permissions['edit field_sreview_tags'] = array(
    'name' => 'edit field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sreview_email_sent'.
  $permissions['edit own field_sreview_email_sent'] = array(
    'name' => 'edit own field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sreview_send_email'.
  $permissions['edit own field_sreview_send_email'] = array(
    'name' => 'edit own field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sreview_tags'.
  $permissions['edit own field_sreview_tags'] = array(
    'name' => 'edit own field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own sreview_site content'.
  $permissions['edit own sreview_site content'] = array(
    'name' => 'edit own sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in service_review_tags'.
  $permissions['edit terms in service_review_tags'] = array(
    'name' => 'edit terms in service_review_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_sreview_email_sent'.
  $permissions['view field_sreview_email_sent'] = array(
    'name' => 'view field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sreview_send_email'.
  $permissions['view field_sreview_send_email'] = array(
    'name' => 'view field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sreview_tags'.
  $permissions['view field_sreview_tags'] = array(
    'name' => 'view field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sreview_email_sent'.
  $permissions['view own field_sreview_email_sent'] = array(
    'name' => 'view own field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sreview_send_email'.
  $permissions['view own field_sreview_send_email'] = array(
    'name' => 'view own field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sreview_tags'.
  $permissions['view own field_sreview_tags'] = array(
    'name' => 'view own field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
