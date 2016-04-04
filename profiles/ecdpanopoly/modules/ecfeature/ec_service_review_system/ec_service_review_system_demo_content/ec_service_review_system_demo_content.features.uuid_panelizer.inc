<?php
/**
 * @file
 * ec_service_review_system_demo_content.features.uuid_panelizer.inc
 */

/**
 * Implements hook_uuid_features_default_panelizer().
 */
function ec_service_review_system_demo_content_uuid_features_default_panelizer() {
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
  // Modified panelizer display for node ba2cfc71-8f75-4f71-a9ee-22001bfad430.
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
  $pane->pid = 'new-ab6d95ae-008b-48ab-84b4-0b3c475b7fa4';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'hero_image_or_video-panel_pane_1';
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
  $pane->uuid = 'ab6d95ae-008b-48ab-84b4-0b3c475b7fa4';
  $display->content['new-ab6d95ae-008b-48ab-84b4-0b3c475b7fa4'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-ab6d95ae-008b-48ab-84b4-0b3c475b7fa4';
  $pane = new stdClass();
  $pane->pid = 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40';
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
    'formatter_settings' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '74f82699-93ba-4b15-8bcf-e3bfa1894d40';
  $display->content['new-74f82699-93ba-4b15-8bcf-e3bfa1894d40'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40';
  $pane = new stdClass();
  $pane->pid = 'new-489e8af0-fa55-4003-89f7-74b2bca1281a';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'sreviews_average-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '489e8af0-fa55-4003-89f7-74b2bca1281a';
  $display->content['new-489e8af0-fa55-4003-89f7-74b2bca1281a'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-489e8af0-fa55-4003-89f7-74b2bca1281a';
  $pane = new stdClass();
  $pane->pid = 'new-487e55dd-bffe-41bd-b5d0-e3da2a5f4bbb';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'sreviews-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '487e55dd-bffe-41bd-b5d0-e3da2a5f4bbb';
  $display->content['new-487e55dd-bffe-41bd-b5d0-e3da2a5f4bbb'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-487e55dd-bffe-41bd-b5d0-e3da2a5f4bbb';
  $pane = new stdClass();
  $pane->pid = 'new-a140d3ab-1c7b-459e-80c8-5d95df927fad';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'service_request-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a140d3ab-1c7b-459e-80c8-5d95df927fad';
  $display->content['new-a140d3ab-1c7b-459e-80c8-5d95df927fad'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-a140d3ab-1c7b-459e-80c8-5d95df927fad';
  $pane = new stdClass();
  $pane->pid = 'new-e982246e-51d7-417b-92fc-b2fc9b902965';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'promotions-panel_pane_2';
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
  $pane->uuid = 'e982246e-51d7-417b-92fc-b2fc9b902965';
  $display->content['new-e982246e-51d7-417b-92fc-b2fc9b902965'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-e982246e-51d7-417b-92fc-b2fc9b902965';
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
