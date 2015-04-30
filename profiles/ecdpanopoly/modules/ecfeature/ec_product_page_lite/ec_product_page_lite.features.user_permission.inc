<?php
/**
 * @file
 * ec_product_page_lite.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_product_page_lite_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node product_page breadcrumbs'.
  $permissions['administer panelizer node product_page breadcrumbs'] = array(
    'name' => 'administer panelizer node product_page breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page content'.
  $permissions['administer panelizer node product_page content'] = array(
    'name' => 'administer panelizer node product_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page context'.
  $permissions['administer panelizer node product_page context'] = array(
    'name' => 'administer panelizer node product_page context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page defaults'.
  $permissions['administer panelizer node product_page defaults'] = array(
    'name' => 'administer panelizer node product_page defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page layout'.
  $permissions['administer panelizer node product_page layout'] = array(
    'name' => 'administer panelizer node product_page layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page overview'.
  $permissions['administer panelizer node product_page overview'] = array(
    'name' => 'administer panelizer node product_page overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page settings'.
  $permissions['administer panelizer node product_page settings'] = array(
    'name' => 'administer panelizer node product_page settings',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create product_page content'.
  $permissions['create product_page content'] = array(
    'name' => 'create product_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_page content'.
  $permissions['delete any product_page content'] = array(
    'name' => 'delete any product_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_page content'.
  $permissions['delete own product_page content'] = array(
    'name' => 'delete own product_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_page content'.
  $permissions['edit any product_page content'] = array(
    'name' => 'edit any product_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_page content'.
  $permissions['edit own product_page content'] = array(
    'name' => 'edit own product_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
