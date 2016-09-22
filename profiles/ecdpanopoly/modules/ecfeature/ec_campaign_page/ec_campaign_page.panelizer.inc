<?php
/**
 * @file
 * ec_campaign_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_campaign_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Alternative-1col';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'campaign_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:campaign_page:alternative';
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
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fe29c557-781d-400e-950d-7d8fe95ffc81';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:campaign_page:alternative';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $display->content['new-f0f382fb-b5d7-4da2-a66f-157c797017ca'] = $pane;
  $display->panels['one_main'][0] = 'new-f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $pane = new stdClass();
  $pane->pid = 'new-41947c41-f1f2-4924-922b-447671b372e2';
  $pane->panel = 'one_main';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '41947c41-f1f2-4924-922b-447671b372e2';
  $display->content['new-41947c41-f1f2-4924-922b-447671b372e2'] = $pane;
  $display->panels['one_main'][1] = 'new-41947c41-f1f2-4924-922b-447671b372e2';
  $pane = new stdClass();
  $pane->pid = 'new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $pane->panel = 'one_main';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $display->content['new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2'] = $pane;
  $display->panels['one_main'][2] = 'new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $pane = new stdClass();
  $pane->pid = 'new-e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $pane->panel = 'one_main';
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
  $pane->uuid = 'e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $display->content['new-e52b05fe-3747-4ef2-80e5-f78c12afb105'] = $pane;
  $display->panels['one_main'][3] = 'new-e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $pane = new stdClass();
  $pane->pid = 'new-0023126f-12f3-4b88-b92b-ab5791128163';
  $pane->panel = 'one_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'campaign_request-panel_pane_1';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0023126f-12f3-4b88-b92b-ab5791128163';
  $display->content['new-0023126f-12f3-4b88-b92b-ab5791128163'] = $pane;
  $display->panels['one_main'][4] = 'new-0023126f-12f3-4b88-b92b-ab5791128163';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:campaign_page:alternative'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'campaign_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:campaign_page:default';
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
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fe29c557-781d-400e-950d-7d8fe95ffc81';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:campaign_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41947c41-f1f2-4924-922b-447671b372e2';
  $pane->panel = 'two_50_first';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41947c41-f1f2-4924-922b-447671b372e2';
  $display->content['new-41947c41-f1f2-4924-922b-447671b372e2'] = $pane;
  $display->panels['two_50_first'][0] = 'new-41947c41-f1f2-4924-922b-447671b372e2';
  $pane = new stdClass();
  $pane->pid = 'new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $pane->panel = 'two_50_first';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $display->content['new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2'] = $pane;
  $display->panels['two_50_first'][1] = 'new-bd2d33b1-bf6c-4c00-ac4d-7f0c16bf68e2';
  $pane = new stdClass();
  $pane->pid = 'new-e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $pane->panel = 'two_50_first';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $display->content['new-e52b05fe-3747-4ef2-80e5-f78c12afb105'] = $pane;
  $display->panels['two_50_first'][2] = 'new-e52b05fe-3747-4ef2-80e5-f78c12afb105';
  $pane = new stdClass();
  $pane->pid = 'new-0023126f-12f3-4b88-b92b-ab5791128163';
  $pane->panel = 'two_50_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'campaign_request-panel_pane_1';
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
  $pane->uuid = '0023126f-12f3-4b88-b92b-ab5791128163';
  $display->content['new-0023126f-12f3-4b88-b92b-ab5791128163'] = $pane;
  $display->panels['two_50_second'][0] = 'new-0023126f-12f3-4b88-b92b-ab5791128163';
  $pane = new stdClass();
  $pane->pid = 'new-f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $pane->panel = 'two_50_top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $display->content['new-f0f382fb-b5d7-4da2-a66f-157c797017ca'] = $pane;
  $display->panels['two_50_top'][0] = 'new-f0f382fb-b5d7-4da2-a66f-157c797017ca';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:campaign_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default_alternative';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'campaign_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:campaign_page:default_alternative:default';
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '726a1b64-4a51-4b53-b1b1-7de0e5e9a11e';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:campaign_page:default_alternative:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c1885090-275d-4094-8938-b95b717ff496';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'c1885090-275d-4094-8938-b95b717ff496';
  $display->content['new-c1885090-275d-4094-8938-b95b717ff496'] = $pane;
  $display->panels['center'][0] = 'new-c1885090-275d-4094-8938-b95b717ff496';
  $pane = new stdClass();
  $pane->pid = 'new-b262842a-1305-4d41-9b1e-87577d85000a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_call_to_action';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'b262842a-1305-4d41-9b1e-87577d85000a';
  $display->content['new-b262842a-1305-4d41-9b1e-87577d85000a'] = $pane;
  $display->panels['center'][1] = 'new-b262842a-1305-4d41-9b1e-87577d85000a';
  $pane = new stdClass();
  $pane->pid = 'new-dc0579ab-98be-4b14-ab19-230e7324eade';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_to_cta_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'dc0579ab-98be-4b14-ab19-230e7324eade';
  $display->content['new-dc0579ab-98be-4b14-ab19-230e7324eade'] = $pane;
  $display->panels['center'][2] = 'new-dc0579ab-98be-4b14-ab19-230e7324eade';
  $pane = new stdClass();
  $pane->pid = 'new-fc34498e-fed9-4e3f-995a-3792ce47f98b';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'fc34498e-fed9-4e3f-995a-3792ce47f98b';
  $display->content['new-fc34498e-fed9-4e3f-995a-3792ce47f98b'] = $pane;
  $display->panels['center'][3] = 'new-fc34498e-fed9-4e3f-995a-3792ce47f98b';
  $pane = new stdClass();
  $pane->pid = 'new-d337957a-bcdf-4fdf-b9ce-5596ad499c63';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_subtitle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd337957a-bcdf-4fdf-b9ce-5596ad499c63';
  $display->content['new-d337957a-bcdf-4fdf-b9ce-5596ad499c63'] = $pane;
  $display->panels['center'][4] = 'new-d337957a-bcdf-4fdf-b9ce-5596ad499c63';
  $pane = new stdClass();
  $pane->pid = 'new-491e1f7f-9d2e-4dee-80ce-4a7e362a7122';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '491e1f7f-9d2e-4dee-80ce-4a7e362a7122';
  $display->content['new-491e1f7f-9d2e-4dee-80ce-4a7e362a7122'] = $pane;
  $display->panels['center'][5] = 'new-491e1f7f-9d2e-4dee-80ce-4a7e362a7122';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:campaign_page:default_alternative:default'] = $panelizer;

  return $export;
}
