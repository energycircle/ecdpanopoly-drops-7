<?php
/**
 * @file
 * ec_foundation_other.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ec_foundation_other_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-auxiliary-menu.
  $menus['menu-auxiliary-menu'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'title' => 'Auxiliary Menu',
    'description' => 'Auxiliary menu typically located at the top of the page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Auxiliary Menu');
  t('Auxiliary menu typically located at the top of the page');


  return $menus;
}
