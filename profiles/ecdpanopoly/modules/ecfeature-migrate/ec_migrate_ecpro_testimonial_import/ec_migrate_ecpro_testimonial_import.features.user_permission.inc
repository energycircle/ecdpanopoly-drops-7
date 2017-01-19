<?php
/**
 * @file
 * ec_migrate_ecpro_testimonial_import.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_migrate_ecpro_testimonial_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear ecpro_testimonial_import feeds'.
  $permissions['clear ecpro_testimonial_import feeds'] = array(
    'name' => 'clear ecpro_testimonial_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ecpro_testimonial_import feeds'.
  $permissions['import ecpro_testimonial_import feeds'] = array(
    'name' => 'import ecpro_testimonial_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper ecpro_testimonial_import'.
  $permissions['tamper ecpro_testimonial_import'] = array(
    'name' => 'tamper ecpro_testimonial_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock ecpro_testimonial_import feeds'.
  $permissions['unlock ecpro_testimonial_import feeds'] = array(
    'name' => 'unlock ecpro_testimonial_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
