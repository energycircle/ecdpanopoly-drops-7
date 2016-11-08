<?php
/**
 * @file
 * ec_custom_dashboard.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_custom_dashboard_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: management_custom-dashboard:node/22
  $menu_links['management_custom-dashboard:node/22'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Custom Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_custom-dashboard:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Custom Dashboard');


  return $menu_links;
}
