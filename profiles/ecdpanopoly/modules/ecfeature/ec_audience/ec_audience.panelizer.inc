<?php
/**
 * @file
 * ec_audience.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_audience_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'audience';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:audience:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c5a184e8-ecd1-4f36-9a95-c93583ae0ec6';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:audience:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fe9fc06c-0feb-42af-add4-d78ac66ff9c1';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_aud_featured_image';
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
      'field_multiple_limit_order' => 0,
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
  $pane->uuid = 'fe9fc06c-0feb-42af-add4-d78ac66ff9c1';
  $display->content['new-fe9fc06c-0feb-42af-add4-d78ac66ff9c1'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-fe9fc06c-0feb-42af-add4-d78ac66ff9c1';
  $pane = new stdClass();
  $pane->pid = 'new-b2983de1-002b-44bd-ac77-24bcf938a157';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_video';
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
      'field_multiple_limit_order' => 0,
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
  $pane->uuid = 'b2983de1-002b-44bd-ac77-24bcf938a157';
  $display->content['new-b2983de1-002b-44bd-ac77-24bcf938a157'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-b2983de1-002b-44bd-ac77-24bcf938a157';
  $pane = new stdClass();
  $pane->pid = 'new-a3cf0e60-2226-4ff5-94dd-a792559988c6';
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
      'field_multiple_limit_order' => 0,
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
  $pane->uuid = 'a3cf0e60-2226-4ff5-94dd-a792559988c6';
  $display->content['new-a3cf0e60-2226-4ff5-94dd-a792559988c6'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-a3cf0e60-2226-4ff5-94dd-a792559988c6';
  $pane = new stdClass();
  $pane->pid = 'new-ce283940-ae07-4b69-9b98-4a5633f8706d';
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
  $pane->uuid = 'ce283940-ae07-4b69-9b98-4a5633f8706d';
  $display->content['new-ce283940-ae07-4b69-9b98-4a5633f8706d'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-ce283940-ae07-4b69-9b98-4a5633f8706d';
  $pane = new stdClass();
  $pane->pid = 'new-fe083a06-bf89-4a40-aa23-e3f8e68fabbc';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_services_audiences';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => FALSE,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'field_multiple_limit_order' => 0,
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
  $pane->uuid = 'fe083a06-bf89-4a40-aa23-e3f8e68fabbc';
  $display->content['new-fe083a06-bf89-4a40-aa23-e3f8e68fabbc'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-fe083a06-bf89-4a40-aa23-e3f8e68fabbc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:audience:default:default'] = $panelizer;

  return $export;
}
