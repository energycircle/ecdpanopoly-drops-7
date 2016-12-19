<?php
/**
 * @file
 * ec_handbook.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_handbook_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:handbook:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'handbook';
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
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3a469d4f-ec90-4bb8-a473-fe40216e0f95';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c3dcf162-686d-496f-8c4c-8019a38209c9';
  $pane->panel = 'one_main';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c3dcf162-686d-496f-8c4c-8019a38209c9';
  $display->content['new-c3dcf162-686d-496f-8c4c-8019a38209c9'] = $pane;
  $display->panels['one_main'][0] = 'new-c3dcf162-686d-496f-8c4c-8019a38209c9';
  $pane = new stdClass();
  $pane->pid = 'new-49d68794-1da6-4adc-bcc8-1b45a5cbe99f';
  $pane->panel = 'one_main';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '49d68794-1da6-4adc-bcc8-1b45a5cbe99f';
  $display->content['new-49d68794-1da6-4adc-bcc8-1b45a5cbe99f'] = $pane;
  $display->panels['one_main'][1] = 'new-49d68794-1da6-4adc-bcc8-1b45a5cbe99f';
  $pane = new stdClass();
  $pane->pid = 'new-32cc4a35-38af-42fc-a1c6-cfe38af887a5';
  $pane->panel = 'one_main';
  $pane->type = 'node_book_nav';
  $pane->subtype = 'node_book_nav';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'panelizer',
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
  $pane->uuid = '32cc4a35-38af-42fc-a1c6-cfe38af887a5';
  $display->content['new-32cc4a35-38af-42fc-a1c6-cfe38af887a5'] = $pane;
  $display->panels['one_main'][2] = 'new-32cc4a35-38af-42fc-a1c6-cfe38af887a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c3dcf162-686d-496f-8c4c-8019a38209c9';
  $panelizer->display = $display;
  $export['node:handbook:default:default'] = $panelizer;

  return $export;
}
