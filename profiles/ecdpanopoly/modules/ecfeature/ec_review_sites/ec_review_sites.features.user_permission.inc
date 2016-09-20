<?php
/**
 * @file
 * ec_review_sites.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_review_sites_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node review_site defaults'.
  $permissions['administer panelizer node review_site defaults'] = array(
    'name' => 'administer panelizer node review_site defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term review_site_tags defaults'.
  $permissions['administer panelizer taxonomy_term review_site_tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term review_site_tags defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create review_site content'.
  $permissions['create review_site content'] = array(
    'name' => 'create review_site content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any review_site content'.
  $permissions['delete any review_site content'] = array(
    'name' => 'delete any review_site content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own review_site content'.
  $permissions['delete own review_site content'] = array(
    'name' => 'delete own review_site content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in review_site_tags'.
  $permissions['delete terms in review_site_tags'] = array(
    'name' => 'delete terms in review_site_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any review_site content'.
  $permissions['edit any review_site content'] = array(
    'name' => 'edit any review_site content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own review_site content'.
  $permissions['edit own review_site content'] = array(
    'name' => 'edit own review_site content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in review_site_tags'.
  $permissions['edit terms in review_site_tags'] = array(
    'name' => 'edit terms in review_site_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
