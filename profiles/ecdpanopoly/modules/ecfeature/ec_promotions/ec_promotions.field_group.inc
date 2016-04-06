<?php
/**
 * @file
 * ec_promotions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_promotions_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|promotion|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion';
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
      'label' => 'CTA Form',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_cta_form|node|promotion|form'] = $field_group;

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
      0 => 'field_ref_promo_article',
      1 => 'field_ref_promo_case_study',
      2 => 'field_ref_promo_page',
      3 => 'field_ref_promo_serv_cat',
      4 => 'field_ref_promo_serv_group',
      5 => 'field_ref_promo_service',
      6 => 'field_ref_promotion_product',
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
  $field_groups['group_show_this_on|node|promotion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTA Form');
  t('Show This On');

  return $field_groups;
}
