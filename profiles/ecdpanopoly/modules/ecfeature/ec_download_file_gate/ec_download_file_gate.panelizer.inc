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
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'File from Content (on Content: Restricted Download File [field_restricted_download_file])',
      'keyword' => 'file',
      'name' => 'entity_from_field:field_restricted_download_file-node-file',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
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
      'center' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1d86534f-764a-47c9-a881-932dff46f033';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-36cc5a4b-8d95-4892-8bcb-2c4ded4ad973';
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
  $display->panels['two_66_33_first'][0] = 'new-36cc5a4b-8d95-4892-8bcb-2c4ded4ad973';
  $pane = new stdClass();
  $pane->pid = 'new-8f092665-d57c-4fb6-adf7-f832127666ec';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'restrict_thumbnail-panel_pane_1';
  $pane->shown = FALSE;
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
  $display->panels['two_66_33_first'][1] = 'new-8f092665-d57c-4fb6-adf7-f832127666ec';
  $pane = new stdClass();
  $pane->pid = 'new-d98552da-331e-4ebc-bc2e-bdc689771540';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_restricted_download_file';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_download_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'text' => 'Enter your email address to receive your copy',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'entity_field',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd98552da-331e-4ebc-bc2e-bdc689771540';
  $display->content['new-d98552da-331e-4ebc-bc2e-bdc689771540'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-d98552da-331e-4ebc-bc2e-bdc689771540';
  $pane = new stdClass();
  $pane->pid = 'new-6e7cd8af-f5e2-4933-91a6-9fec412bf672';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_button_text';
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
  $pane->uuid = '6e7cd8af-f5e2-4933-91a6-9fec412bf672';
  $display->content['new-6e7cd8af-f5e2-4933-91a6-9fec412bf672'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-6e7cd8af-f5e2-4933-91a6-9fec412bf672';
  $pane = new stdClass();
  $pane->pid = 'new-2b200ed2-c2b0-47e7-9979-e63111e4b658';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Request this Download',
    'title' => 'Request this Download',
    'body' => '<p>Enter your contact information to request the free download. You will receive an email with a link to download the file.</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2b200ed2-c2b0-47e7-9979-e63111e4b658';
  $display->content['new-2b200ed2-c2b0-47e7-9979-e63111e4b658'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-2b200ed2-c2b0-47e7-9979-e63111e4b658';
  $pane = new stdClass();
  $pane->pid = 'new-369c7906-c30a-4ab6-9cd3-51cd87a6aafb';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'block';
  $pane->subtype = 'afb-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '369c7906-c30a-4ab6-9cd3-51cd87a6aafb';
  $display->content['new-369c7906-c30a-4ab6-9cd3-51cd87a6aafb'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-369c7906-c30a-4ab6-9cd3-51cd87a6aafb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:gated_file_page:default:default'] = $panelizer;

  return $export;
}
