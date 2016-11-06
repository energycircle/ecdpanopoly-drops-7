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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c5a184e8-ecd1-4f36-9a95-c93583ae0ec6';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:audience:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a3cf0e60-2226-4ff5-94dd-a792559988c6';
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
      'field_multiple_limit_order' => 0,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a3cf0e60-2226-4ff5-94dd-a792559988c6';
  $display->content['new-a3cf0e60-2226-4ff5-94dd-a792559988c6'] = $pane;
  $display->panels['center'][0] = 'new-a3cf0e60-2226-4ff5-94dd-a792559988c6';
  $pane = new stdClass();
  $pane->pid = 'new-fe9fc06c-0feb-42af-add4-d78ac66ff9c1';
  $pane->panel = 'center';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fe9fc06c-0feb-42af-add4-d78ac66ff9c1';
  $display->content['new-fe9fc06c-0feb-42af-add4-d78ac66ff9c1'] = $pane;
  $display->panels['center'][1] = 'new-fe9fc06c-0feb-42af-add4-d78ac66ff9c1';
  $pane = new stdClass();
  $pane->pid = 'new-b2983de1-002b-44bd-ac77-24bcf938a157';
  $pane->panel = 'center';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b2983de1-002b-44bd-ac77-24bcf938a157';
  $display->content['new-b2983de1-002b-44bd-ac77-24bcf938a157'] = $pane;
  $display->panels['center'][2] = 'new-b2983de1-002b-44bd-ac77-24bcf938a157';
  $pane = new stdClass();
  $pane->pid = 'new-fe083a06-bf89-4a40-aa23-e3f8e68fabbc';
  $pane->panel = 'center';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fe083a06-bf89-4a40-aa23-e3f8e68fabbc';
  $display->content['new-fe083a06-bf89-4a40-aa23-e3f8e68fabbc'] = $pane;
  $display->panels['center'][3] = 'new-fe083a06-bf89-4a40-aa23-e3f8e68fabbc';
  $pane = new stdClass();
  $pane->pid = 'new-924db20e-7b31-4cdb-a87b-4923d470b9d5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_call_to_action';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '924db20e-7b31-4cdb-a87b-4923d470b9d5';
  $display->content['new-924db20e-7b31-4cdb-a87b-4923d470b9d5'] = $pane;
  $display->panels['center'][4] = 'new-924db20e-7b31-4cdb-a87b-4923d470b9d5';
  $pane = new stdClass();
  $pane->pid = 'new-08709648-225e-4589-b77a-56ac173c9ae1';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_to_cta_form';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '08709648-225e-4589-b77a-56ac173c9ae1';
  $display->content['new-08709648-225e-4589-b77a-56ac173c9ae1'] = $pane;
  $display->panels['center'][5] = 'new-08709648-225e-4589-b77a-56ac173c9ae1';
  $pane = new stdClass();
  $pane->pid = 'new-98420542-8104-48f9-af3c-658ce483a5d5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_button_text';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '98420542-8104-48f9-af3c-658ce483a5d5';
  $display->content['new-98420542-8104-48f9-af3c-658ce483a5d5'] = $pane;
  $display->panels['center'][6] = 'new-98420542-8104-48f9-af3c-658ce483a5d5';
  $pane = new stdClass();
  $pane->pid = 'new-89aeed48-5057-43b8-99c3-bf7e220c9bc7';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_aud_teaser_image';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '89aeed48-5057-43b8-99c3-bf7e220c9bc7';
  $display->content['new-89aeed48-5057-43b8-99c3-bf7e220c9bc7'] = $pane;
  $display->panels['center'][7] = 'new-89aeed48-5057-43b8-99c3-bf7e220c9bc7';
  $pane = new stdClass();
  $pane->pid = 'new-14775214-fc1d-4aa0-add4-53e517566fd8';
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
  $pane->uuid = '14775214-fc1d-4aa0-add4-53e517566fd8';
  $display->content['new-14775214-fc1d-4aa0-add4-53e517566fd8'] = $pane;
  $display->panels['center'][8] = 'new-14775214-fc1d-4aa0-add4-53e517566fd8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-14775214-fc1d-4aa0-add4-53e517566fd8';
  $panelizer->display = $display;
  $export['node:audience:default:default'] = $panelizer;

  return $export;
}
