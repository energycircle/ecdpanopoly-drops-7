<?php
/**
 * @file
 * ec_product_page_lite.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_product_page_lite_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|product_page|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_page';
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
  $field_groups['group_cta_form|node|product_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|product_page|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_cta_form',
      1 => 'group_show_this_on',
      2 => 'group_shown_on_this_page',
      3 => 'group_general',
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
  $field_groups['group_edit_content|node|product_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|product_page|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '18',
    'children' => array(
      0 => 'body',
      1 => 'field_display_subtitle',
      2 => 'field_display_title',
      3 => 'field_product_diagram',
      4 => 'field_product_image',
      5 => 'field_product_technical_docs',
      6 => 'field_technical_data_table',
      7 => 'field_ref_product_prodcat',
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
  $field_groups['group_general|node|product_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|product_page|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add this content to these pages',
    'weight' => '20',
    'children' => array(
      0 => 'field_ref_prodpage_case_study',
      1 => 'field_ref_prodpage_serv_cat',
      2 => 'field_ref_prodpage_serv_group',
      3 => 'field_ref_prodpage_service',
      4 => 'field_ref_prodpage_article',
    ),
    'format_type' => 'tab',
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
  $field_groups['group_show_this_on|node|product_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|product_page|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add other content to this page',
    'weight' => '21',
    'children' => array(
      0 => 'field_ref_prodpage_testimonial',
      1 => 'field_ref_prodpage_faq',
      2 => 'field_ref_prodpage_promotion',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Add other content to this page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shown_on_this_page|node|product_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add other content to this page');
  t('Add this content to these pages');
  t('CTA Form');
  t('Edit Content');
  t('General');

  return $field_groups;
}
