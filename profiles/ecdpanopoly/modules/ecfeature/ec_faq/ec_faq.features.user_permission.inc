<?php
/**
 * @file
 * ec_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node faq breadcrumbs'.
  $permissions['administer panelizer node faq breadcrumbs'] = array(
    'name' => 'administer panelizer node faq breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq choice'.
  $permissions['administer panelizer node faq choice'] = array(
    'name' => 'administer panelizer node faq choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq content'.
  $permissions['administer panelizer node faq content'] = array(
    'name' => 'administer panelizer node faq content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq context'.
  $permissions['administer panelizer node faq context'] = array(
    'name' => 'administer panelizer node faq context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq defaults'.
  $permissions['administer panelizer node faq defaults'] = array(
    'name' => 'administer panelizer node faq defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq layout'.
  $permissions['administer panelizer node faq layout'] = array(
    'name' => 'administer panelizer node faq layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq overview'.
  $permissions['administer panelizer node faq overview'] = array(
    'name' => 'administer panelizer node faq overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq settings'.
  $permissions['administer panelizer node faq settings'] = array(
    'name' => 'administer panelizer node faq settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'EC Contractor' => 'EC Contractor',
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
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
