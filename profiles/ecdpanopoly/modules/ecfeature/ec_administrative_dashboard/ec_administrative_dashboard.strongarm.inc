<?php
/**
 * @file
 * ec_administrative_dashboard.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_administrative_dashboard_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_auto_pages';
  $strongarm->value = array(
    'type' => 'type',
  );
  $export['total_control_auto_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_auto_panels';
  $strongarm->value = array(
    'type' => 'type',
  );
  $export['total_control_auto_panels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_login_redirect';
  $strongarm->value = 1;
  $export['total_control_login_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_role_pages';
  $strongarm->value = array(
    2 => '2',
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $export['total_control_role_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_role_panels';
  $strongarm->value = array(
    2 => '2',
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $export['total_control_role_panels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_type_pages';
  $strongarm->value = array(
    'campaign_page' => 'campaign_page',
    0 => 0,
    'article' => 0,
    'blog_post' => 0,
    'case_study' => 0,
    'distinction' => 0,
    'distributor' => 0,
    'faq' => 0,
    'gallery' => 0,
    'product_category' => 0,
    'product_page' => 0,
    'promotion' => 0,
    'service' => 0,
    'service_category' => 0,
    'service_group' => 0,
    'slide' => 0,
    'staff' => 0,
    'testimonial' => 0,
    'panopoly_page' => 0,
  );
  $export['total_control_type_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_type_panels';
  $strongarm->value = array(
    'campaign_page' => 'campaign_page',
    0 => 0,
    'article' => 0,
    'blog_post' => 0,
    'case_study' => 0,
    'distinction' => 0,
    'distributor' => 0,
    'faq' => 0,
    'gallery' => 0,
    'product_category' => 0,
    'product_page' => 0,
    'promotion' => 0,
    'service' => 0,
    'service_category' => 0,
    'service_group' => 0,
    'slide' => 0,
    'staff' => 0,
    'testimonial' => 0,
    'panopoly_page' => 0,
  );
  $export['total_control_type_panels'] = $strongarm;

  return $export;
}
