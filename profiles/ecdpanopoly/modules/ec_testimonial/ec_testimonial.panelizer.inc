<?php
/**
 * @file
 * ec_testimonial.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_testimonial_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:testimonial:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'testimonial';
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
  $display->uuid = 'd3cd8d85-ec5f-4f93-bc94-348dc3dea5f2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-23cd7b9e-44ef-4ddb-98f9-89cc8afa56c3';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'title_style' => 'h1',
      'title_link' => 'content',
      'title_class' => '',
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
  $pane->uuid = '23cd7b9e-44ef-4ddb-98f9-89cc8afa56c3';
  $display->content['new-23cd7b9e-44ef-4ddb-98f9-89cc8afa56c3'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-23cd7b9e-44ef-4ddb-98f9-89cc8afa56c3';
  $pane = new stdClass();
  $pane->pid = 'new-aaf58e41-9ceb-49d6-a3ac-1b22fcb17266';
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
      'title_style' => 'h1',
      'title_link' => 'content',
      'title_class' => '',
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
  $pane->uuid = 'aaf58e41-9ceb-49d6-a3ac-1b22fcb17266';
  $display->content['new-aaf58e41-9ceb-49d6-a3ac-1b22fcb17266'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-aaf58e41-9ceb-49d6-a3ac-1b22fcb17266';
  $pane = new stdClass();
  $pane->pid = 'new-f403cf65-3378-4ddc-8767-c961876d0b7b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_testimonial_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'colorbox',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'sc_460x230',
      'image_link' => '',
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'colorbox_node_style' => 's_460',
      'colorbox_node_style_first' => '',
      'colorbox_image_style' => '',
      'colorbox_gallery' => 'field_post',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f403cf65-3378-4ddc-8767-c961876d0b7b';
  $display->content['new-f403cf65-3378-4ddc-8767-c961876d0b7b'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-f403cf65-3378-4ddc-8767-c961876d0b7b';
  $pane = new stdClass();
  $pane->pid = 'new-a1e69fa0-6e5c-4874-ac54-33e1981f475c';
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
  $pane->uuid = 'a1e69fa0-6e5c-4874-ac54-33e1981f475c';
  $display->content['new-a1e69fa0-6e5c-4874-ac54-33e1981f475c'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-a1e69fa0-6e5c-4874-ac54-33e1981f475c';
  $pane = new stdClass();
  $pane->pid = 'new-06325a6e-bf3d-4053-bb23-2d9009081f6c';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_video',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'controls' => 1,
      'autoplay' => 0,
      'loop' => 0,
      'multiple_file_behavior' => 'tags',
      'width' => '',
      'height' => '',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '06325a6e-bf3d-4053-bb23-2d9009081f6c';
  $display->content['new-06325a6e-bf3d-4053-bb23-2d9009081f6c'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-06325a6e-bf3d-4053-bb23-2d9009081f6c';
  $pane = new stdClass();
  $pane->pid = 'new-4382b735-7c2e-4c0e-a9f9-20f3b65420ce';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tetstimonial_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4382b735-7c2e-4c0e-a9f9-20f3b65420ce';
  $display->content['new-4382b735-7c2e-4c0e-a9f9-20f3b65420ce'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-4382b735-7c2e-4c0e-a9f9-20f3b65420ce';
  $pane = new stdClass();
  $pane->pid = 'new-73603225-b0f9-4ebd-8285-61de88732c44';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_testimonial_city';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '73603225-b0f9-4ebd-8285-61de88732c44';
  $display->content['new-73603225-b0f9-4ebd-8285-61de88732c44'] = $pane;
  $display->panels['two_66_33_first'][6] = 'new-73603225-b0f9-4ebd-8285-61de88732c44';
  $pane = new stdClass();
  $pane->pid = 'new-458b0424-30d9-45bb-8ad0-96342ff426dd';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_testimonial_service';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'Services Provided',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '458b0424-30d9-45bb-8ad0-96342ff426dd';
  $display->content['new-458b0424-30d9-45bb-8ad0-96342ff426dd'] = $pane;
  $display->panels['two_66_33_first'][7] = 'new-458b0424-30d9-45bb-8ad0-96342ff426dd';
  $pane = new stdClass();
  $pane->pid = 'new-28cba7a4-d43e-4249-8bca-d2d8948f14e0';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'Full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'testimonial-link',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '28cba7a4-d43e-4249-8bca-d2d8948f14e0';
  $display->content['new-28cba7a4-d43e-4249-8bca-d2d8948f14e0'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-28cba7a4-d43e-4249-8bca-d2d8948f14e0';
  $pane = new stdClass();
  $pane->pid = 'new-ef8a5f61-cfac-46ce-84fc-4150df45f263';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'promotions-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'nodes',
    'header_type' => 'none',
    'view_mode' => 'show_this_block',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ef8a5f61-cfac-46ce-84fc-4150df45f263';
  $display->content['new-ef8a5f61-cfac-46ce-84fc-4150df45f263'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-ef8a5f61-cfac-46ce-84fc-4150df45f263';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a1e69fa0-6e5c-4874-ac54-33e1981f475c';
  $panelizer->display = $display;
  $export['node:testimonial:default:default'] = $panelizer;

  return $export;
}
