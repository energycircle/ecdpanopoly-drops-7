<?php
/**
 * @file
 * ec_service_stack.features.uuid_panelizer.inc
 */

/**
 * Implements hook_uuid_features_default_panelizer().
 */
function ec_service_stack_uuid_features_default_panelizer() {
  $uuid_panelizer = array();

  // Modified panelizer display for node b89ebaed-31eb-4807-8c68-ccb85e55d1ca.
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10c9e351-f69c-4629-b191-77b8b01f4f1c';
  $display->storage_type = 'panelizer_entity';
  $display->storage_id = 'node:6:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6';
  $pane->panel = 'two_66_33_first';
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
  $display->panels['two_66_33_first'][0] = 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6';
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
  $pane->pid = 'new-ea5fc452-a5e6-4dfa-aa5a-7846bb74c38b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'custom';
  $pane->subtype = 'anchor_link_to_schedule_service_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'element-invisible',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ea5fc452-a5e6-4dfa-aa5a-7846bb74c38b';
  $display->content['new-ea5fc452-a5e6-4dfa-aa5a-7846bb74c38b'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-ea5fc452-a5e6-4dfa-aa5a-7846bb74c38b';
  $pane = new stdClass();
  $pane->pid = 'new-fec2be4c-f5b1-4466-98d0-6cd3c4d1c60d';
  $pane->panel = 'two_66_33_first';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fec2be4c-f5b1-4466-98d0-6cd3c4d1c60d';
  $display->content['new-fec2be4c-f5b1-4466-98d0-6cd3c4d1c60d'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-fec2be4c-f5b1-4466-98d0-6cd3c4d1c60d';
  $pane = new stdClass();
  $pane->pid = 'new-02325551-6f68-40b1-a84d-1d2b41f12947';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_faq';
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
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '02325551-6f68-40b1-a84d-1d2b41f12947';
  $display->content['new-02325551-6f68-40b1-a84d-1d2b41f12947'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-02325551-6f68-40b1-a84d-1d2b41f12947';
  $pane = new stdClass();
  $pane->pid = 'new-40aa6b49-b426-44f7-b973-afccbf175e90';
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
      'links' => 0,
    ),
    'context' => array(),
    'override_title' => 1,
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
  $pane->uuid = '40aa6b49-b426-44f7-b973-afccbf175e90';
  $display->content['new-40aa6b49-b426-44f7-b973-afccbf175e90'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-40aa6b49-b426-44f7-b973-afccbf175e90';
  $pane = new stdClass();
  $pane->pid = 'new-b092ecee-3927-49a1-9bf0-2fa9e3d8f628';
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
    'context' => array(),
    'override_title' => 1,
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
  $pane->uuid = 'b092ecee-3927-49a1-9bf0-2fa9e3d8f628';
  $display->content['new-b092ecee-3927-49a1-9bf0-2fa9e3d8f628'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-b092ecee-3927-49a1-9bf0-2fa9e3d8f628';
  $pane = new stdClass();
  $pane->pid = 'new-add1b6a9-eb1e-4ecb-a30d-cf9915bb50de';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_promotions';
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
    'context' => array(),
    'override_title' => 1,
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
  $pane->uuid = 'add1b6a9-eb1e-4ecb-a30d-cf9915bb50de';
  $display->content['new-add1b6a9-eb1e-4ecb-a30d-cf9915bb50de'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-add1b6a9-eb1e-4ecb-a30d-cf9915bb50de';
  $pane = new stdClass();
  $pane->pid = 'new-5b6d419e-2f7d-4821-8d27-d1ed9be31906';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_page_testimonial';
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
    'context' => array(),
    'override_title' => 1,
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
  $pane->uuid = '5b6d419e-2f7d-4821-8d27-d1ed9be31906';
  $display->content['new-5b6d419e-2f7d-4821-8d27-d1ed9be31906'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-5b6d419e-2f7d-4821-8d27-d1ed9be31906';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $uuid_panelizer[] = $display;

  return $uuid_panelizer;
}
