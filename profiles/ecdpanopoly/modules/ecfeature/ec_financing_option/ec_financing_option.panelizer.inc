<?php
/**
 * @file
 * ec_financing_option.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_financing_option_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:financing_option:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'financing_option';
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
  $display->uuid = '8dfe4313-4c57-40b8-ae1c-6ddda4df237e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d7d6911a-8934-4539-9142-63b8b64aaead';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
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
  $pane->uuid = 'd7d6911a-8934-4539-9142-63b8b64aaead';
  $display->content['new-d7d6911a-8934-4539-9142-63b8b64aaead'] = $pane;
  $display->panels['two_66_33_bottom'][0] = 'new-d7d6911a-8934-4539-9142-63b8b64aaead';
  $pane = new stdClass();
  $pane->pid = 'new-e60cd705-ea89-4eab-ad36-820b82fa4d3c';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_financing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 's_460',
      'image_link' => '',
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e60cd705-ea89-4eab-ad36-820b82fa4d3c';
  $display->content['new-e60cd705-ea89-4eab-ad36-820b82fa4d3c'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-e60cd705-ea89-4eab-ad36-820b82fa4d3c';
  $pane = new stdClass();
  $pane->pid = 'new-ab63e1c0-7593-422d-a483-30512702d106';
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
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ab63e1c0-7593-422d-a483-30512702d106';
  $display->content['new-ab63e1c0-7593-422d-a483-30512702d106'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-ab63e1c0-7593-422d-a483-30512702d106';
  $pane = new stdClass();
  $pane->pid = 'new-9da01ed5-9406-4a60-a0ef-a0168e4ec151';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_financing_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
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
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9da01ed5-9406-4a60-a0ef-a0168e4ec151';
  $display->content['new-9da01ed5-9406-4a60-a0ef-a0168e4ec151'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-9da01ed5-9406-4a60-a0ef-a0168e4ec151';
  $pane = new stdClass();
  $pane->pid = 'new-19dcdd26-2175-4e55-a58b-54edc2722695';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_financing_forms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'file_default',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '19dcdd26-2175-4e55-a58b-54edc2722695';
  $display->content['new-19dcdd26-2175-4e55-a58b-54edc2722695'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-19dcdd26-2175-4e55-a58b-54edc2722695';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:financing_option:default:default'] = $panelizer;

  return $export;
}
