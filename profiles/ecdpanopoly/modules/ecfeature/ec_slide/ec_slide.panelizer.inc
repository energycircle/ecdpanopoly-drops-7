<?php
/**
 * @file
 * ec_slide.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_slide_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:slide:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'slide';
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
  $display->uuid = 'b910abb6-5601-4bf4-81d6-9e7ac6d38648';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-05048dd3-f377-4e8f-a02b-14dc62f7b988';
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
    $pane->uuid = '05048dd3-f377-4e8f-a02b-14dc62f7b988';
    $display->content['new-05048dd3-f377-4e8f-a02b-14dc62f7b988'] = $pane;
    $display->panels['center'][0] = 'new-05048dd3-f377-4e8f-a02b-14dc62f7b988';
    $pane = new stdClass();
    $pane->pid = 'new-ae9f424a-4ca1-450e-a53a-c147a2fb0584';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_display_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = 'ae9f424a-4ca1-450e-a53a-c147a2fb0584';
    $display->content['new-ae9f424a-4ca1-450e-a53a-c147a2fb0584'] = $pane;
    $display->panels['center'][1] = 'new-ae9f424a-4ca1-450e-a53a-c147a2fb0584';
    $pane = new stdClass();
    $pane->pid = 'new-0e0286cd-1be1-4301-ab6d-03e649886b8c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_display_subtitle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '0e0286cd-1be1-4301-ab6d-03e649886b8c';
    $display->content['new-0e0286cd-1be1-4301-ab6d-03e649886b8c'] = $pane;
    $display->panels['center'][2] = 'new-0e0286cd-1be1-4301-ab6d-03e649886b8c';
    $pane = new stdClass();
    $pane->pid = 'new-d54be0e7-a223-4132-b5d9-b5718c4a36cd';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_content_link';
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
    $pane->uuid = 'd54be0e7-a223-4132-b5d9-b5718c4a36cd';
    $display->content['new-d54be0e7-a223-4132-b5d9-b5718c4a36cd'] = $pane;
    $display->panels['center'][3] = 'new-d54be0e7-a223-4132-b5d9-b5718c4a36cd';
    $pane = new stdClass();
    $pane->pid = 'new-e1f0fa2b-ddf5-4bf0-972d-14942e36bed3';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slide_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
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
    $pane->uuid = 'e1f0fa2b-ddf5-4bf0-972d-14942e36bed3';
    $display->content['new-e1f0fa2b-ddf5-4bf0-972d-14942e36bed3'] = $pane;
    $display->panels['center'][4] = 'new-e1f0fa2b-ddf5-4bf0-972d-14942e36bed3';
    $pane = new stdClass();
    $pane->pid = 'new-b0ff0bc4-3b23-4516-98af-7e7eb278a2f4';
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
    $pane->uuid = 'b0ff0bc4-3b23-4516-98af-7e7eb278a2f4';
    $display->content['new-b0ff0bc4-3b23-4516-98af-7e7eb278a2f4'] = $pane;
    $display->panels['center'][5] = 'new-b0ff0bc4-3b23-4516-98af-7e7eb278a2f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b0ff0bc4-3b23-4516-98af-7e7eb278a2f4';
  $panelizer->display = $display;
  $export['node:slide:default:default'] = $panelizer;

  return $export;
}
