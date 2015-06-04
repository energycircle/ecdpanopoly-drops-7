<?php
/**
 * @file
 * ec_staff.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_staff_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:staff:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'staff';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cea66336-7c23-45c2-821c-4647f2328d6b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ef238d3f-c04b-459e-a465-3a91c52c1bd5';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ef238d3f-c04b-459e-a465-3a91c52c1bd5';
  $display->content['new-ef238d3f-c04b-459e-a465-3a91c52c1bd5'] = $pane;
  $display->panels['two_66_33_bottom'][0] = 'new-ef238d3f-c04b-459e-a465-3a91c52c1bd5';
  $pane = new stdClass();
  $pane->pid = 'new-96eeeceb-2263-4740-8df2-bb770c80e3cc';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_staff_photo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'sc_460x230',
      'image_link' => '',
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96eeeceb-2263-4740-8df2-bb770c80e3cc';
  $display->content['new-96eeeceb-2263-4740-8df2-bb770c80e3cc'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-96eeeceb-2263-4740-8df2-bb770c80e3cc';
  $pane = new stdClass();
  $pane->pid = 'new-8ab6ba28-6af2-4113-9813-ad1b30ec8607';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_first_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8ab6ba28-6af2-4113-9813-ad1b30ec8607';
  $display->content['new-8ab6ba28-6af2-4113-9813-ad1b30ec8607'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-8ab6ba28-6af2-4113-9813-ad1b30ec8607';
  $pane = new stdClass();
  $pane->pid = 'new-9baf5d0f-0ecd-4f2e-a67a-a9936fe4aab1';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_last_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9baf5d0f-0ecd-4f2e-a67a-a9936fe4aab1';
  $display->content['new-9baf5d0f-0ecd-4f2e-a67a-a9936fe4aab1'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-9baf5d0f-0ecd-4f2e-a67a-a9936fe4aab1';
  $pane = new stdClass();
  $pane->pid = 'new-84ca1d8c-08d9-4f43-a64c-64d5b71501bd';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_staff_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '84ca1d8c-08d9-4f43-a64c-64d5b71501bd';
  $display->content['new-84ca1d8c-08d9-4f43-a64c-64d5b71501bd'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-84ca1d8c-08d9-4f43-a64c-64d5b71501bd';
  $pane = new stdClass();
  $pane->pid = 'new-f03586a2-ac44-4571-ba99-6d84351d1f7b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_staff_department';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f03586a2-ac44-4571-ba99-6d84351d1f7b';
  $display->content['new-f03586a2-ac44-4571-ba99-6d84351d1f7b'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-f03586a2-ac44-4571-ba99-6d84351d1f7b';
  $pane = new stdClass();
  $pane->pid = 'new-3eec9c23-dedc-42bb-8755-3828cb738dfb';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '3eec9c23-dedc-42bb-8755-3828cb738dfb';
  $display->content['new-3eec9c23-dedc-42bb-8755-3828cb738dfb'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-3eec9c23-dedc-42bb-8755-3828cb738dfb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3eec9c23-dedc-42bb-8755-3828cb738dfb';
  $panelizer->display = $display;
  $export['node:staff:default:default'] = $panelizer;

  return $export;
}
