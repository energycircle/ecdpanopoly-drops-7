<?php
/**
 * @file
 * ec_faq.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_faq_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary-menu_faq:node/6
  $menu_links['menu-auxiliary-menu_faq:node/6'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_faq:node/6',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: navigation_faq:node/add/faq
  $menu_links['navigation_faq:node/add/faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'identifier' => 'navigation_faq:node/add/faq',
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
  t('FAQ');


  return $menu_links;
}
