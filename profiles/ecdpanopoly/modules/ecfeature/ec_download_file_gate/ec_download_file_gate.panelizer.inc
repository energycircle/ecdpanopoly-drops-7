<?php
/**
 * @file
 * ec_download_file_gate.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_download_file_gate_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:gated_file_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'gated_file_page';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1d86534f-764a-47c9-a881-932dff46f033';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-36cc5a4b-8d95-4892-8bcb-2c4ded4ad973';
  $pane->panel = 'center';
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
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
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
  $pane->uuid = '36cc5a4b-8d95-4892-8bcb-2c4ded4ad973';
  $display->content['new-36cc5a4b-8d95-4892-8bcb-2c4ded4ad973'] = $pane;
  $display->panels['center'][0] = 'new-36cc5a4b-8d95-4892-8bcb-2c4ded4ad973';
  $pane = new stdClass();
  $pane->pid = 'new-8f092665-d57c-4fb6-adf7-f832127666ec';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'restrict_thumbnail-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8f092665-d57c-4fb6-adf7-f832127666ec';
  $display->content['new-8f092665-d57c-4fb6-adf7-f832127666ec'] = $pane;
  $display->panels['center'][1] = 'new-8f092665-d57c-4fb6-adf7-f832127666ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:gated_file_page:default:default'] = $panelizer;

  return $export;
}
