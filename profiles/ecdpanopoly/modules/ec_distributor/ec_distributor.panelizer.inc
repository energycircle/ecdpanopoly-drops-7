<?php
/**
 * @file
 * ec_distributor.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_distributor_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:distributor:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'distributor';
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
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3d97b04b-3adc-428e-b866-b0c30f1fc93e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-44475066-068f-44fe-bd30-dd6bfda79eed';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_external_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
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
  $pane->uuid = '44475066-068f-44fe-bd30-dd6bfda79eed';
  $display->content['new-44475066-068f-44fe-bd30-dd6bfda79eed'] = $pane;
  $display->panels['center'][0] = 'new-44475066-068f-44fe-bd30-dd6bfda79eed';
  $pane = new stdClass();
  $pane->pid = 'new-a4da68ff-15fd-4e33-b767-8529cf44b3ae';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'addressfield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        0 => 'address',
      ),
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
  $pane->uuid = 'a4da68ff-15fd-4e33-b767-8529cf44b3ae';
  $display->content['new-a4da68ff-15fd-4e33-b767-8529cf44b3ae'] = $pane;
  $display->panels['center'][1] = 'new-a4da68ff-15fd-4e33-b767-8529cf44b3ae';
  $pane = new stdClass();
  $pane->pid = 'new-2a947565-f933-439e-8e41-48c56bc3b543';
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
  $pane->uuid = '2a947565-f933-439e-8e41-48c56bc3b543';
  $display->content['new-2a947565-f933-439e-8e41-48c56bc3b543'] = $pane;
  $display->panels['center'][2] = 'new-2a947565-f933-439e-8e41-48c56bc3b543';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2a947565-f933-439e-8e41-48c56bc3b543';
  $panelizer->display = $display;
  $export['node:distributor:default:default'] = $panelizer;

  return $export;
}
