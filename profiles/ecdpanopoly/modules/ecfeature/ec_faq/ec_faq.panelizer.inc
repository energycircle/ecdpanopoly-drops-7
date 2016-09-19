<?php
/**
 * @file
 * ec_faq.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_faq_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'faq';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:faq:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'dbc690d0-c6be-427a-be5b-1edba00b007d';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:faq:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-46d877ad-93e0-4815-ad2d-508137fb9df3';
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
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46d877ad-93e0-4815-ad2d-508137fb9df3';
  $display->content['new-46d877ad-93e0-4815-ad2d-508137fb9df3'] = $pane;
  $display->panels['center'][0] = 'new-46d877ad-93e0-4815-ad2d-508137fb9df3';
  $pane = new stdClass();
  $pane->pid = 'new-3369f28e-0efd-4c42-af69-cc9f90c84660';
  $pane->panel = 'center';
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
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3369f28e-0efd-4c42-af69-cc9f90c84660';
  $display->content['new-3369f28e-0efd-4c42-af69-cc9f90c84660'] = $pane;
  $display->panels['center'][1] = 'new-3369f28e-0efd-4c42-af69-cc9f90c84660';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3369f28e-0efd-4c42-af69-cc9f90c84660';
  $panelizer->display = $display;
  $export['node:faq:default:default'] = $panelizer;

  return $export;
}
