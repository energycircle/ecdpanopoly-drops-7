<?php
/**
 * @file
 * ec_product_page_lite.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_product_page_lite_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|product_page|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '5',
    'children' => array(
      0 => 'field_ref_prodpage_article',
      1 => 'field_ref_prodpage_case_study',
      2 => 'field_ref_prodpage_serv_group',
      3 => 'field_ref_prodpage_serv_cat',
      4 => 'field_ref_prodpage_service',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_show_this_on|node|product_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|product_page|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shown on This Page',
    'weight' => '6',
    'children' => array(
      0 => 'field_ref_prodpage_testimonial',
      1 => 'field_ref_prodpage_promotion',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_shown_on_this_page|node|product_page|form'] = $field_group;

  return $export;
}