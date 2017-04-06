<?php
/**
 * @file
 * ec_testimonial.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_testimonial_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|testimonial|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_general',
      1 => 'group_location_info',
      2 => 'group_show_this_on',
      3 => 'group_testimonial_info',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-edit-content field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_edit_content|node|testimonial|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|testimonial|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_aggregate_rating',
      2 => 'field_display_subtitle',
      3 => 'field_display_title',
      4 => 'field_tetstimonial_name',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general|node|testimonial|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_info|node|testimonial|form';
  $field_group->group_name = 'group_location_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Location Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_content_geo_data',
      1 => 'field_testimonial_city',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-info field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_info|node|testimonial|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|testimonial|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add this content to these pages',
    'weight' => '8',
    'children' => array(
      0 => 'field_ref_testimonial_article',
      1 => 'field_ref_testimonial_serv_cat',
      2 => 'field_ref_testimonial_serv_group',
      3 => 'field_ref_testimonial_service',
      4 => 'field_ref_testimonial_case_study',
      5 => 'field_ref_testimonial_citypages',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Add this content to these pages',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_show_this_on|node|testimonial|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_testimonial_info|node|testimonial|form';
  $field_group->group_name = 'group_testimonial_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Support Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_testimonial_image',
      1 => 'field_testimonial_source',
      2 => 'field_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Support Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_testimonial_info|node|testimonial|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add this content to these pages');
  t('Edit Content');
  t('General');
  t('Location Info');
  t('Support Info');

  return $field_groups;
}
