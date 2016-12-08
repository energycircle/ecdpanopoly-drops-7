<?php
/**
 * @file
 * ec_marketing_dashboard.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_marketing_dashboard_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: management:node/1
  $menu_links['management:node/1'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Marketing Dashboard',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Marketing Dashboard');


  return $menu_links;
}
