<?php
/**
 * @file
 * ec_a_b_testing_setup.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_a_b_testing_setup_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_menu_links';
  $strongarm->value = '1';
  $export['clone_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_method';
  $strongarm->value = 'prepopulate';
  $export['clone_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_nodes_without_confirm';
  $strongarm->value = '0';
  $export['clone_nodes_without_confirm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_omitted';
  $strongarm->value = array(
    'article' => 'article',
    'award' => 'award',
    'blog_post' => 'blog_post',
    'distinction' => 'distinction',
    'distributor' => 'distributor',
    'external_video' => 'external_video',
    'faq' => 'faq',
    'financing_option' => 'financing_option',
    'gallery' => 'gallery',
    'help_documentation' => 'help_documentation',
    'product_category' => 'product_category',
    'product_page' => 'product_page',
    'service_group' => 'service_group',
    'slide' => 'slide',
    'staff' => 'staff',
    'testimonial' => 'testimonial',
    'campaign_page' => 0,
    'case_study' => 0,
    'panopoly_page' => 0,
    'panopoly_landing_page' => 0,
    'promotion' => 0,
    'service' => 0,
    'service_category' => 0,
  );
  $export['clone_omitted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_use_node_type_name';
  $strongarm->value = 1;
  $export['clone_use_node_type_name'] = $strongarm;

  return $export;
}
