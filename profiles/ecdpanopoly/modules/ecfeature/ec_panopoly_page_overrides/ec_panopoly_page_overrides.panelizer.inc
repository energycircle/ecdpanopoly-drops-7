<?php
/**
 * @file
 * ec_panopoly_page_overrides.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_panopoly_page_overrides_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Home Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:panopoly_page:home_default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'page-default';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array(
    0 => array(
      'identifier' => 'Content',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => 1,
      'id' => 1,
    ),
  );
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10c9e351-f69c-4629-b191-77b8b01f4f1c';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:panopoly_page:home_default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5c743585-bddf-4030-8bb7-6b0a4c8aa30a';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'faq_all-panel_pane_1';
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
  $pane->uuid = '5c743585-bddf-4030-8bb7-6b0a4c8aa30a';
  $display->content['new-5c743585-bddf-4030-8bb7-6b0a4c8aa30a'] = $pane;
  $display->panels['two_66_33_bottom'][0] = 'new-5c743585-bddf-4030-8bb7-6b0a4c8aa30a';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '74f82699-93ba-4b15-8bcf-e3bfa1894d40';
  $display->content['new-74f82699-93ba-4b15-8bcf-e3bfa1894d40'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40';
  $pane = new stdClass();
  $pane->pid = 'new-d131cb10-301f-463f-8f52-fc6628878c1f';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_service_group';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'field_multiple_limit' => '-1',
      'field_multiple_limit_offset' => '0',
      'field_multiple_limit_order' => '0',
      'view_mode' => 'show_this_block',
      'links' => 1,
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
  $pane->uuid = 'd131cb10-301f-463f-8f52-fc6628878c1f';
  $display->content['new-d131cb10-301f-463f-8f52-fc6628878c1f'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-d131cb10-301f-463f-8f52-fc6628878c1f';
  $pane = new stdClass();
  $pane->pid = 'new-fc8c8601-097e-46ef-bc4f-d270bd4217d1';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_service_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'field_multiple_limit' => '-1',
      'field_multiple_limit_offset' => '0',
      'field_multiple_limit_order' => '0',
      'view_mode' => 'show_this_block',
      'links' => 1,
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
  $pane->uuid = 'fc8c8601-097e-46ef-bc4f-d270bd4217d1';
  $display->content['new-fc8c8601-097e-46ef-bc4f-d270bd4217d1'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-fc8c8601-097e-46ef-bc4f-d270bd4217d1';
  $pane = new stdClass();
  $pane->pid = 'new-aef2a729-d00a-4f0d-8cce-d2d5ae30d7a9';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'field_multiple_limit' => '-1',
      'field_multiple_limit_offset' => '0',
      'field_multiple_limit_order' => '0',
      'view_mode' => 'show_this_block',
      'links' => 1,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'aef2a729-d00a-4f0d-8cce-d2d5ae30d7a9';
  $display->content['new-aef2a729-d00a-4f0d-8cce-d2d5ae30d7a9'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-aef2a729-d00a-4f0d-8cce-d2d5ae30d7a9';
  $pane = new stdClass();
  $pane->pid = 'new-5b909cec-42bd-45ab-97ce-0f4755482d24';
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
  $pane->css = array(
    'css_id' => 'primary-cta-form',
    'css_class' => 'cta-form',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5b909cec-42bd-45ab-97ce-0f4755482d24';
  $display->content['new-5b909cec-42bd-45ab-97ce-0f4755482d24'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-5b909cec-42bd-45ab-97ce-0f4755482d24';
  $pane = new stdClass();
  $pane->pid = 'new-d7129c9f-b32a-4a86-a80e-891e37e2897e';
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
  $pane->uuid = 'd7129c9f-b32a-4a86-a80e-891e37e2897e';
  $display->content['new-d7129c9f-b32a-4a86-a80e-891e37e2897e'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-d7129c9f-b32a-4a86-a80e-891e37e2897e';
  $pane = new stdClass();
  $pane->pid = 'new-102bb160-7eb5-4093-b985-a1282568c0ce';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_case_study';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'show_this_block',
      'links' => 0,
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
  $pane->uuid = '102bb160-7eb5-4093-b985-a1282568c0ce';
  $display->content['new-102bb160-7eb5-4093-b985-a1282568c0ce'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-102bb160-7eb5-4093-b985-a1282568c0ce';
  $pane = new stdClass();
  $pane->pid = 'new-44a6fe9d-5601-4f20-8a7f-1348ea6a1298';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'show_this_block',
      'links' => 1,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '44a6fe9d-5601-4f20-8a7f-1348ea6a1298';
  $display->content['new-44a6fe9d-5601-4f20-8a7f-1348ea6a1298'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-44a6fe9d-5601-4f20-8a7f-1348ea6a1298';
  $pane = new stdClass();
  $pane->pid = 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6';
  $pane->panel = 'two_66_33_top';
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
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
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
  $pane->uuid = 'e0d93093-20b4-42cd-bf23-6f2f487240a6';
  $display->content['new-e0d93093-20b4-42cd-bf23-6f2f487240a6'] = $pane;
  $display->panels['two_66_33_top'][0] = 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_page:home_default'] = $panelizer;

  return $export;
}
