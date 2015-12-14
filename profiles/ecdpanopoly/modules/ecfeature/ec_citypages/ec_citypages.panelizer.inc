<?php
/**
 * @file
 * ec_citypages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_citypages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:city_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'city_page';
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
  $display->uuid = '60209d87-3ec8-4eea-bce3-b6787afeca31';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60419546-cecf-4434-9418-4ff6ffc2de5e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages-panel_pane_2';
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
  $pane->uuid = '60419546-cecf-4434-9418-4ff6ffc2de5e';
  $display->content['new-60419546-cecf-4434-9418-4ff6ffc2de5e'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-60419546-cecf-4434-9418-4ff6ffc2de5e';
  $pane = new stdClass();
  $pane->pid = 'new-b7d51614-0ab2-423a-81e9-c04f81c8a173';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages-panel_pane_1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b7d51614-0ab2-423a-81e9-c04f81c8a173';
  $display->content['new-b7d51614-0ab2-423a-81e9-c04f81c8a173'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-b7d51614-0ab2-423a-81e9-c04f81c8a173';
  $pane = new stdClass();
  $pane->pid = 'new-2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_citypages_testimonials';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => FALSE,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d';
  $display->content['new-2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d';
  $pane = new stdClass();
  $pane->pid = 'new-e9eedaa8-4f17-4a41-94f1-04e98026154b';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_citypages_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => FALSE,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e9eedaa8-4f17-4a41-94f1-04e98026154b';
  $display->content['new-e9eedaa8-4f17-4a41-94f1-04e98026154b'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-e9eedaa8-4f17-4a41-94f1-04e98026154b';
  $pane = new stdClass();
  $pane->pid = 'new-63cab71e-249a-4d6e-90d0-c678a9b79244';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_citypages_case_study';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => FALSE,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '63cab71e-249a-4d6e-90d0-c678a9b79244';
  $display->content['new-63cab71e-249a-4d6e-90d0-c678a9b79244'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-63cab71e-249a-4d6e-90d0-c678a9b79244';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:city_page:default:default'] = $panelizer;

  return $export;
}
