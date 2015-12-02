<?php
/**
 * @file
 * ec_download_file_gate.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_download_file_gate_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: management:admin/reports/downloads
  $menu_links['management:admin/reports/downloads'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/downloads',
    'router_path' => 'admin/reports/downloads',
    'link_title' => 'Tracked downloads',
    'options' => array(
      'attributes' => array(
        'title' => 'View download statistics for tracked files.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:node/1318
  $menu_links['management:node/1318'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/1318',
    'router_path' => 'node/%',
    'link_title' => 'EC Guide Downloads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_path' => 'admin/reports',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('EC Guide Downloads');
  t('Tracked downloads');


  return $menu_links;
}
