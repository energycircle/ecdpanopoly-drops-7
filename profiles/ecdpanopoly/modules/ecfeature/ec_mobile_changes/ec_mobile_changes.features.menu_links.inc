<?php
/**
 * @file
 * ec_mobile_changes.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_mobile_changes_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_schedule-service:node/4.
  $menu_links['main-menu_schedule-service:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Schedule Service',
    'options' => array(
      'identifier' => 'main-menu_schedule-service:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Schedule Service');

  return $menu_links;
}
