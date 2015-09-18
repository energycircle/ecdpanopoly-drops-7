<?php
/**
 * @file
 * ec_campaign_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_campaign_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node campaign_page breadcrumbs'.
  $permissions['administer panelizer node campaign_page breadcrumbs'] = array(
    'name' => 'administer panelizer node campaign_page breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node campaign_page content'.
  $permissions['administer panelizer node campaign_page content'] = array(
    'name' => 'administer panelizer node campaign_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node campaign_page context'.
  $permissions['administer panelizer node campaign_page context'] = array(
    'name' => 'administer panelizer node campaign_page context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node campaign_page defaults'.
  $permissions['administer panelizer node campaign_page defaults'] = array(
    'name' => 'administer panelizer node campaign_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node campaign_page layout'.
  $permissions['administer panelizer node campaign_page layout'] = array(
    'name' => 'administer panelizer node campaign_page layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node campaign_page overview'.
  $permissions['administer panelizer node campaign_page overview'] = array(
    'name' => 'administer panelizer node campaign_page overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node campaign_page settings'.
  $permissions['administer panelizer node campaign_page settings'] = array(
    'name' => 'administer panelizer node campaign_page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create campaign_page content'.
  $permissions['create campaign_page content'] = array(
    'name' => 'create campaign_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any campaign_page content'.
  $permissions['delete any campaign_page content'] = array(
    'name' => 'delete any campaign_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own campaign_page content'.
  $permissions['delete own campaign_page content'] = array(
    'name' => 'delete own campaign_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any campaign_page content'.
  $permissions['edit any campaign_page content'] = array(
    'name' => 'edit any campaign_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own campaign_page content'.
  $permissions['edit own campaign_page content'] = array(
    'name' => 'edit own campaign_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
