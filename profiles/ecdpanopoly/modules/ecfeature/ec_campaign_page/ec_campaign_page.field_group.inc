<?php
/**
 * @file
 * ec_campaign_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_campaign_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|campaign_page|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '14',
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
  $field_groups['group_cta_form|node|campaign_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|campaign_page|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_general',
      1 => 'group_cta_form',
      2 => 'group_page_design',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_edit_content|node|campaign_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|campaign_page|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'field_display_subtitle',
      2 => 'field_display_title',
      3 => 'field_featured_image',
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
  $field_groups['group_general|node|campaign_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_design|node|campaign_page|form';
  $field_group->group_name = 'group_page_design';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Page Design',
    'weight' => '15',
    'children' => array(
      0 => 'field_panel_hide_footer',
      1 => 'field_panel_hide_header',
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
  $field_groups['group_page_design|node|campaign_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTA Form');
  t('Edit Content');
  t('General');
  t('Page Design');

  return $field_groups;
}
