<?php
/**
 * @file
 * ec_services_demo_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_services_demo_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_duct-cleaning:node/40
  $menu_links['main-menu_duct-cleaning:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Duct Cleaning',
    'options' => array(
      'identifier' => 'main-menu_duct-cleaning:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_furnace-installation--repair:node/40
  $menu_links['main-menu_furnace-installation--repair:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Furnace Installation & Repair',
    'options' => array(
      'identifier' => 'main-menu_furnace-installation--repair:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_heating--cooling:node/18',
  );
  // Exported menu link: main-menu_generator-installation--repair:node/41
  $menu_links['main-menu_generator-installation--repair:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Generator Installation & Repair',
    'options' => array(
      'identifier' => 'main-menu_generator-installation--repair:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_humidifier-installation--repair:node/41
  $menu_links['main-menu_humidifier-installation--repair:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Humidifier Installation & Repair',
    'options' => array(
      'identifier' => 'main-menu_humidifier-installation--repair:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Duct Cleaning');
  t('Furnace Installation & Repair');
  t('Generator Installation & Repair');
  t('Humidifier Installation & Repair');

  return $menu_links;
}
