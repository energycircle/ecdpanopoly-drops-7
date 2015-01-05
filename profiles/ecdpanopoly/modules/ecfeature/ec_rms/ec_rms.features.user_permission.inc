<?php
/**
 * @file
 * ec_rms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_rms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node ec_review breadcrumbs'.
  $permissions['administer panelizer node ec_review breadcrumbs'] = array(
    'name' => 'administer panelizer node ec_review breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ec_review content'.
  $permissions['administer panelizer node ec_review content'] = array(
    'name' => 'administer panelizer node ec_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ec_review context'.
  $permissions['administer panelizer node ec_review context'] = array(
    'name' => 'administer panelizer node ec_review context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ec_review defaults'.
  $permissions['administer panelizer node ec_review defaults'] = array(
    'name' => 'administer panelizer node ec_review defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ec_review layout'.
  $permissions['administer panelizer node ec_review layout'] = array(
    'name' => 'administer panelizer node ec_review layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ec_review overview'.
  $permissions['administer panelizer node ec_review overview'] = array(
    'name' => 'administer panelizer node ec_review overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ec_review settings'.
  $permissions['administer panelizer node ec_review settings'] = array(
    'name' => 'administer panelizer node ec_review settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node review_site defaults'.
  $permissions['administer panelizer node review_site defaults'] = array(
    'name' => 'administer panelizer node review_site defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'clear rms_import_customers_for_reviews feeds'.
  $permissions['clear rms_import_customers_for_reviews feeds'] = array(
    'name' => 'clear rms_import_customers_for_reviews feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create ec_review content'.
  $permissions['create ec_review content'] = array(
    'name' => 'create ec_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create review_site content'.
  $permissions['create review_site content'] = array(
    'name' => 'create review_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ec_review content'.
  $permissions['delete any ec_review content'] = array(
    'name' => 'delete any ec_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any review_site content'.
  $permissions['delete any review_site content'] = array(
    'name' => 'delete any review_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ec_review content'.
  $permissions['delete own ec_review content'] = array(
    'name' => 'delete own ec_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own review_site content'.
  $permissions['delete own review_site content'] = array(
    'name' => 'delete own review_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ec_review content'.
  $permissions['edit any ec_review content'] = array(
    'name' => 'edit any ec_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any review_site content'.
  $permissions['edit any review_site content'] = array(
    'name' => 'edit any review_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ec_review content'.
  $permissions['edit own ec_review content'] = array(
    'name' => 'edit own ec_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own review_site content'.
  $permissions['edit own review_site content'] = array(
    'name' => 'edit own review_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import rms_import_customers_for_reviews feeds'.
  $permissions['import rms_import_customers_for_reviews feeds'] = array(
    'name' => 'import rms_import_customers_for_reviews feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock rms_import_customers_for_reviews feeds'.
  $permissions['unlock rms_import_customers_for_reviews feeds'] = array(
    'name' => 'unlock rms_import_customers_for_reviews feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
