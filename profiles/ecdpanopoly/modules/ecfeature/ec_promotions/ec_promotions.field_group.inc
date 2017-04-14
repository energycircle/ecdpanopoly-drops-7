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
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '19',
    'children' => array(
      0 => 'field_button_text',
      1 => 'field_call_to_action',
      2 => 'field_ref_to_cta_form',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cta_form|node|promotion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|promotion|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_cta_form',
      1 => 'group_general',
      2 => 'group_promotion',
      3 => 'group_show_this_on',
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
  $field_groups['group_edit_content|node|promotion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|promotion|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '17',
    'children' => array(
      0 => 'body',
      1 => 'field_display_subtitle',
      2 => 'field_display_title',
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
  $field_groups['group_general|node|promotion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promotion|node|promotion|form';
  $field_group->group_name = 'group_promotion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Promotion',
    'weight' => '18',
    'children' => array(
      0 => 'field_display_startend',
      1 => 'field_promotion_image',
      2 => 'field_promotion_link_text',
      3 => 'field_promotion_price',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-promotion field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_promotion|node|promotion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|promotion|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add this content to these pages',
    'weight' => '20',
    'children' => array(
      0 => 'field_ref_promo_serv_cat',
      1 => 'field_ref_promo_serv_group',
      2 => 'field_ref_promo_service',
      3 => 'field_ref_promo_case_study',
      4 => 'field_ref_promo_article',
      5 => 'field_ref_promotion_product',
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
  $field_groups['group_show_this_on|node|promotion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add this content to these pages');
  t('CTA Form');
  t('Edit Content');
  t('General');
  t('Promotion');

  return $field_groups;
}
