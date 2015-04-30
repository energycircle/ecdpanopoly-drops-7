<?php
/**
 * @file
 * ec_casestudy_demo_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_casestudy_demo_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary-menu_barbara-and-george:node/84
  $menu_links['menu-auxiliary-menu_barbara-and-george:node/84'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/84',
    'router_path' => 'node/%',
    'link_title' => 'Barbara and George',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_barbara-and-george:node/84',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_case-studies:node/10',
  );
  // Exported menu link: menu-auxiliary-menu_elaine-and-bill:node/132
  $menu_links['menu-auxiliary-menu_elaine-and-bill:node/132'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/132',
    'router_path' => 'node/%',
    'link_title' => 'Elaine and Bill',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_elaine-and-bill:node/132',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_case-studies:node/10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Barbara and George');
  t('Elaine and Bill');


  return $menu_links;
}
