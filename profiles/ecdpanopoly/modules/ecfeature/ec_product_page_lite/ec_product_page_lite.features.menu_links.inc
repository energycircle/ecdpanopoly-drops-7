<?php
/**
 * @file
 * ec_product_page_lite.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_product_page_lite_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary-menu_product-center:node/36
  $menu_links['menu-auxiliary-menu_product-center:node/36'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Product Center',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_product-center:node/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_resources:node/9',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Product Center');


  return $menu_links;
}
