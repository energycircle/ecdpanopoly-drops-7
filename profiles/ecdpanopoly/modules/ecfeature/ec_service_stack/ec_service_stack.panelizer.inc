<?php
/**
 * @file
 * ec_service_stack.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_service_stack_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:service:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'service';
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
  $display->uuid = 'f7cc83f7-2f8d-46eb-a673-c546879d7556';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a';
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
    'formatter_settings' => array(),
    'context' => array(),
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
  $pane->uuid = '2bbbd67c-11ce-478a-a099-2ad97e9b073a';
  $display->content['new-2bbbd67c-11ce-478a-a099-2ad97e9b073a'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a';
  $pane = new stdClass();
  $pane->pid = 'new-8841b1ce-b629-4aac-8eef-34d3f490a7d9';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'services_hero_image_or_video-panel_pane_2';
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
  $pane->uuid = '8841b1ce-b629-4aac-8eef-34d3f490a7d9';
  $display->content['new-8841b1ce-b629-4aac-8eef-34d3f490a7d9'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-8841b1ce-b629-4aac-8eef-34d3f490a7d9';
  $pane = new stdClass();
  $pane->pid = 'new-7fbb5182-cb1e-4409-9983-061ecfddda90';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_service_testimonial';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-testimonial',
    'css_class' => 'testimonial',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7fbb5182-cb1e-4409-9983-061ecfddda90';
  $display->content['new-7fbb5182-cb1e-4409-9983-061ecfddda90'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-7fbb5182-cb1e-4409-9983-061ecfddda90';
  $pane = new stdClass();
  $pane->pid = 'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe';
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
  $pane->uuid = '2349e6d6-b875-48ff-bd87-edaea74d1ffe';
  $display->content['new-2349e6d6-b875-48ff-bd87-edaea74d1ffe'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe';
  $pane = new stdClass();
  $pane->pid = 'new-8cd389e8-5945-46fb-a991-fb1c8fcef539';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'service_request-panel_pane_1';
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
  $pane->uuid = '8cd389e8-5945-46fb-a991-fb1c8fcef539';
  $display->content['new-8cd389e8-5945-46fb-a991-fb1c8fcef539'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-8cd389e8-5945-46fb-a991-fb1c8fcef539';
  $pane = new stdClass();
  $pane->pid = 'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_service_promo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '3',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-promotion',
    'css_class' => 'promotion',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0acfb0c6-6117-4a92-9fde-3a5c514a7705';
  $display->content['new-0acfb0c6-6117-4a92-9fde-3a5c514a7705'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705';
  $pane = new stdClass();
  $pane->pid = 'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_service_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-blog',
    'css_class' => 'blog',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2c425fad-2ae8-4f27-8e98-4c88451a4e2d';
  $display->content['new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d';
  $pane = new stdClass();
  $pane->pid = 'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_service_product';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-product',
    'css_class' => 'product',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0586ce34-9849-4c98-b0dd-1f2fe90daee6';
  $display->content['new-0586ce34-9849-4c98-b0dd-1f2fe90daee6'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:service:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:service:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'service';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'h3';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '91b16e23-2c1c-4138-af12-1e845d783f7d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_service_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 's_220',
      'image_link' => 'content',
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
  $pane->uuid = 'd036a5c1-1942-4a5f-a721-aab6855fb2d8';
  $display->content['new-d036a5c1-1942-4a5f-a721-aab6855fb2d8'] = $pane;
  $display->panels['one_main'][0] = 'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8';
  $pane = new stdClass();
  $pane->pid = 'new-e5a9a169-db20-47a2-90ff-cde2ee148aae';
  $pane->panel = 'one_main';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
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
  $pane->uuid = 'e5a9a169-db20-47a2-90ff-cde2ee148aae';
  $display->content['new-e5a9a169-db20-47a2-90ff-cde2ee148aae'] = $pane;
  $display->panels['one_main'][1] = 'new-e5a9a169-db20-47a2-90ff-cde2ee148aae';
  $pane = new stdClass();
  $pane->pid = 'new-0fddb420-f828-43a3-9740-0c6531d60091';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
    ),
    'context' => array(),
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
  $pane->uuid = '0fddb420-f828-43a3-9740-0c6531d60091';
  $display->content['new-0fddb420-f828-43a3-9740-0c6531d60091'] = $pane;
  $display->panels['one_main'][2] = 'new-0fddb420-f828-43a3-9740-0c6531d60091';
  $pane = new stdClass();
  $pane->pid = 'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8';
  $pane->panel = 'one_main';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'build_mode' => 'teaser',
    'identifier' => '',
    'link' => 0,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6f5bc7e9-5d44-481c-8a05-1f814e8686b8';
  $display->content['new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8'] = $pane;
  $display->panels['one_main'][3] = 'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:service:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:service_category:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'service_category';
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
  $display->uuid = 'dd665112-2817-499f-a514-7d66df2234b7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7';
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
    'formatter_settings' => array(),
    'context' => array(),
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
  $pane->uuid = '2a09c6c6-0795-474b-8bc0-b8f32541cfb7';
  $display->content['new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7';
  $pane = new stdClass();
  $pane->pid = 'new-836234b6-002c-4a77-9852-1ed8696db3f4';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'services_hero_image_or_video-panel_pane_3';
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
  $pane->uuid = '836234b6-002c-4a77-9852-1ed8696db3f4';
  $display->content['new-836234b6-002c-4a77-9852-1ed8696db3f4'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-836234b6-002c-4a77-9852-1ed8696db3f4';
  $pane = new stdClass();
  $pane->pid = 'new-86bb4783-e660-485e-b831-8b0ff370b14c';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_cat_testimonial';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-testimonial',
    'css_class' => 'testimonial',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '86bb4783-e660-485e-b831-8b0ff370b14c';
  $display->content['new-86bb4783-e660-485e-b831-8b0ff370b14c'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-86bb4783-e660-485e-b831-8b0ff370b14c';
  $pane = new stdClass();
  $pane->pid = 'new-c1f1828d-d832-46ec-8df9-26b177b38db4';
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
  $pane->uuid = 'c1f1828d-d832-46ec-8df9-26b177b38db4';
  $display->content['new-c1f1828d-d832-46ec-8df9-26b177b38db4'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-c1f1828d-d832-46ec-8df9-26b177b38db4';
  $pane = new stdClass();
  $pane->pid = 'new-36692d53-1b71-4103-b24a-47a46ef78eef';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_cat_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->uuid = '36692d53-1b71-4103-b24a-47a46ef78eef';
  $display->content['new-36692d53-1b71-4103-b24a-47a46ef78eef'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-36692d53-1b71-4103-b24a-47a46ef78eef';
  $pane = new stdClass();
  $pane->pid = 'new-32790dba-eb7b-443d-9a53-e22c1211b55f';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'service_request-panel_pane_1';
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
  $pane->uuid = '32790dba-eb7b-443d-9a53-e22c1211b55f';
  $display->content['new-32790dba-eb7b-443d-9a53-e22c1211b55f'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-32790dba-eb7b-443d-9a53-e22c1211b55f';
  $pane = new stdClass();
  $pane->pid = 'new-6de6e416-b49a-4fe8-97a3-39675e297072';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_cat_promo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '3',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-promotion',
    'css_class' => 'promotion',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6de6e416-b49a-4fe8-97a3-39675e297072';
  $display->content['new-6de6e416-b49a-4fe8-97a3-39675e297072'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-6de6e416-b49a-4fe8-97a3-39675e297072';
  $pane = new stdClass();
  $pane->pid = 'new-e329171e-67f0-4a90-ae1d-65f89eab5208';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_cat_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-blog',
    'css_class' => 'blog',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e329171e-67f0-4a90-ae1d-65f89eab5208';
  $display->content['new-e329171e-67f0-4a90-ae1d-65f89eab5208'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-e329171e-67f0-4a90-ae1d-65f89eab5208';
  $pane = new stdClass();
  $pane->pid = 'new-eb1df09e-bae4-4df0-a438-3705d6904c6e';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_cat_prodpage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-product',
    'css_class' => 'product',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'eb1df09e-bae4-4df0-a438-3705d6904c6e';
  $display->content['new-eb1df09e-bae4-4df0-a438-3705d6904c6e'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-eb1df09e-bae4-4df0-a438-3705d6904c6e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:service_category:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:service_category:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'service_category';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '82fa03eb-e4cb-4245-b092-a1ab5c64df63';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-152069b0-3dab-4707-a38c-63c31f81f81f';
  $pane->panel = 'one_main';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
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
  $pane->uuid = '152069b0-3dab-4707-a38c-63c31f81f81f';
  $display->content['new-152069b0-3dab-4707-a38c-63c31f81f81f'] = $pane;
  $display->panels['one_main'][0] = 'new-152069b0-3dab-4707-a38c-63c31f81f81f';
  $pane = new stdClass();
  $pane->pid = 'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_service_category_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'sc_220x110',
      'image_link' => 'content',
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
  $pane->uuid = 'c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9';
  $display->content['new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9'] = $pane;
  $display->panels['one_main'][1] = 'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9';
  $pane = new stdClass();
  $pane->pid = 'new-f427cd34-814a-408b-9033-7d56c19af2b2';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f427cd34-814a-408b-9033-7d56c19af2b2';
  $display->content['new-f427cd34-814a-408b-9033-7d56c19af2b2'] = $pane;
  $display->panels['one_main'][2] = 'new-f427cd34-814a-408b-9033-7d56c19af2b2';
  $pane = new stdClass();
  $pane->pid = 'new-72270395-d870-482e-ad03-4e27e231e361';
  $pane->panel = 'one_main';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'build_mode' => 'teaser',
    'identifier' => '',
    'link' => 0,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '72270395-d870-482e-ad03-4e27e231e361';
  $display->content['new-72270395-d870-482e-ad03-4e27e231e361'] = $pane;
  $display->panels['one_main'][3] = 'new-72270395-d870-482e-ad03-4e27e231e361';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:service_category:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:service_group:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'service_group';
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
  $display->uuid = '6458170d-fa20-4065-8f83-ba80ea7a8697';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7749ce23-624f-4fd1-8714-0551ea77ac89';
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
    'formatter_settings' => array(),
    'context' => array(),
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
  $pane->uuid = '7749ce23-624f-4fd1-8714-0551ea77ac89';
  $display->content['new-7749ce23-624f-4fd1-8714-0551ea77ac89'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-7749ce23-624f-4fd1-8714-0551ea77ac89';
  $pane = new stdClass();
  $pane->pid = 'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_service_group_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'sc_940x470_mc',
      'image_link' => '',
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
  $pane->uuid = '30aa08b5-cfaf-41ea-bc62-9f06ae363adf';
  $display->content['new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf';
  $pane = new stdClass();
  $pane->pid = 'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5d4b8c66-50fd-41a5-83cd-ffc752dc1a46';
  $display->content['new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46';
  $pane = new stdClass();
  $pane->pid = 'new-c2cd56a7-a538-4759-b284-b00245d5c599';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_group_serv_cat';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c2cd56a7-a538-4759-b284-b00245d5c599';
  $display->content['new-c2cd56a7-a538-4759-b284-b00245d5c599'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-c2cd56a7-a538-4759-b284-b00245d5c599';
  $pane = new stdClass();
  $pane->pid = 'new-df94c7ed-1fe9-429b-9e71-c76497b59c10';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'service_request-panel_pane_1';
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
  $pane->uuid = 'df94c7ed-1fe9-429b-9e71-c76497b59c10';
  $display->content['new-df94c7ed-1fe9-429b-9e71-c76497b59c10'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-df94c7ed-1fe9-429b-9e71-c76497b59c10';
  $pane = new stdClass();
  $pane->pid = 'new-30c9b0f7-ea8f-4740-87fb-78416629b679';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_group_promo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-promotion',
    'css_class' => 'promotion',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '30c9b0f7-ea8f-4740-87fb-78416629b679';
  $display->content['new-30c9b0f7-ea8f-4740-87fb-78416629b679'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-30c9b0f7-ea8f-4740-87fb-78416629b679';
  $pane = new stdClass();
  $pane->pid = 'new-81ff01eb-7091-4517-b84e-084082214b66';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_group_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'show_this_block',
      'links' => 1,
    ),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'show-this-blog',
    'css_class' => 'blog',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '81ff01eb-7091-4517-b84e-084082214b66';
  $display->content['new-81ff01eb-7091-4517-b84e-084082214b66'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-81ff01eb-7091-4517-b84e-084082214b66';
  $pane = new stdClass();
  $pane->pid = 'new-69397277-938f-4c83-b1c2-1457742d90df';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_group_testimonial';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
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
  $pane->css = array(
    'css_id' => 'show-this-testimonial',
    'css_class' => 'testimonial',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '69397277-938f-4c83-b1c2-1457742d90df';
  $display->content['new-69397277-938f-4c83-b1c2-1457742d90df'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-69397277-938f-4c83-b1c2-1457742d90df';
  $pane = new stdClass();
  $pane->pid = 'new-9a45da33-6da1-443b-bf00-006165f49042';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_serv_group_prodpage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'show_this_block',
      'links' => 1,
    ),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'show-this-product',
    'css_class' => 'product',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9a45da33-6da1-443b-bf00-006165f49042';
  $display->content['new-9a45da33-6da1-443b-bf00-006165f49042'] = $pane;
  $display->panels['two_66_33_second'][4] = 'new-9a45da33-6da1-443b-bf00-006165f49042';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46';
  $panelizer->display = $display;
  $export['node:service_group:default:default'] = $panelizer;

  return $export;
}
