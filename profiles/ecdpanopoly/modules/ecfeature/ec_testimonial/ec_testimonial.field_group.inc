<?php
/**
 * @file
 * ec_testimonial.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_testimonial_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|testimonial|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '8',
    'children' => array(
      0 => 'field_ref_testimonial_serv_group',
      1 => 'field_ref_testimonial_serv_cat',
      2 => 'field_ref_testimonial_service',
      3 => 'field_ref_testimonial_article',
      4 => 'field_ref_testimonial_case_study',
      5 => 'field_ref_testimonial_prodpage',
      6 => 'field_ref_testimonial_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-this-on field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_show_this_on|node|testimonial|form'] = $field_group;

  return $export;
}
