<?php
/**
 * @file
 * ec_product_page_category.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_product_page_category_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:product_category:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'product_category';
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
  $display->uuid = '9df3b6b2-4089-4461-bfb6-d2f30657ac7a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06c9c28b-206e-4848-bb1f-0de55885443e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_title';
  $pane->shown = FALSE;
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
  $pane->uuid = '06c9c28b-206e-4848-bb1f-0de55885443e';
  $display->content['new-06c9c28b-206e-4848-bb1f-0de55885443e'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-06c9c28b-206e-4848-bb1f-0de55885443e';
  $pane = new stdClass();
  $pane->pid = 'new-e2b30aaf-0043-47f5-8bb9-a6e6a9e97eac';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e2b30aaf-0043-47f5-8bb9-a6e6a9e97eac';
  $display->content['new-e2b30aaf-0043-47f5-8bb9-a6e6a9e97eac'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-e2b30aaf-0043-47f5-8bb9-a6e6a9e97eac';
  $pane = new stdClass();
  $pane->pid = 'new-39b5a166-b1f4-4ba5-8e2d-8055203c0a00';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product_category_image';
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
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '39b5a166-b1f4-4ba5-8e2d-8055203c0a00';
  $display->content['new-39b5a166-b1f4-4ba5-8e2d-8055203c0a00'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-39b5a166-b1f4-4ba5-8e2d-8055203c0a00';
  $pane = new stdClass();
  $pane->pid = 'new-2a6201a2-c4f8-42a7-98b9-1cc9bfae51d8';
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
  $pane->uuid = '2a6201a2-c4f8-42a7-98b9-1cc9bfae51d8';
  $display->content['new-2a6201a2-c4f8-42a7-98b9-1cc9bfae51d8'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-2a6201a2-c4f8-42a7-98b9-1cc9bfae51d8';
  $pane = new stdClass();
  $pane->pid = 'new-591b7782-a3d6-4620-8de4-5fa5063dbefe';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_prodcat_product';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'view_mode' => 'teaser',
      'links' => 1,
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '591b7782-a3d6-4620-8de4-5fa5063dbefe';
  $display->content['new-591b7782-a3d6-4620-8de4-5fa5063dbefe'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-591b7782-a3d6-4620-8de4-5fa5063dbefe';
  $pane = new stdClass();
  $pane->pid = 'new-de37128d-7e8d-4296-82bb-ed1ec5613e43';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_prodcat_faq';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'view_mode' => 'show_this_block',
      'links' => 1,
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'FAQs',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'de37128d-7e8d-4296-82bb-ed1ec5613e43';
  $display->content['new-de37128d-7e8d-4296-82bb-ed1ec5613e43'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-de37128d-7e8d-4296-82bb-ed1ec5613e43';
  $pane = new stdClass();
  $pane->pid = 'new-14c35b18-55b2-448c-83cc-c557a40d59da';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'faq_s-panel_pane_1';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '14c35b18-55b2-448c-83cc-c557a40d59da';
  $display->content['new-14c35b18-55b2-448c-83cc-c557a40d59da'] = $pane;
  $display->panels['two_66_33_first'][6] = 'new-14c35b18-55b2-448c-83cc-c557a40d59da';
  $pane = new stdClass();
  $pane->pid = 'new-b56ee1dc-32a9-49a9-8e9d-9f38c1d7f269';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'main-menu',
    'parent_mlid' => 0,
    'parent' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'expanded' => 0,
    'sort' => 0,
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
  $pane->uuid = 'b56ee1dc-32a9-49a9-8e9d-9f38c1d7f269';
  $display->content['new-b56ee1dc-32a9-49a9-8e9d-9f38c1d7f269'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-b56ee1dc-32a9-49a9-8e9d-9f38c1d7f269';
  $pane = new stdClass();
  $pane->pid = 'new-5546081f-fc61-4432-b647-56d8d8d26bad';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5546081f-fc61-4432-b647-56d8d8d26bad';
  $display->content['new-5546081f-fc61-4432-b647-56d8d8d26bad'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-5546081f-fc61-4432-b647-56d8d8d26bad';
  $pane = new stdClass();
  $pane->pid = 'new-72b52271-8a52-4e12-b6d2-06bcfac58d29';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_call_to_action';
  $pane->shown = FALSE;
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
    'override_title' => 1,
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
  $pane->uuid = '72b52271-8a52-4e12-b6d2-06bcfac58d29';
  $display->content['new-72b52271-8a52-4e12-b6d2-06bcfac58d29'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-72b52271-8a52-4e12-b6d2-06bcfac58d29';
  $pane = new stdClass();
  $pane->pid = 'new-35b44996-386d-440b-b6bd-c74ceba0e9f1';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_to_cta_form';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 0,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'view_mode' => 'default',
      'links' => 1,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '35b44996-386d-440b-b6bd-c74ceba0e9f1';
  $display->content['new-35b44996-386d-440b-b6bd-c74ceba0e9f1'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-35b44996-386d-440b-b6bd-c74ceba0e9f1';
  $pane = new stdClass();
  $pane->pid = 'new-5add12d3-6c8c-492c-8319-4a321f1210a4';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_button_text';
  $pane->shown = FALSE;
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '5add12d3-6c8c-492c-8319-4a321f1210a4';
  $display->content['new-5add12d3-6c8c-492c-8319-4a321f1210a4'] = $pane;
  $display->panels['two_66_33_second'][4] = 'new-5add12d3-6c8c-492c-8319-4a321f1210a4';
  $pane = new stdClass();
  $pane->pid = 'new-94f79f2f-2a6f-43fb-bd85-5a4d184c060a';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_prodcat_testimonial';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'view_mode' => 'show_this_block',
      'links' => 1,
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '94f79f2f-2a6f-43fb-bd85-5a4d184c060a';
  $display->content['new-94f79f2f-2a6f-43fb-bd85-5a4d184c060a'] = $pane;
  $display->panels['two_66_33_second'][5] = 'new-94f79f2f-2a6f-43fb-bd85-5a4d184c060a';
  $pane = new stdClass();
  $pane->pid = 'new-2217f707-df4f-4e30-a003-b86bf543dda1';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_prodcat_case_study';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'view_mode' => 'show_this_block',
      'links' => 1,
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '2217f707-df4f-4e30-a003-b86bf543dda1';
  $display->content['new-2217f707-df4f-4e30-a003-b86bf543dda1'] = $pane;
  $display->panels['two_66_33_second'][6] = 'new-2217f707-df4f-4e30-a003-b86bf543dda1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:product_category:default:default'] = $panelizer;

  return $export;
}
