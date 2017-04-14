<?php
/**
 * @file
 * ec_product_page_category.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_product_page_category_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|product_category|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '15',
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
        'classes' => 'group-cta-form field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cta_form|node|product_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|product_category|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_cta_form',
      1 => 'group_general',
      2 => 'group_shown_on_this_page',
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
  $field_groups['group_edit_content|node|product_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|product_category|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '14',
    'children' => array(
      0 => 'field_ref_prodcat_product',
      1 => 'body',
      2 => 'field_display_subtitle',
      3 => 'field_display_title',
      4 => 'field_product_category_image',
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
  $field_groups['group_general|node|product_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|product_category|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add other content to this page',
    'weight' => '16',
    'children' => array(
      0 => 'field_ref_prodcat_case_study',
      1 => 'field_ref_prodcat_faq',
      2 => 'field_ref_prodcat_testimonial',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Add other content to this page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shown-on-this-page field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shown_on_this_page|node|product_category|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add other content to this page');
  t('CTA Form');
  t('Edit Content');
  t('General');

  return $field_groups;
}
