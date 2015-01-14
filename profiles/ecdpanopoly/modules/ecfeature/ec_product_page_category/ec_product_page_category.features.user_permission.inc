<?php
/**
 * @file
 * ec_product_page_category.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_product_page_category_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node product_category breadcrumbs'.
  $permissions['administer panelizer node product_category breadcrumbs'] = array(
    'name' => 'administer panelizer node product_category breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_category content'.
  $permissions['administer panelizer node product_category content'] = array(
    'name' => 'administer panelizer node product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_category context'.
  $permissions['administer panelizer node product_category context'] = array(
    'name' => 'administer panelizer node product_category context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_category defaults'.
  $permissions['administer panelizer node product_category defaults'] = array(
    'name' => 'administer panelizer node product_category defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_category layout'.
  $permissions['administer panelizer node product_category layout'] = array(
    'name' => 'administer panelizer node product_category layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_category overview'.
  $permissions['administer panelizer node product_category overview'] = array(
    'name' => 'administer panelizer node product_category overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_category settings'.
  $permissions['administer panelizer node product_category settings'] = array(
    'name' => 'administer panelizer node product_category settings',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create product_category content'.
  $permissions['create product_category content'] = array(
    'name' => 'create product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_category content'.
  $permissions['delete any product_category content'] = array(
    'name' => 'delete any product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_category content'.
  $permissions['delete own product_category content'] = array(
    'name' => 'delete own product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_category content'.
  $permissions['edit any product_category content'] = array(
    'name' => 'edit any product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_category content'.
  $permissions['edit own product_category content'] = array(
    'name' => 'edit own product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
