<?php
/**
 * @file
 * ec_citypages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_citypages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_city_page_tabs|node|city_page|form';
  $field_group->group_name = 'group_city_page_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'City Page Tabs',
    'weight' => '3',
    'children' => array(
      0 => 'group_citypages_description',
      1 => 'group_citypages_shown_this_page',
      2 => 'group_citypages_general',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-city-page-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_city_page_tabs|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_description|node|city_page|form';
  $field_group->group_name = 'group_citypages_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'Description Builder',
    'weight' => '3',
    'children' => array(
      0 => 'field_citypages_example',
      1 => 'field_citypages_local_experience',
      2 => 'field_citypages_other_descriptio',
      3 => 'field_citypages_placenames',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Description Builder',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_citypages_description|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_general|node|city_page|form';
  $field_group->group_name = 'group_citypages_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '2',
    'children' => array(
      0 => 'field_featured_video',
      1 => 'field_citypages_pin',
      2 => 'field_citypagesshort_description',
      3 => 'field_citypages_image',
      4 => 'field_citypages_area',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-citypages-general field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_citypages_general|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_shown_this_page|node|city_page|form';
  $field_group->group_name = 'group_citypages_shown_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'Shown on This Page',
    'weight' => '4',
    'children' => array(
      0 => 'field_ref_citypages_blog',
      1 => 'field_ref_citypages_case_study',
      2 => 'field_ref_citypages_testimonials',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_citypages_shown_this_page|node|city_page|form'] = $field_group;

  return $export;
}
