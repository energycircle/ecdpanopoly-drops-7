<?php
/**
 * @file
 * ec_foundation_roles.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_foundation_roles_defaultconfig_features() {
  return array(
    'ec_foundation_roles' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ec_foundation_roles_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article breadcrumbs'.
  $permissions['administer panelizer node article breadcrumbs'] = array(
    'name' => 'administer panelizer node article breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article content'.
  $permissions['administer panelizer node article content'] = array(
    'name' => 'administer panelizer node article content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article context'.
  $permissions['administer panelizer node article context'] = array(
    'name' => 'administer panelizer node article context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article layout'.
  $permissions['administer panelizer node article layout'] = array(
    'name' => 'administer panelizer node article layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article overview'.
  $permissions['administer panelizer node article overview'] = array(
    'name' => 'administer panelizer node article overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article settings'.
  $permissions['administer panelizer node article settings'] = array(
    'name' => 'administer panelizer node article settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post breadcrumbs'.
  $permissions['administer panelizer node blog_post breadcrumbs'] = array(
    'name' => 'administer panelizer node blog_post breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post content'.
  $permissions['administer panelizer node blog_post content'] = array(
    'name' => 'administer panelizer node blog_post content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post context'.
  $permissions['administer panelizer node blog_post context'] = array(
    'name' => 'administer panelizer node blog_post context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post defaults'.
  $permissions['administer panelizer node blog_post defaults'] = array(
    'name' => 'administer panelizer node blog_post defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post layout'.
  $permissions['administer panelizer node blog_post layout'] = array(
    'name' => 'administer panelizer node blog_post layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post overview'.
  $permissions['administer panelizer node blog_post overview'] = array(
    'name' => 'administer panelizer node blog_post overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post settings'.
  $permissions['administer panelizer node blog_post settings'] = array(
    'name' => 'administer panelizer node blog_post settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

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

  // Exported permission: 'administer panelizer node case_study breadcrumbs'.
  $permissions['administer panelizer node case_study breadcrumbs'] = array(
    'name' => 'administer panelizer node case_study breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study content'.
  $permissions['administer panelizer node case_study content'] = array(
    'name' => 'administer panelizer node case_study content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study context'.
  $permissions['administer panelizer node case_study context'] = array(
    'name' => 'administer panelizer node case_study context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study defaults'.
  $permissions['administer panelizer node case_study defaults'] = array(
    'name' => 'administer panelizer node case_study defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study layout'.
  $permissions['administer panelizer node case_study layout'] = array(
    'name' => 'administer panelizer node case_study layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study overview'.
  $permissions['administer panelizer node case_study overview'] = array(
    'name' => 'administer panelizer node case_study overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node case_study settings'.
  $permissions['administer panelizer node case_study settings'] = array(
    'name' => 'administer panelizer node case_study settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction breadcrumbs'.
  $permissions['administer panelizer node distinction breadcrumbs'] = array(
    'name' => 'administer panelizer node distinction breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction content'.
  $permissions['administer panelizer node distinction content'] = array(
    'name' => 'administer panelizer node distinction content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction context'.
  $permissions['administer panelizer node distinction context'] = array(
    'name' => 'administer panelizer node distinction context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction defaults'.
  $permissions['administer panelizer node distinction defaults'] = array(
    'name' => 'administer panelizer node distinction defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction layout'.
  $permissions['administer panelizer node distinction layout'] = array(
    'name' => 'administer panelizer node distinction layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction overview'.
  $permissions['administer panelizer node distinction overview'] = array(
    'name' => 'administer panelizer node distinction overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distinction settings'.
  $permissions['administer panelizer node distinction settings'] = array(
    'name' => 'administer panelizer node distinction settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq breadcrumbs'.
  $permissions['administer panelizer node faq breadcrumbs'] = array(
    'name' => 'administer panelizer node faq breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq content'.
  $permissions['administer panelizer node faq content'] = array(
    'name' => 'administer panelizer node faq content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq context'.
  $permissions['administer panelizer node faq context'] = array(
    'name' => 'administer panelizer node faq context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq defaults'.
  $permissions['administer panelizer node faq defaults'] = array(
    'name' => 'administer panelizer node faq defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq layout'.
  $permissions['administer panelizer node faq layout'] = array(
    'name' => 'administer panelizer node faq layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq overview'.
  $permissions['administer panelizer node faq overview'] = array(
    'name' => 'administer panelizer node faq overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq settings'.
  $permissions['administer panelizer node faq settings'] = array(
    'name' => 'administer panelizer node faq settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery breadcrumbs'.
  $permissions['administer panelizer node gallery breadcrumbs'] = array(
    'name' => 'administer panelizer node gallery breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery content'.
  $permissions['administer panelizer node gallery content'] = array(
    'name' => 'administer panelizer node gallery content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery context'.
  $permissions['administer panelizer node gallery context'] = array(
    'name' => 'administer panelizer node gallery context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery defaults'.
  $permissions['administer panelizer node gallery defaults'] = array(
    'name' => 'administer panelizer node gallery defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery layout'.
  $permissions['administer panelizer node gallery layout'] = array(
    'name' => 'administer panelizer node gallery layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery overview'.
  $permissions['administer panelizer node gallery overview'] = array(
    'name' => 'administer panelizer node gallery overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery settings'.
  $permissions['administer panelizer node gallery settings'] = array(
    'name' => 'administer panelizer node gallery settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page breadcrumbs'.
  $permissions['administer panelizer node panopoly_page breadcrumbs'] = array(
    'name' => 'administer panelizer node panopoly_page breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page content'.
  $permissions['administer panelizer node panopoly_page content'] = array(
    'name' => 'administer panelizer node panopoly_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page context'.
  $permissions['administer panelizer node panopoly_page context'] = array(
    'name' => 'administer panelizer node panopoly_page context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page defaults'.
  $permissions['administer panelizer node panopoly_page defaults'] = array(
    'name' => 'administer panelizer node panopoly_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page layout'.
  $permissions['administer panelizer node panopoly_page layout'] = array(
    'name' => 'administer panelizer node panopoly_page layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page overview'.
  $permissions['administer panelizer node panopoly_page overview'] = array(
    'name' => 'administer panelizer node panopoly_page overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page settings'.
  $permissions['administer panelizer node panopoly_page settings'] = array(
    'name' => 'administer panelizer node panopoly_page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

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
      'EC Platinum editor' => 'EC Platinum editor',
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
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page layout'.
  $permissions['administer panelizer node product_page layout'] = array(
    'name' => 'administer panelizer node product_page layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page overview'.
  $permissions['administer panelizer node product_page overview'] = array(
    'name' => 'administer panelizer node product_page overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node product_page settings'.
  $permissions['administer panelizer node product_page settings'] = array(
    'name' => 'administer panelizer node product_page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion breadcrumbs'.
  $permissions['administer panelizer node promotion breadcrumbs'] = array(
    'name' => 'administer panelizer node promotion breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion content'.
  $permissions['administer panelizer node promotion content'] = array(
    'name' => 'administer panelizer node promotion content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion context'.
  $permissions['administer panelizer node promotion context'] = array(
    'name' => 'administer panelizer node promotion context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion defaults'.
  $permissions['administer panelizer node promotion defaults'] = array(
    'name' => 'administer panelizer node promotion defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion layout'.
  $permissions['administer panelizer node promotion layout'] = array(
    'name' => 'administer panelizer node promotion layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion overview'.
  $permissions['administer panelizer node promotion overview'] = array(
    'name' => 'administer panelizer node promotion overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promotion settings'.
  $permissions['administer panelizer node promotion settings'] = array(
    'name' => 'administer panelizer node promotion settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service breadcrumbs'.
  $permissions['administer panelizer node service breadcrumbs'] = array(
    'name' => 'administer panelizer node service breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service content'.
  $permissions['administer panelizer node service content'] = array(
    'name' => 'administer panelizer node service content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service context'.
  $permissions['administer panelizer node service context'] = array(
    'name' => 'administer panelizer node service context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service defaults'.
  $permissions['administer panelizer node service defaults'] = array(
    'name' => 'administer panelizer node service defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service layout'.
  $permissions['administer panelizer node service layout'] = array(
    'name' => 'administer panelizer node service layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service overview'.
  $permissions['administer panelizer node service overview'] = array(
    'name' => 'administer panelizer node service overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service settings'.
  $permissions['administer panelizer node service settings'] = array(
    'name' => 'administer panelizer node service settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category breadcrumbs'.
  $permissions['administer panelizer node service_category breadcrumbs'] = array(
    'name' => 'administer panelizer node service_category breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category content'.
  $permissions['administer panelizer node service_category content'] = array(
    'name' => 'administer panelizer node service_category content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category context'.
  $permissions['administer panelizer node service_category context'] = array(
    'name' => 'administer panelizer node service_category context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category defaults'.
  $permissions['administer panelizer node service_category defaults'] = array(
    'name' => 'administer panelizer node service_category defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category layout'.
  $permissions['administer panelizer node service_category layout'] = array(
    'name' => 'administer panelizer node service_category layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category overview'.
  $permissions['administer panelizer node service_category overview'] = array(
    'name' => 'administer panelizer node service_category overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_category settings'.
  $permissions['administer panelizer node service_category settings'] = array(
    'name' => 'administer panelizer node service_category settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group breadcrumbs'.
  $permissions['administer panelizer node service_group breadcrumbs'] = array(
    'name' => 'administer panelizer node service_group breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group content'.
  $permissions['administer panelizer node service_group content'] = array(
    'name' => 'administer panelizer node service_group content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group context'.
  $permissions['administer panelizer node service_group context'] = array(
    'name' => 'administer panelizer node service_group context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group defaults'.
  $permissions['administer panelizer node service_group defaults'] = array(
    'name' => 'administer panelizer node service_group defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group layout'.
  $permissions['administer panelizer node service_group layout'] = array(
    'name' => 'administer panelizer node service_group layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group overview'.
  $permissions['administer panelizer node service_group overview'] = array(
    'name' => 'administer panelizer node service_group overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node service_group settings'.
  $permissions['administer panelizer node service_group settings'] = array(
    'name' => 'administer panelizer node service_group settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide breadcrumbs'.
  $permissions['administer panelizer node slide breadcrumbs'] = array(
    'name' => 'administer panelizer node slide breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide content'.
  $permissions['administer panelizer node slide content'] = array(
    'name' => 'administer panelizer node slide content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide context'.
  $permissions['administer panelizer node slide context'] = array(
    'name' => 'administer panelizer node slide context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide defaults'.
  $permissions['administer panelizer node slide defaults'] = array(
    'name' => 'administer panelizer node slide defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide layout'.
  $permissions['administer panelizer node slide layout'] = array(
    'name' => 'administer panelizer node slide layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide overview'.
  $permissions['administer panelizer node slide overview'] = array(
    'name' => 'administer panelizer node slide overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide settings'.
  $permissions['administer panelizer node slide settings'] = array(
    'name' => 'administer panelizer node slide settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff breadcrumbs'.
  $permissions['administer panelizer node staff breadcrumbs'] = array(
    'name' => 'administer panelizer node staff breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff content'.
  $permissions['administer panelizer node staff content'] = array(
    'name' => 'administer panelizer node staff content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff context'.
  $permissions['administer panelizer node staff context'] = array(
    'name' => 'administer panelizer node staff context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff defaults'.
  $permissions['administer panelizer node staff defaults'] = array(
    'name' => 'administer panelizer node staff defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff layout'.
  $permissions['administer panelizer node staff layout'] = array(
    'name' => 'administer panelizer node staff layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff overview'.
  $permissions['administer panelizer node staff overview'] = array(
    'name' => 'administer panelizer node staff overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff settings'.
  $permissions['administer panelizer node staff settings'] = array(
    'name' => 'administer panelizer node staff settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node testimonial breadcrumbs'.
  $permissions['administer panelizer node testimonial breadcrumbs'] = array(
    'name' => 'administer panelizer node testimonial breadcrumbs',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node testimonial content'.
  $permissions['administer panelizer node testimonial content'] = array(
    'name' => 'administer panelizer node testimonial content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node testimonial context'.
  $permissions['administer panelizer node testimonial context'] = array(
    'name' => 'administer panelizer node testimonial context',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node testimonial defaults'.
  $permissions['administer panelizer node testimonial defaults'] = array(
    'name' => 'administer panelizer node testimonial defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node testimonial layout'.
  $permissions['administer panelizer node testimonial layout'] = array(
    'name' => 'administer panelizer node testimonial layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node testimonial overview'.
  $permissions['administer panelizer node testimonial overview'] = array(
    'name' => 'administer panelizer node testimonial overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node testimonial settings'.
  $permissions['administer panelizer node testimonial settings'] = array(
    'name' => 'administer panelizer node testimonial settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term article_types defaults'.
  $permissions['administer panelizer taxonomy_term article_types defaults'] = array(
    'name' => 'administer panelizer taxonomy_term article_types defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term blog_categories defaults'.
  $permissions['administer panelizer taxonomy_term blog_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term blog_categories defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term departments defaults'.
  $permissions['administer panelizer taxonomy_term departments defaults'] = array(
    'name' => 'administer panelizer taxonomy_term departments defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term distinction_types defaults'.
  $permissions['administer panelizer taxonomy_term distinction_types defaults'] = array(
    'name' => 'administer panelizer taxonomy_term distinction_types defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories breadcrumbs'.
  $permissions['administer panelizer taxonomy_term panopoly_categories breadcrumbs'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories content'.
  $permissions['administer panelizer taxonomy_term panopoly_categories content'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories context'.
  $permissions['administer panelizer taxonomy_term panopoly_categories context'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories defaults'.
  $permissions['administer panelizer taxonomy_term panopoly_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories defaults',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories layout'.
  $permissions['administer panelizer taxonomy_term panopoly_categories layout'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories layout',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories overview'.
  $permissions['administer panelizer taxonomy_term panopoly_categories overview'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories overview',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories settings'.
  $permissions['administer panelizer taxonomy_term panopoly_categories settings'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term slide_set defaults'.
  $permissions['administer panelizer taxonomy_term slide_set defaults'] = array(
    'name' => 'administer panelizer taxonomy_term slide_set defaults',
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
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own campaign_page content'.
  $permissions['delete own campaign_page content'] = array(
    'name' => 'delete own campaign_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
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
