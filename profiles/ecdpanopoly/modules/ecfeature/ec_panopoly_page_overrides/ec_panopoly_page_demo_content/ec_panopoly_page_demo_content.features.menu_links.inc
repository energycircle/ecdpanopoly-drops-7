<?php
/**
 * @file
 * ec_panopoly_page_demo_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_panopoly_page_demo_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary-menu_careers:node/6
  $menu_links['menu-auxiliary-menu_careers:node/6'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-auxiliary-menu_careers:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-auxiliary-menu_newsletters:node/11
  $menu_links['menu-auxiliary-menu_newsletters:node/11'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Newsletters',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_newsletters:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-auxiliary-menu_our-people:node/10
  $menu_links['menu-auxiliary-menu_our-people:node/10'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Our People',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_our-people:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Careers');
  t('Newsletters');
  t('Our People');

  return $menu_links;
}
