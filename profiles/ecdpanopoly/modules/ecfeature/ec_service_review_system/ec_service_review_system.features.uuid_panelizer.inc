<?php
/**
 * @file
 * ec_service_review_system.features.uuid_panelizer.inc
 */

/**
 * Implements hook_uuid_features_default_panelizer().
 */
function ec_service_review_system_uuid_features_default_panelizer() {
  $uuid_panelizer = array();

  // Modified panelizer display for node 0d147d19-fe80-4b1e-9f97-625d31d3551e.
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10c9e351-f69c-4629-b191-77b8b01f4f1c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e9b63bb4-f8cc-4dbc-8160-1af71d1555df';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'sreview_sites-panel_pane_1';
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
  $pane->uuid = 'e9b63bb4-f8cc-4dbc-8160-1af71d1555df';
  $display->content['new-e9b63bb4-f8cc-4dbc-8160-1af71d1555df'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-e9b63bb4-f8cc-4dbc-8160-1af71d1555df';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $uuid_panelizer[] = $display;
  // Modified panelizer display for node d90e9756-2413-4ca7-bdfe-0c251cfeeee6.
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_top' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10c9e351-f69c-4629-b191-77b8b01f4f1c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-34b1bb2e-fdee-4c32-9bb0-e01a861e8675';
  $pane->panel = 'one_main';
  $pane->type = 'block';
  $pane->subtype = 'entityform_block-sreview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '34b1bb2e-fdee-4c32-9bb0-e01a861e8675';
  $display->content['new-34b1bb2e-fdee-4c32-9bb0-e01a861e8675'] = $pane;
  $display->panels['one_main'][0] = 'new-34b1bb2e-fdee-4c32-9bb0-e01a861e8675';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $uuid_panelizer[] = $display;

  return $uuid_panelizer;
}
