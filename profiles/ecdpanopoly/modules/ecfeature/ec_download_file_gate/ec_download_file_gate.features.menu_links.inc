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

  // Exported menu link: management_thank-you-page:admin/settings/ecres.
  $menu_links['management_thank-you-page:admin/settings/ecres'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/settings/ecres',
    'router_path' => 'admin',
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
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_ecdpanopoly:admin/config/ecdpanopoly',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Thank you page');

  return $menu_links;
}
