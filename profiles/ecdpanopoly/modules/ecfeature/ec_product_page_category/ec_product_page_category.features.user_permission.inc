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

  // Exported permission: 'create product_category content'.
  $permissions['create product_category content'] = array(
    'name' => 'create product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
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
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_category content'.
  $permissions['edit any product_category content'] = array(
    'name' => 'edit any product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_category content'.
  $permissions['edit own product_category content'] = array(
    'name' => 'edit own product_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
