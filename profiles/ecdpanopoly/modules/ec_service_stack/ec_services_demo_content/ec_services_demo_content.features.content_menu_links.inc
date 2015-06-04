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

  // Exported menu link: main-menu:node/18
  $menu_links['main-menu:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Heating & Cooling',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu:node/19
  $menu_links['main-menu:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Ventilation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/28',
  );
  // Exported menu link: main-menu:node/20
  $menu_links['main-menu:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Air Conditioning',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu:node/21
  $menu_links['main-menu:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
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
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu_cellulose-insulation:node/27
  $menu_links['main-menu_cellulose-insulation:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Cellulose Insulation',
    'options' => array(
      'identifier' => 'main-menu_cellulose-insulation:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/26',
  );
  // Exported menu link: main-menu_commercial-services:node/27
  $menu_links['main-menu_commercial-services:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Commercial Services',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_commercial-services:node/34
  $menu_links['main-menu_commercial-services:node/34'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Insulation',
    'options' => array(
      'identifier' => 'main-menu_commercial-services:node/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_path' => 'node/26',
  );
  // Exported menu link: main-menu_duct-cleaning:node/38
  $menu_links['main-menu_duct-cleaning:node/38'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Duct Cleaning',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/32',
  );
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
    'parent_path' => 'node/32',
  );
  // Exported menu link: main-menu_energy-audits:node/23
  $menu_links['main-menu_energy-audits:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Dehumidifier Installation & Repair',
    'options' => array(
      'identifier' => 'main-menu_energy-audits:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu_furnace-installation--repair:node/40
  $menu_links['main-menu_furnace-installation--repair:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Furnace Installation & Repair',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/18',
  );
  // Exported menu link: main-menu_generator-installation--repair:node/24
  $menu_links['main-menu_generator-installation--repair:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Water Heater Installation & Repair',
    'options' => array(
      'identifier' => 'main-menu_generator-installation--repair:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu_generator-installation--repair:node/41
  $menu_links['main-menu_generator-installation--repair:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Generator Installation & Repair',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/26',
  );
  // Exported menu link: main-menu_heat-pump-installation--repair:node/29
  $menu_links['main-menu_heat-pump-installation--repair:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Heat Pump Installation & Repair',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/18',
  );
  // Exported menu link: main-menu_home-performance--renewables:node/22
  $menu_links['main-menu_home-performance--renewables:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Air Treatment',
    'options' => array(
      'identifier' => 'main-menu_home-performance--renewables:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home-performance--renewables:node/26
  $menu_links['main-menu_home-performance--renewables:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Home Performance & Renewables',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_home-zoning--thermostats:node/30
  $menu_links['main-menu_home-zoning--thermostats:node/30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Home Zoning & Thermostats',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/18',
  );
  // Exported menu link: main-menu_humidifier-installation--repair:node/31
  $menu_links['main-menu_humidifier-installation--repair:node/31'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Humidifier Installation & Repair',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/28',
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
    'parent_path' => 'node/32',
  );
  // Exported menu link: main-menu_hvac:node/32
  $menu_links['main-menu_hvac:node/32'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'HVAC',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/27',
  );
  // Exported menu link: main-menu_indoor-air-quality:node/28
  $menu_links['main-menu_indoor-air-quality:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Indoor Air Quality',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_indoor-air-quality:node/32
  $menu_links['main-menu_indoor-air-quality:node/32'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Indoor Air Quality',
    'options' => array(
      'identifier' => 'main-menu_indoor-air-quality:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_insulation:node/26
  $menu_links['main-menu_insulation:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Insulation',
    'options' => array(
      'identifier' => 'main-menu_insulation:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu_solar-hot-water:node/37
  $menu_links['main-menu_solar-hot-water:node/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Solar Hot Water',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/18',
  );
  // Exported menu link: main-menu_solar-pv:node/30
  $menu_links['main-menu_solar-pv:node/30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Solar PV',
    'options' => array(
      'identifier' => 'main-menu_solar-pv:node/30',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/29',
  );
  // Exported menu link: main-menu_solar-thermal:node/31
  $menu_links['main-menu_solar-thermal:node/31'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Solar Thermal',
    'options' => array(
      'identifier' => 'main-menu_solar-thermal:node/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/29',
  );
  // Exported menu link: main-menu_solar:node/29
  $menu_links['main-menu_solar:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Solar',
    'options' => array(
      'identifier' => 'main-menu_solar:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu_solar:node/36
  $menu_links['main-menu_solar:node/36'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Solar',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/26',
  );
  // Exported menu link: main-menu_spray-foam-insulation:node/28
  $menu_links['main-menu_spray-foam-insulation:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Spray Foam Insulation',
    'options' => array(
      'identifier' => 'main-menu_spray-foam-insulation:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/26',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Air Conditioning');
  t('Air Treatment');
  t('Cellulose Insulation');
  t('Commercial Services');
  t('Dehumidifier Installation & Repair');
  t('Duct Cleaning');
  t('Furnace Installation & Repair');
  t('Generator Installation & Repair');
  t('Geothermal');
  t('HVAC');
  t('Heat Pump Installation & Repair');
  t('Heating & Cooling');
  t('Home Performance & Renewables');
  t('Home Zoning & Thermostats');
  t('Humidifier Installation & Repair');
  t('Indoor Air Quality');
  t('Insulation');
  t('Solar');
  t('Solar Hot Water');
  t('Solar PV');
  t('Solar Thermal');
  t('Spray Foam Insulation');
  t('Ventilation');
  t('Water Heater Installation & Repair');


  return $menu_links;
}
