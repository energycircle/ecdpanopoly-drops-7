<?php
/**
 * @file
 * ec_citypages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_citypages_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_city_page_tabs|node|city_page|form';
  $field_group->group_name = 'group_city_page_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'City Page Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_citypages_description',
      1 => 'group_citypages_general',
      2 => 'group_citypages_shown_this_page',
      3 => 'group_cta_form',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-city-page-tabs field-group-htabs',
      ),
    ),
  );
  $field_groups['group_city_page_tabs|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_description|node|city_page|form';
  $field_group->group_name = 'group_citypages_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'Description Builder',
    'weight' => '3',
    'children' => array(
      0 => 'field_citypages_example',
      1 => 'field_citypages_local_experience',
      2 => 'field_citypages_other_descriptio',
      3 => 'field_citypages_placenames',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Description Builder',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_citypages_description|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_general|node|city_page|form';
  $field_group->group_name = 'group_citypages_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '2',
    'children' => array(
      0 => 'field_citypages_area',
      1 => 'field_citypages_image',
      2 => 'field_citypagesshort_description',
      3 => 'field_featured_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-citypages-general field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_citypages_general|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_shown_this_page|node|city_page|form';
  $field_group->group_name = 'group_citypages_shown_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'Add other content to this page',
    'weight' => '5',
    'children' => array(
      0 => 'field_ref_citypages_blog',
      1 => 'field_ref_citypages_case_study',
      2 => 'field_ref_citypages_services',
      3 => 'field_ref_citypages_testimonials',
    ),
    'format_type' => 'htab',
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
  $field_groups['group_citypages_shown_this_page|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|city_page|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
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
      'label' => 'CTA Form',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cta-form field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_cta_form|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unused_fields|node|city_page|form';
  $field_group->group_name = 'group_unused_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '5',
    'children' => array(
      0 => 'field_a_b_reason_for_testing',
      1 => 'field_a_b_reference_page',
      2 => 'field_a_b_test_page',
      3 => 'metatags',
      4 => 'path',
      5 => 'redirect',
      6 => 'xmlsitemap',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Unused Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'element-hidden',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_unused_fields|node|city_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add other content to this page');
  t('CTA Form');
  t('City Page Tabs');
  t('Description Builder');
  t('General');
  t('Unused Fields');

  return $field_groups;
}
