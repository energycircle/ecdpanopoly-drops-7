<?php
/**
 * @file
 * ec_download_file_gate.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_download_file_gate_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_ec-guide-downloads:node/1318.
  $menu_links['management_ec-guide-downloads:node/1318'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/1318',
    'router_path' => 'node/%',
    'link_title' => 'EC Guide Downloads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_ec-guide-downloads:node/1318',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'management_reports:admin/reports',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('EC Guide Downloads');

  return $menu_links;
}
