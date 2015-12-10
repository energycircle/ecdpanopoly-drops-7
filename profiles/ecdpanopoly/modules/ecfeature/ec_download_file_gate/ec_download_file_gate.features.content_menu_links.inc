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

  // Exported menu link: management:admin/config/ecdpanopoly
  $menu_links['management:admin/config/ecdpanopoly'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/ecdpanopoly',
    'router_path' => 'admin/config/ecdpanopoly',
    'link_title' => 'ECDPanopoly',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration for ECDPanopoly',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/reports/downloads
  $menu_links['management:admin/reports/downloads'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/downloads',
    'router_path' => 'admin/reports',
    'link_title' => 'Tracked downloads',
    'options' => array(
      'attributes' => array(
        'title' => 'View download statistics for tracked files.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_path' => 'admin/content',
  );
  // Exported menu link: management_thank-you-page:admin/settings/ecres
  $menu_links['management_thank-you-page:admin/settings/ecres'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/settings/ecres',
    'router_path' => 'admin/settings/ecres',
    'link_title' => 'Thank you page',
    'options' => array(
      'attributes' => array(
        'title' => 'enter the thank you url',
      ),
      'identifier' => 'management_thank-you-page:admin/settings/ecres',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_path' => 'admin/reports/downloads',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ECDPanopoly');
  t('Thank you page');
  t('Tracked downloads');


  return $menu_links;
}
