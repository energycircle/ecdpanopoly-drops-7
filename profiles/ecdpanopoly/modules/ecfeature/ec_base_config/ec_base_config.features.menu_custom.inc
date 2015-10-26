<?php
/**
 * @file
 * ec_base_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ec_base_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-auxiliary-menu.
  $menus['menu-auxiliary-menu'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'title' => 'Auxiliary menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Auxiliary menu');

  return $menus;
}
