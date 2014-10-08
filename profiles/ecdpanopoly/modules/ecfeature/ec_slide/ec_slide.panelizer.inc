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
  $display->uuid = '703c656d-5f6f-4f2c-9de2-09ba3cf007d7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f00baf0c-96c5-42f3-8ed0-59b09023b0a1';
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
    $pane->uuid = 'f00baf0c-96c5-42f3-8ed0-59b09023b0a1';
    $display->content['new-f00baf0c-96c5-42f3-8ed0-59b09023b0a1'] = $pane;
    $display->panels['center'][0] = 'new-f00baf0c-96c5-42f3-8ed0-59b09023b0a1';
    $pane = new stdClass();
    $pane->pid = 'new-6aea93d9-3dd7-4b22-938a-7b3927d93231';
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
    $pane->uuid = '6aea93d9-3dd7-4b22-938a-7b3927d93231';
    $display->content['new-6aea93d9-3dd7-4b22-938a-7b3927d93231'] = $pane;
    $display->panels['center'][1] = 'new-6aea93d9-3dd7-4b22-938a-7b3927d93231';
    $pane = new stdClass();
    $pane->pid = 'new-81e9808d-234c-432d-8498-4d683a676ce4';
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
    $pane->uuid = '81e9808d-234c-432d-8498-4d683a676ce4';
    $display->content['new-81e9808d-234c-432d-8498-4d683a676ce4'] = $pane;
    $display->panels['center'][2] = 'new-81e9808d-234c-432d-8498-4d683a676ce4';
    $pane = new stdClass();
    $pane->pid = 'new-a64d3513-6a39-4f5d-aa73-998387682aa0';
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
    $pane->uuid = 'a64d3513-6a39-4f5d-aa73-998387682aa0';
    $display->content['new-a64d3513-6a39-4f5d-aa73-998387682aa0'] = $pane;
    $display->panels['center'][3] = 'new-a64d3513-6a39-4f5d-aa73-998387682aa0';
    $pane = new stdClass();
    $pane->pid = 'new-8211c09e-f37e-46db-a324-9b8f8f3dfe7a';
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
    $pane->uuid = '8211c09e-f37e-46db-a324-9b8f8f3dfe7a';
    $display->content['new-8211c09e-f37e-46db-a324-9b8f8f3dfe7a'] = $pane;
    $display->panels['center'][4] = 'new-8211c09e-f37e-46db-a324-9b8f8f3dfe7a';
    $pane = new stdClass();
    $pane->pid = 'new-f8cdac70-6ab4-457b-8742-5bcc9a331233';
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
    $pane->uuid = 'f8cdac70-6ab4-457b-8742-5bcc9a331233';
    $display->content['new-f8cdac70-6ab4-457b-8742-5bcc9a331233'] = $pane;
    $display->panels['center'][5] = 'new-f8cdac70-6ab4-457b-8742-5bcc9a331233';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f8cdac70-6ab4-457b-8742-5bcc9a331233';
  $panelizer->display = $display;
  $export['node:slide:default:default'] = $panelizer;

  return $export;
}
