<?php
/**
 * @file
 * ec_product_page_category.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_product_page_category_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|product_category|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '6',
    'children' => array(
      0 => 'field_call_to_action',
      1 => 'field_ref_to_cta_form',
      2 => 'field_button_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cta-form field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cta_form|node|product_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|product_category|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shown on This Page',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_prodcat_testimonial',
      1 => 'field_ref_prodcat_case_study',
      2 => 'field_ref_prodcat_faq',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-shown-on-this-page field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_shown_on_this_page|node|product_category|form'] = $field_group;

  return $export;
}
