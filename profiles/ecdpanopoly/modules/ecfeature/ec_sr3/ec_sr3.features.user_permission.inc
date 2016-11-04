<?php
/**
 * @file
 * ec_sr3.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_sr3_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node sr3_service_review defaults'.
  $permissions['administer panelizer node sr3_service_review defaults'] = array(
    'name' => 'administer panelizer node sr3_service_review defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sr3_review_services defaults'.
  $permissions['administer panelizer taxonomy_term sr3_review_services defaults'] = array(
    'name' => 'administer panelizer taxonomy_term sr3_review_services defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'clear get5stars_reviews feeds'.
  $permissions['clear get5stars_reviews feeds'] = array(
    'name' => 'clear get5stars_reviews feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create sr3_service_review content'.
  $permissions['create sr3_service_review content'] = array(
    'name' => 'create sr3_service_review content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sr3_service_review content'.
  $permissions['delete any sr3_service_review content'] = array(
    'name' => 'delete any sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sr3_service_review content'.
  $permissions['delete own sr3_service_review content'] = array(
    'name' => 'delete own sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in sr3_review_services'.
  $permissions['delete terms in sr3_review_services'] = array(
    'name' => 'delete terms in sr3_review_services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any sr3_service_review content'.
  $permissions['edit any sr3_service_review content'] = array(
    'name' => 'edit any sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sr3_service_review content'.
  $permissions['edit own sr3_service_review content'] = array(
    'name' => 'edit own sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in sr3_review_services'.
  $permissions['edit terms in sr3_review_services'] = array(
    'name' => 'edit terms in sr3_review_services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import get5stars_reviews feeds'.
  $permissions['import get5stars_reviews feeds'] = array(
    'name' => 'import get5stars_reviews feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock get5stars_reviews feeds'.
  $permissions['unlock get5stars_reviews feeds'] = array(
    'name' => 'unlock get5stars_reviews feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
