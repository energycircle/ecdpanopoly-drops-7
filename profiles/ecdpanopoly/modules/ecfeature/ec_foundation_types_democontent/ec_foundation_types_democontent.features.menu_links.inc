<?php
/**
 * @file
 * ec_foundation_types_democontent.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_foundation_types_democontent_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_air-conditioning:node/23
  $menu_links['main-menu_air-conditioning:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Air Conditioning',
    'options' => array(
      'identifier' => 'main-menu_air-conditioning:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dryer-vent-cleaning:node/30
  $menu_links['main-menu_dryer-vent-cleaning:node/30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Dryer Vent Cleaning',
    'options' => array(
      'identifier' => 'main-menu_dryer-vent-cleaning:node/30',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_duct-cleaning:node/28',
  );
  // Exported menu link: main-menu_duct-cleaning:node/28
  $menu_links['main-menu_duct-cleaning:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Duct Cleaning',
    'options' => array(
      'identifier' => 'main-menu_duct-cleaning:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_emergency-service:node/21
  $menu_links['main-menu_emergency-service:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Emergency Service',
    'options' => array(
      'identifier' => 'main-menu_emergency-service:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_heating:node/19',
  );
  // Exported menu link: main-menu_emergency-service:node/25
  $menu_links['main-menu_emergency-service:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Emergency Service',
    'options' => array(
      'identifier' => 'main-menu_emergency-service:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_air-conditioning:node/23',
  );
  // Exported menu link: main-menu_heating:node/19
  $menu_links['main-menu_heating:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Heating',
    'options' => array(
      'identifier' => 'main-menu_heating:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home-performance:node/27
  $menu_links['main-menu_home-performance:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Home Performance',
    'options' => array(
      'identifier' => 'main-menu_home-performance:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:node/1
  $menu_links['main-menu_home:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:node/1',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_indoor-air-quality:node/29
  $menu_links['main-menu_indoor-air-quality:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Indoor Air Quality',
    'options' => array(
      'identifier' => 'main-menu_indoor-air-quality:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_duct-cleaning:node/28',
  );
  // Exported menu link: main-menu_installation:node/20
  $menu_links['main-menu_installation:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Installation',
    'options' => array(
      'identifier' => 'main-menu_installation:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_heating:node/19',
  );
  // Exported menu link: main-menu_installation:node/24
  $menu_links['main-menu_installation:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Installation',
    'options' => array(
      'identifier' => 'main-menu_installation:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_air-conditioning:node/23',
  );
  // Exported menu link: main-menu_preventive-maintenance:node/22
  $menu_links['main-menu_preventive-maintenance:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Preventive Maintenance',
    'options' => array(
      'identifier' => 'main-menu_preventive-maintenance:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_heating:node/19',
  );
  // Exported menu link: main-menu_preventive-maintenance:node/26
  $menu_links['main-menu_preventive-maintenance:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Preventive Maintenance',
    'options' => array(
      'identifier' => 'main-menu_preventive-maintenance:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_air-conditioning:node/23',
  );
  // Exported menu link: menu-auxiliary-menu_a-generous-donation:node/41
  $menu_links['menu-auxiliary-menu_a-generous-donation:node/41'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'A Generous Donation',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_a-generous-donation:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_about:node/2
  $menu_links['menu-auxiliary-menu_about:node/2'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_about:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-auxiliary-menu_above-and-beyond:node/45
  $menu_links['menu-auxiliary-menu_above-and-beyond:node/45'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Above and Beyond',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_above-and-beyond:node/45',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_an-immediate-difference:node/51
  $menu_links['menu-auxiliary-menu_an-immediate-difference:node/51'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'An Immediate Difference',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_an-immediate-difference:node/51',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_an-impressed-and-no-longer-freezing-customer:node/43
  $menu_links['menu-auxiliary-menu_an-impressed-and-no-longer-freezing-customer:node/43'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'An impressed, and no longer freezing customer',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_an-impressed-and-no-longer-freezing-customer:node/43',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_blog:node/5
  $menu_links['menu-auxiliary-menu_blog:node/5'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_blog:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_resources:node/9',
  );
  // Exported menu link: menu-auxiliary-menu_building-performance-institute-bpi:node/12
  $menu_links['menu-auxiliary-menu_building-performance-institute-bpi:node/12'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Building Performance Institute (BPI)',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_building-performance-institute-bpi:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_certifications--memberships:node/34',
  );
  // Exported menu link: menu-auxiliary-menu_case-studies:node/7
  $menu_links['menu-auxiliary-menu_case-studies:node/7'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Case Studies',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_case-studies:node/7',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-auxiliary-menu_certifications--memberships:node/34
  $menu_links['menu-auxiliary-menu_certifications--memberships:node/34'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Certifications & Memberships',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_certifications--memberships:node/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_about:node/2',
  );
  // Exported menu link: menu-auxiliary-menu_contact:node/8
  $menu_links['menu-auxiliary-menu_contact:node/8'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_contact:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-auxiliary-menu_coupons--promotions:node/35
  $menu_links['menu-auxiliary-menu_coupons--promotions:node/35'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Coupons & Promotions',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_coupons--promotions:node/35',
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
  // Exported menu link: menu-auxiliary-menu_excellence-from-start-to-finish:node/46
  $menu_links['menu-auxiliary-menu_excellence-from-start-to-finish:node/46'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'Excellence from start to finish',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_excellence-from-start-to-finish:node/46',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
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
  // Exported menu link: menu-auxiliary-menu_free-service-call-when-a-repair-is-made:node/55
  $menu_links['menu-auxiliary-menu_free-service-call-when-a-repair-is-made:node/55'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Free Service Call When a Repair is Made',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_free-service-call-when-a-repair-is-made:node/55',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_coupons--promotions:node/35',
  );
  // Exported menu link: menu-auxiliary-menu_grateful-customers-share-their-unexpected-experience:node/39
  $menu_links['menu-auxiliary-menu_grateful-customers-share-their-unexpected-experience:node/39'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Grateful customers share their unexpected experience',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_grateful-customers-share-their-unexpected-experience:node/39',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_home-performance-with-energy-star:node/14
  $menu_links['menu-auxiliary-menu_home-performance-with-energy-star:node/14'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Home Performance with ENERGY STAR',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_home-performance-with-energy-star:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_certifications--memberships:node/34',
  );
  // Exported menu link: menu-auxiliary-menu_honeywell:node/33
  $menu_links['menu-auxiliary-menu_honeywell:node/33'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Honeywell',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_honeywell:node/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_product-center:node/36',
  );
  // Exported menu link: menu-auxiliary-menu_impressed-from-the-get-go:node/42
  $menu_links['menu-auxiliary-menu_impressed-from-the-get-go:node/42'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Impressed From the Get-Go',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_impressed-from-the-get-go:node/42',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_join-our-team:node/18
  $menu_links['menu-auxiliary-menu_join-our-team:node/18'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Join Our Team',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_join-our-team:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_contact:node/8',
  );
  // Exported menu link: menu-auxiliary-menu_leave-a-review:node/17
  $menu_links['menu-auxiliary-menu_leave-a-review:node/17'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Leave a Review',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_leave-a-review:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_lennox:node/31
  $menu_links['menu-auxiliary-menu_lennox:node/31'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Lennox',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_lennox:node/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_product-center:node/36',
  );
  // Exported menu link: menu-auxiliary-menu_mitsubishi:node/32
  $menu_links['menu-auxiliary-menu_mitsubishi:node/32'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Mitsubishi',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_mitsubishi:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_product-center:node/36',
  );
  // Exported menu link: menu-auxiliary-menu_new-jersey-rebate-program:node/54
  $menu_links['menu-auxiliary-menu_new-jersey-rebate-program:node/54'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'New Jersey Rebate Program',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_new-jersey-rebate-program:node/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_coupons--promotions:node/35',
  );
  // Exported menu link: menu-auxiliary-menu_nj-clean-energy-program:node/11
  $menu_links['menu-auxiliary-menu_nj-clean-energy-program:node/11'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'NJ Clean Energy Program',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_nj-clean-energy-program:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_certifications--memberships:node/34',
  );
  // Exported menu link: menu-auxiliary-menu_north-american-technician-excellence-nate:node/13
  $menu_links['menu-auxiliary-menu_north-american-technician-excellence-nate:node/13'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'North American Technician Excellence (NATE)',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_north-american-technician-excellence-nate:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_certifications--memberships:node/34',
  );
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
  // Exported menu link: menu-auxiliary-menu_professional-and-helpful-to-the-highest-degree:node/48
  $menu_links['menu-auxiliary-menu_professional-and-helpful-to-the-highest-degree:node/48'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Professional and Helpful to the Highest Degree',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_professional-and-helpful-to-the-highest-degree:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_professional-efficient-courteous:node/38
  $menu_links['menu-auxiliary-menu_professional-efficient-courteous:node/38'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => '“Professional, efficient, courteous”',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_professional-efficient-courteous:node/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_rebates:node/15
  $menu_links['menu-auxiliary-menu_rebates:node/15'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Rebates',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_rebates:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_resources:node/9',
  );
  // Exported menu link: menu-auxiliary-menu_resources:node/9
  $menu_links['menu-auxiliary-menu_resources:node/9'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_resources:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-auxiliary-menu_rostron-stands-by-their-work:node/40
  $menu_links['menu-auxiliary-menu_rostron-stands-by-their-work:node/40'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Rostron stands by their work',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_rostron-stands-by-their-work:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_save-20-on-any-repair:node/16
  $menu_links['menu-auxiliary-menu_save-20-on-any-repair:node/16'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Save $20 on Any Repair',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_save-20-on-any-repair:node/16',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_coupons--promotions:node/35',
  );
  // Exported menu link: menu-auxiliary-menu_selfless-actions:node/49
  $menu_links['menu-auxiliary-menu_selfless-actions:node/49'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => '“Selfless Actions”',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_selfless-actions:node/49',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_service-area:node/4
  $menu_links['menu-auxiliary-menu_service-area:node/4'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Service Area',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_service-area:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_about:node/2',
  );
  // Exported menu link: menu-auxiliary-menu_terrific-service:node/52
  $menu_links['menu-auxiliary-menu_terrific-service:node/52'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/52',
    'router_path' => 'node/%',
    'link_title' => '"Terrific Service"',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_terrific-service:node/52',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_testimonials:node/3
  $menu_links['menu-auxiliary-menu_testimonials:node/3'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Testimonials',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_testimonials:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-auxiliary-menu_they-represent-a-great-team:node/44
  $menu_links['menu-auxiliary-menu_they-represent-a-great-team:node/44'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => '“They represent a great team”',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_they-represent-a-great-team:node/44',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-auxiliary-menu_tom-rostron-giving-back:node/10
  $menu_links['menu-auxiliary-menu_tom-rostron-giving-back:node/10'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Tom Rostron Giving Back',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_tom-rostron-giving-back:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-auxiliary-menu_about:node/2',
  );
  // Exported menu link: menu-auxiliary-menu_when-your-furnace-fails-before-the-storm:node/50
  $menu_links['menu-auxiliary-menu_when-your-furnace-fails-before-the-storm:node/50'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'When your furnace fails before the storm..',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_when-your-furnace-fails-before-the-storm:node/50',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'parent_identifier' => 'menu-auxiliary-menu_testimonials:node/3',
  );
  // Exported menu link: menu-footer-menu_about-us:node/2
  $menu_links['menu-footer-menu_about-us:node/2'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib-discontinue/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_about-us:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact:node/8
  $menu_links['menu-footer-menu_contact:node/8'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib-discontinue/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_contact:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_leave-a-review:node/17
  $menu_links['menu-footer-menu_leave-a-review:node/17'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Leave a Review',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib-discontinue/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_leave-a-review:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_testimonials:node/3',
  );
  // Exported menu link: menu-footer-menu_resources:node/9
  $menu_links['menu-footer-menu_resources:node/9'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib-discontinue/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_resources:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_testimonials:node/3
  $menu_links['menu-footer-menu_testimonials:node/3'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Testimonials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib-discontinue/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_testimonials:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('"Terrific Service"');
  t('A Generous Donation');
  t('About');
  t('About Us');
  t('Above and Beyond');
  t('Air Conditioning');
  t('An Immediate Difference');
  t('An impressed, and no longer freezing customer');
  t('Blog');
  t('Building Performance Institute (BPI)');
  t('Case Studies');
  t('Certifications & Memberships');
  t('Contact');
  t('Coupons & Promotions');
  t('Dryer Vent Cleaning');
  t('Duct Cleaning');
  t('Emergency Service');
  t('Excellence from start to finish');
  t('FAQ');
  t('Free Service Call When a Repair is Made');
  t('Grateful customers share their unexpected experience');
  t('Heating');
  t('Home');
  t('Home Performance');
  t('Home Performance with ENERGY STAR');
  t('Honeywell');
  t('Impressed From the Get-Go');
  t('Indoor Air Quality');
  t('Installation');
  t('Join Our Team');
  t('Leave a Review');
  t('Lennox');
  t('Mitsubishi');
  t('NJ Clean Energy Program');
  t('New Jersey Rebate Program');
  t('North American Technician Excellence (NATE)');
  t('Preventive Maintenance');
  t('Product Center');
  t('Professional and Helpful to the Highest Degree');
  t('Rebates');
  t('Resources');
  t('Rostron stands by their work');
  t('Save $20 on Any Repair');
  t('Service Area');
  t('Testimonials');
  t('Tom Rostron Giving Back');
  t('When your furnace fails before the storm..');
  t('“Professional, efficient, courteous”');
  t('“Selfless Actions”');
  t('“They represent a great team”');


  return $menu_links;
}
