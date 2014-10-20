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
  $field_group->identifier = 'group__shown_on_this_page|node|service_category|form';
  $field_group->group_name = 'group__shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' Shown on This Page',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_serv_cat_promo',
      1 => 'field_ref_serv_cat_testimonial',
      2 => 'field_ref_serv_cat_blog',
      3 => 'field_ref_serv_cat_prodpage',
      4 => 'field_ref_serv_cat_case_study',
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
    'weight' => '6',
    'children' => array(
      0 => 'field_ref_service_promo',
      1 => 'field_ref_service_testimonial',
      2 => 'field_ref_service_blog',
      3 => 'field_ref_service_product',
      4 => 'field_ref_service_case_study',
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
  $field_group->identifier = 'group_show_this_on|node|case_study|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '3',
    'children' => array(
      0 => 'field_ref_case_study_prodpage',
      1 => 'field_ref_case_sudy_page',
      2 => 'field_ref_case_study_article',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Show This On',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_show_this_on|node|case_study|form'] = $field_group;

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
  $field_group->identifier = 'group_show_this_on|node|promotion|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '8',
    'children' => array(
      0 => 'field_ref_promo_serv_group',
      1 => 'field_ref_promo_serv_cat',
      2 => 'field_ref_promo_service',
      3 => 'field_ref_promo_article',
      4 => 'field_ref_promo_case_study',
      5 => 'field_ref_promotion_product',
      6 => 'field_ref_promo_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Show This On',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_show_this_on|node|promotion|form'] = $field_group;

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
      0 => 'field_ref_serv_group_promo',
      1 => 'field_ref_serv_group_testimonial',
      2 => 'field_ref_serv_group_blog',
      3 => 'field_ref_serv_group_prodpage',
      4 => 'field_ref_serv_group_case_study',
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
