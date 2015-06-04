<?php
/**
 * @file
 * ec_campaign_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_campaign_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:campaign_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'campaign_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
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
  $display->uuid = 'fe29c557-781d-400e-950d-7d8fe95ffc81';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41947c41-f1f2-4924-922b-447671b372e2';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_title';
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
  $pane->uuid = '41947c41-f1f2-4924-922b-447671b372e2';
  $display->content['new-41947c41-f1f2-4924-922b-447671b372e2'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-41947c41-f1f2-4924-922b-447671b372e2';
  $pane = new stdClass();
  $pane->pid = 'new-f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 1,
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
  $pane->uuid = 'f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $display->content['new-f0f382fb-b5d7-4da2-a66f-157c797017ca'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $pane = new stdClass();
  $pane->pid = 'new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_subtitle';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $display->content['new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $pane = new stdClass();
  $pane->pid = 'new-e52b05fe-3747-4ef2-80e5-f78c12afb105';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $display->content['new-e52b05fe-3747-4ef2-80e5-f78c12afb105'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $pane = new stdClass();
  $pane->pid = 'new-bdcdc91b-2f4f-4de7-9673-533173c103e7';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_call_to_action';
  $pane->shown = FALSE;
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'bdcdc91b-2f4f-4de7-9673-533173c103e7';
  $display->content['new-bdcdc91b-2f4f-4de7-9673-533173c103e7'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-bdcdc91b-2f4f-4de7-9673-533173c103e7';
  $pane = new stdClass();
  $pane->pid = 'new-2c4451ff-8370-4861-a65a-4c4df5733943';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_to_cta_form';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
      'links' => 0,
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
  $pane->uuid = '2c4451ff-8370-4861-a65a-4c4df5733943';
  $display->content['new-2c4451ff-8370-4861-a65a-4c4df5733943'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-2c4451ff-8370-4861-a65a-4c4df5733943';
  $pane = new stdClass();
  $pane->pid = 'new-9dafda9e-2055-4d67-a415-0cb900daa997';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_button_text';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '9dafda9e-2055-4d67-a415-0cb900daa997';
  $display->content['new-9dafda9e-2055-4d67-a415-0cb900daa997'] = $pane;
  $display->panels['two_66_33_first'][6] = 'new-9dafda9e-2055-4d67-a415-0cb900daa997';
  $pane = new stdClass();
  $pane->pid = 'new-2c64ca46-2a73-4d0c-ad31-cd3ca06c706e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '2c64ca46-2a73-4d0c-ad31-cd3ca06c706e';
  $display->content['new-2c64ca46-2a73-4d0c-ad31-cd3ca06c706e'] = $pane;
  $display->panels['two_66_33_first'][7] = 'new-2c64ca46-2a73-4d0c-ad31-cd3ca06c706e';
  $pane = new stdClass();
  $pane->pid = 'new-c79671b3-de3e-48dc-b5e7-75d3c79b5861';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views';
  $pane->subtype = 'campaign_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = 'c79671b3-de3e-48dc-b5e7-75d3c79b5861';
  $display->content['new-c79671b3-de3e-48dc-b5e7-75d3c79b5861'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-c79671b3-de3e-48dc-b5e7-75d3c79b5861';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-41947c41-f1f2-4924-922b-447671b372e2';
  $panelizer->display = $display;
  $export['node:campaign_page:default'] = $panelizer;

  return $export;
}
