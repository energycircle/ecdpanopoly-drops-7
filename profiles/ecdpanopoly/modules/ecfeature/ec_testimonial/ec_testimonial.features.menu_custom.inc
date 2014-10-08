<?php
/**
 * @file
 * ec_testimonial.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ec_testimonial_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-auxiliary-menu.
  $menus['menu-auxiliary-menu'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'title' => 'Auxiliary Menu',
    'description' => 'Auxiliary menu typically located at the top of the page',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => 'Custom menu for the site footer',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Auxiliary Menu');
  t('Auxiliary menu typically located at the top of the page');
  t('Custom menu for the site footer');
  t('Footer Menu');


  return $menus;
}
