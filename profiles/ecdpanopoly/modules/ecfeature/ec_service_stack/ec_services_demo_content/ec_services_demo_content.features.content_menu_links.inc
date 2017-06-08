<?php
/**
 * @file
 * ec_services_demo_content.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_services_demo_content_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/116
  $menu_links['main-menu:node/116'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/116',
    'router_path' => 'node/%',
    'link_title' => 'Heating',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu:node/117
  $menu_links['main-menu:node/117'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/117',
    'router_path' => 'node/%',
    'link_title' => 'Home Performance',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu:node/119
  $menu_links['main-menu:node/119'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/119',
    'router_path' => 'node/%',
    'link_title' => 'Air Conditioning',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu:node/120
  $menu_links['main-menu:node/120'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/120',
    'router_path' => 'node/%',
    'link_title' => 'Ventilation Systems/Duct Design',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/116',
  );
  // Exported menu link: main-menu:node/121
  $menu_links['main-menu:node/121'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/121',
    'router_path' => 'node/%',
    'link_title' => 'Indoor Air',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/116',
  );
  // Exported menu link: main-menu:node/122
  $menu_links['main-menu:node/122'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/122',
    'router_path' => 'node/%',
    'link_title' => 'Mini-Split Heat Pumps',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/116',
  );
  // Exported menu link: main-menu:node/125
  $menu_links['main-menu:node/125'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/125',
    'router_path' => 'node/%',
    'link_title' => 'Home Zoning',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/119',
  );
  // Exported menu link: main-menu:node/126
  $menu_links['main-menu:node/126'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/126',
    'router_path' => 'node/%',
    'link_title' => 'Mini-Splits',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/119',
  );
  // Exported menu link: main-menu:node/127
  $menu_links['main-menu:node/127'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/127',
    'router_path' => 'node/%',
    'link_title' => 'Geothermal',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/116',
  );
  // Exported menu link: main-menu:node/128
  $menu_links['main-menu:node/128'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/128',
    'router_path' => 'node/%',
    'link_title' => 'Furnaces',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/116',
  );
  // Exported menu link: main-menu:node/129
  $menu_links['main-menu:node/129'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/129',
    'router_path' => 'node/%',
    'link_title' => 'Insulation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/117',
  );
  // Exported menu link: main-menu:node/130
  $menu_links['main-menu:node/130'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/130',
    'router_path' => 'node/%',
    'link_title' => 'Energy Audits',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/117',
  );
  // Exported menu link: main-menu:node/131
  $menu_links['main-menu:node/131'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/131',
    'router_path' => 'node/%',
    'link_title' => 'Central Air Conditioning',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/119',
  );
  // Exported menu link: main-menu:node/133
  $menu_links['main-menu:node/133'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/133',
    'router_path' => 'node/%',
    'link_title' => 'Air Sealing',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/117',
  );
  // Exported menu link: main-menu:node/134
  $menu_links['main-menu:node/134'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/134',
    'router_path' => 'node/%',
    'link_title' => 'Tankless Water Heaters',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/116',
  );
  // Exported menu link: main-menu:node/135
  $menu_links['main-menu:node/135'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/135',
    'router_path' => 'node/%',
    'link_title' => 'High-Efficiency Tank Water Heaters',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/117',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Air Conditioning');
  t('Air Sealing');
  t('Central Air Conditioning');
  t('Energy Audits');
  t('Furnaces');
  t('Geothermal');
  t('Heating');
  t('High-Efficiency Tank Water Heaters');
  t('Home Performance');
  t('Home Zoning');
  t('Indoor Air');
  t('Insulation');
  t('Mini-Split Heat Pumps');
  t('Mini-Splits');
  t('Tankless Water Heaters');
  t('Ventilation Systems/Duct Design');


  return $menu_links;
}
