<?php
/**
 * @file
 * ec_service_stack.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_service_stack_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__shown_on_this_page|node|service_category|form';
  $field_group->group_name = 'group__shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' Shown on This Page',
    'weight' => '8',
    'children' => array(
      0 => 'field_ref_serv_cat_blog',
      1 => 'field_ref_serv_cat_case_study',
      2 => 'field_ref_serv_cat_prodpage',
      3 => 'field_ref_serv_cat_promo',
      4 => 'field_ref_serv_cat_testimonial',
      5 => 'field_ref_serv_cat_faq',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => ' Shown on This Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group__shown_on_this_page|node|service_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__shown_on_this_page|node|service|form';
  $field_group->group_name = 'group__shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' Shown on This Page',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_service_blog',
      1 => 'field_ref_service_case_study',
      2 => 'field_ref_service_product',
      3 => 'field_ref_service_promo',
      4 => 'field_ref_service_testimonial',
      5 => 'field_ref_service_faq',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => ' Shown on This Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group__shown_on_this_page|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|service_category|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '7',
    'children' => array(
      0 => 'field_button_text',
      1 => 'field_call_to_action',
      2 => 'field_ref_to_cta_form',
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
  $export['group_cta_form|node|service_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|service_group|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '4',
    'children' => array(
      0 => 'field_button_text',
      1 => 'field_call_to_action',
      2 => 'field_ref_to_cta_form',
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
  $export['group_cta_form|node|service_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|service|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '6',
    'children' => array(
      0 => 'field_button_text',
      1 => 'field_call_to_action',
      2 => 'field_ref_to_cta_form',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'CTA Form',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_cta_form|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|service_group|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shown on This Page',
    'weight' => '5',
    'children' => array(
      0 => 'field_ref_serv_group_blog',
      1 => 'field_ref_serv_group_case_study',
      2 => 'field_ref_serv_group_prodpage',
      3 => 'field_ref_serv_group_promo',
      4 => 'field_ref_serv_group_testimonial',
      5 => 'field_ref_serv_group_faq',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Shown on This Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_shown_on_this_page|node|service_group|form'] = $field_group;

  return $export;
}
