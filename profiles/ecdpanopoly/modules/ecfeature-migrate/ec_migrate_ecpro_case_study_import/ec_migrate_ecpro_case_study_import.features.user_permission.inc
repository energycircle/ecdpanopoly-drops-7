<?php
/**
 * @file
 * ec_migrate_ecpro_case_study_import.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_migrate_ecpro_case_study_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear ecpro_casestudy_import feeds'.
  $permissions['clear ecpro_casestudy_import feeds'] = array(
    'name' => 'clear ecpro_casestudy_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ecpro_casestudy_import feeds'.
  $permissions['import ecpro_casestudy_import feeds'] = array(
    'name' => 'import ecpro_casestudy_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper ecpro_casestudy_import'.
  $permissions['tamper ecpro_casestudy_import'] = array(
    'name' => 'tamper ecpro_casestudy_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock ecpro_casestudy_import feeds'.
  $permissions['unlock ecpro_casestudy_import feeds'] = array(
    'name' => 'unlock ecpro_casestudy_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
