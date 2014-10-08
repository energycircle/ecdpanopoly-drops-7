<?php
/**
 * @file
 * ec_gallery.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_gallery_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:gallery:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'gallery';
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
  $display->uuid = 'd58d2f07-bc7b-472b-a052-9353f831b1f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbd73b10-c952-405f-aa8f-73b4fd2cc3ae';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = FALSE;
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
    $pane->uuid = 'fbd73b10-c952-405f-aa8f-73b4fd2cc3ae';
    $display->content['new-fbd73b10-c952-405f-aa8f-73b4fd2cc3ae'] = $pane;
    $display->panels['two_66_33_bottom'][0] = 'new-fbd73b10-c952-405f-aa8f-73b4fd2cc3ae';
    $pane = new stdClass();
    $pane->pid = 'new-0f4fbde9-63ed-4a41-82dd-3f3ed73618f0';
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
    $pane->uuid = '0f4fbde9-63ed-4a41-82dd-3f3ed73618f0';
    $display->content['new-0f4fbde9-63ed-4a41-82dd-3f3ed73618f0'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-0f4fbde9-63ed-4a41-82dd-3f3ed73618f0';
    $pane = new stdClass();
    $pane->pid = 'new-bb4351be-b93a-42d1-b1f3-6b25107e32b6';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_gallery_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'colorbox',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
        'field_multiple_limit' => -1,
        'field_multiple_limit_offset' => 0,
        'colorbox_node_style' => 'sc_220x110',
        'colorbox_node_style_first' => '',
        'colorbox_image_style' => 'sc_620x310',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
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
    $pane->uuid = 'bb4351be-b93a-42d1-b1f3-6b25107e32b6';
    $display->content['new-bb4351be-b93a-42d1-b1f3-6b25107e32b6'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-bb4351be-b93a-42d1-b1f3-6b25107e32b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0f4fbde9-63ed-4a41-82dd-3f3ed73618f0';
  $panelizer->display = $display;
  $export['node:gallery:default:default'] = $panelizer;

  return $export;
}
