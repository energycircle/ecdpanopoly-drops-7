<?php
/**
 * @file
 * ec_staff_demo_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_staff_demo_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary-menu_dominick-dilissio:node/34
  $menu_links['menu-auxiliary-menu_dominick-dilissio:node/34'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Dominick DiLissio',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_dominick-dilissio:node/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_our-people:node/10',
  );
  // Exported menu link: menu-auxiliary-menu_joe-needham:node/35
  $menu_links['menu-auxiliary-menu_joe-needham:node/35'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Joe Needham',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_joe-needham:node/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_our-people:node/10',
  );
  // Exported menu link: menu-auxiliary-menu_michael-robertson:node/36
  $menu_links['menu-auxiliary-menu_michael-robertson:node/36'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Michael Robertson',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_michael-robertson:node/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_our-people:node/10',
  );
  // Exported menu link: menu-auxiliary-menu_scotty-deedhaming:node/33
  $menu_links['menu-auxiliary-menu_scotty-deedhaming:node/33'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Scotty Deedhaming',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_scotty-deedhaming:node/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_our-people:node/10',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dominick DiLissio');
  t('Joe Needham');
  t('Michael Robertson');
  t('Scotty Deedhaming');

  return $menu_links;
}
