<?php
/**
 * @file
 * ec_help_documentation.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_help_documentation_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:help_documentation:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'help_documentation';
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
  $display->uuid = 'e18baaf5-891b-42fa-88c2-2caeb5f95538';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4509eea5-d431-4430-88dd-911dc09d3fa6';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4509eea5-d431-4430-88dd-911dc09d3fa6';
  $display->content['new-4509eea5-d431-4430-88dd-911dc09d3fa6'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-4509eea5-d431-4430-88dd-911dc09d3fa6';
  $pane = new stdClass();
  $pane->pid = 'new-f2902b55-bb8d-470d-a208-139044dfd5e5';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_help_documentation_type';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f2902b55-bb8d-470d-a208-139044dfd5e5';
  $display->content['new-f2902b55-bb8d-470d-a208-139044dfd5e5'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-f2902b55-bb8d-470d-a208-139044dfd5e5';
  $pane = new stdClass();
  $pane->pid = 'new-c1157ed2-6521-43d3-84ed-f19f25a2f731';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'ec_help_documentation-panel_pane_1';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c1157ed2-6521-43d3-84ed-f19f25a2f731';
  $display->content['new-c1157ed2-6521-43d3-84ed-f19f25a2f731'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-c1157ed2-6521-43d3-84ed-f19f25a2f731';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:help_documentation:default:default'] = $panelizer;

  return $export;
}
