<?php
/**
 * @file
 * ec_product_page_lite.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_product_page_lite_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:product_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'product_page';
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
  $display->uuid = '86b5a5ec-9d79-44cd-a03c-10c506679813';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0842dd9c-13bd-4eba-9901-6a40379ca790';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_product_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0842dd9c-13bd-4eba-9901-6a40379ca790';
    $display->content['new-0842dd9c-13bd-4eba-9901-6a40379ca790'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-0842dd9c-13bd-4eba-9901-6a40379ca790';
    $pane = new stdClass();
    $pane->pid = 'new-e434b378-875d-48c6-a8f8-9263eefa3a3b';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e434b378-875d-48c6-a8f8-9263eefa3a3b';
    $display->content['new-e434b378-875d-48c6-a8f8-9263eefa3a3b'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-e434b378-875d-48c6-a8f8-9263eefa3a3b';
    $pane = new stdClass();
    $pane->pid = 'new-3abda055-de55-4029-952a-bb1330810a6b';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-auxiliary-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-auxiliary-menu',
      'parent_mlid' => 1680,
      'parent' => 'menu-auxiliary-menu:1680',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => 'Resources',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3abda055-de55-4029-952a-bb1330810a6b';
    $display->content['new-3abda055-de55-4029-952a-bb1330810a6b'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-3abda055-de55-4029-952a-bb1330810a6b';
    $pane = new stdClass();
    $pane->pid = 'new-06d7d592-1db0-4d17-bb53-a0c832a2f5ed';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_prodpage_promotion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '3',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'show_this_block',
        'links' => 1,
      ),
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'show-this-promotion',
      'css_class' => 'promotion',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06d7d592-1db0-4d17-bb53-a0c832a2f5ed';
    $display->content['new-06d7d592-1db0-4d17-bb53-a0c832a2f5ed'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-06d7d592-1db0-4d17-bb53-a0c832a2f5ed';
    $pane = new stdClass();
    $pane->pid = 'new-7f6384e2-f861-4a86-bf66-c8f11f9645ff';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_prodpage_testimonial';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'show_this_block',
        'links' => 1,
      ),
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'show-this-testimonial',
      'css_class' => 'testimonial',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7f6384e2-f861-4a86-bf66-c8f11f9645ff';
    $display->content['new-7f6384e2-f861-4a86-bf66-c8f11f9645ff'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-7f6384e2-f861-4a86-bf66-c8f11f9645ff';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:product_page:default:default'] = $panelizer;

  return $export;
}
