<?php
/**
 * @file
 * ec_promotions.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_promotions_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:promotion:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'promotion';
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
  $panelizer->link_to_entity = FALSE;
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
  $display->title = 'Test Title';
  $display->uuid = '3e0ad096-473b-4b72-9aca-741ba02d0fcc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6bd2d022-88da-44d6-84d6-814b3ff7bbec';
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
      'override_title' => 1,
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
    $pane->uuid = '6bd2d022-88da-44d6-84d6-814b3ff7bbec';
    $display->content['new-6bd2d022-88da-44d6-84d6-814b3ff7bbec'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-6bd2d022-88da-44d6-84d6-814b3ff7bbec';
    $pane = new stdClass();
    $pane->pid = 'new-21bb69ab-e0b6-4647-bf39-cb42363e714a';
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
    $pane->uuid = '21bb69ab-e0b6-4647-bf39-cb42363e714a';
    $display->content['new-21bb69ab-e0b6-4647-bf39-cb42363e714a'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-21bb69ab-e0b6-4647-bf39-cb42363e714a';
    $pane = new stdClass();
    $pane->pid = 'new-0791df45-7499-474e-b533-5f6dec3991e0';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_promotion_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'sc_460x230',
        'image_link' => '',
        'field_multiple_limit' => -1,
        'field_multiple_limit_offset' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0791df45-7499-474e-b533-5f6dec3991e0';
    $display->content['new-0791df45-7499-474e-b533-5f6dec3991e0'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-0791df45-7499-474e-b533-5f6dec3991e0';
    $pane = new stdClass();
    $pane->pid = 'new-cec8e437-cd28-4fc2-a6e3-7b1be437dbce';
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
    $pane->uuid = 'cec8e437-cd28-4fc2-a6e3-7b1be437dbce';
    $display->content['new-cec8e437-cd28-4fc2-a6e3-7b1be437dbce'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-cec8e437-cd28-4fc2-a6e3-7b1be437dbce';
    $pane = new stdClass();
    $pane->pid = 'new-c673cbde-d304-426e-a76e-8d24ae6c1ff9';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'service_request-panel_pane_1';
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
    $pane->uuid = 'c673cbde-d304-426e-a76e-8d24ae6c1ff9';
    $display->content['new-c673cbde-d304-426e-a76e-8d24ae6c1ff9'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-c673cbde-d304-426e-a76e-8d24ae6c1ff9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:promotion:default:default'] = $panelizer;

  return $export;
}
