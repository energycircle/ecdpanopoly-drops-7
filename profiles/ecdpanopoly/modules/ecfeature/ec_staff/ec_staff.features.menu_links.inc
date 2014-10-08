<?php
/**
 * @file
 * ec_staff.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_staff_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_staff:node/add/staff
  $menu_links['navigation_staff:node/add/staff'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/staff',
    'router_path' => 'node/add/staff',
    'link_title' => 'Staff',
    'options' => array(
      'identifier' => 'navigation_staff:node/add/staff',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Staff');


  return $menu_links;
}
