<?php
/**
 * @file
 * ec_migrate_wp_xml_import_to_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_migrate_wp_xml_import_to_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear wordpress_xml_blog_import feeds'.
  $permissions['clear wordpress_xml_blog_import feeds'] = array(
    'name' => 'clear wordpress_xml_blog_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import wordpress_xml_blog_import feeds'.
  $permissions['import wordpress_xml_blog_import feeds'] = array(
    'name' => 'import wordpress_xml_blog_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper wordpress_xml_blog_import'.
  $permissions['tamper wordpress_xml_blog_import'] = array(
    'name' => 'tamper wordpress_xml_blog_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock wordpress_xml_blog_import feeds'.
  $permissions['unlock wordpress_xml_blog_import feeds'] = array(
    'name' => 'unlock wordpress_xml_blog_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
