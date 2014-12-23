<?php
/**
 * @file
 * ec_product_page_lite.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_product_page_lite_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:product_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'product_page';
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
  $display->uuid = '86b5a5ec-9d79-44cd-a03c-10c506679813';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-906e0203-182d-4d29-9c7a-974565c079cd';
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
      'formatter_settings' => array(),
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
    $pane->uuid = '906e0203-182d-4d29-9c7a-974565c079cd';
    $display->content['new-906e0203-182d-4d29-9c7a-974565c079cd'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-906e0203-182d-4d29-9c7a-974565c079cd';
    $pane = new stdClass();
    $pane->pid = 'new-d17a9d6f-1030-479a-94aa-272ff9f011b6';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd17a9d6f-1030-479a-94aa-272ff9f011b6';
    $display->content['new-d17a9d6f-1030-479a-94aa-272ff9f011b6'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-d17a9d6f-1030-479a-94aa-272ff9f011b6';
    $pane = new stdClass();
    $pane->pid = 'new-0842dd9c-13bd-4eba-9901-6a40379ca790';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_product_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'sc_460x230',
        'image_link' => '',
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
    $pane->uuid = '0842dd9c-13bd-4eba-9901-6a40379ca790';
    $display->content['new-0842dd9c-13bd-4eba-9901-6a40379ca790'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-0842dd9c-13bd-4eba-9901-6a40379ca790';
    $pane = new stdClass();
    $pane->pid = 'new-e434b378-875d-48c6-a8f8-9263eefa3a3b';
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
    $pane->uuid = 'e434b378-875d-48c6-a8f8-9263eefa3a3b';
    $display->content['new-e434b378-875d-48c6-a8f8-9263eefa3a3b'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-e434b378-875d-48c6-a8f8-9263eefa3a3b';
    $pane = new stdClass();
    $pane->pid = 'new-c7a398a1-40d5-45f5-afc4-997c09b64e3c';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_technical_data_table';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c7a398a1-40d5-45f5-afc4-997c09b64e3c';
    $display->content['new-c7a398a1-40d5-45f5-afc4-997c09b64e3c'] = $pane;
    $display->panels['two_66_33_first'][4] = 'new-c7a398a1-40d5-45f5-afc4-997c09b64e3c';
    $pane = new stdClass();
    $pane->pid = 'new-201c067f-2685-4fd0-a1e4-ab43ecdc2edf';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_prodpage_faq';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => array(),
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
    $pane->uuid = '201c067f-2685-4fd0-a1e4-ab43ecdc2edf';
    $display->content['new-201c067f-2685-4fd0-a1e4-ab43ecdc2edf'] = $pane;
    $display->panels['two_66_33_first'][5] = 'new-201c067f-2685-4fd0-a1e4-ab43ecdc2edf';
    $pane = new stdClass();
    $pane->pid = 'new-7926e138-b9bf-4679-8f24-658319ae9ca9';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'faq_s-panel_pane_3';
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
    $pane->uuid = '7926e138-b9bf-4679-8f24-658319ae9ca9';
    $display->content['new-7926e138-b9bf-4679-8f24-658319ae9ca9'] = $pane;
    $display->panels['two_66_33_first'][6] = 'new-7926e138-b9bf-4679-8f24-658319ae9ca9';
    $pane = new stdClass();
    $pane->pid = 'new-3abda055-de55-4029-952a-bb1330810a6b';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-auxiliary-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-auxiliary-menu',
      'parent_mlid' => 1680,
      'parent' => 'menu-auxiliary-menu:1680',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => 'Resources',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3abda055-de55-4029-952a-bb1330810a6b';
    $display->content['new-3abda055-de55-4029-952a-bb1330810a6b'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-3abda055-de55-4029-952a-bb1330810a6b';
    $pane = new stdClass();
    $pane->pid = 'new-9964b6d0-3da5-4828-b676-6f86a44db2ef';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9964b6d0-3da5-4828-b676-6f86a44db2ef';
    $display->content['new-9964b6d0-3da5-4828-b676-6f86a44db2ef'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-9964b6d0-3da5-4828-b676-6f86a44db2ef';
    $pane = new stdClass();
    $pane->pid = 'new-aeb96f2f-e34a-452b-a191-4404c7082ca4';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'aeb96f2f-e34a-452b-a191-4404c7082ca4';
    $display->content['new-aeb96f2f-e34a-452b-a191-4404c7082ca4'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-aeb96f2f-e34a-452b-a191-4404c7082ca4';
    $pane = new stdClass();
    $pane->pid = 'new-ea5fdfaf-771f-4572-8df2-95682aaff975';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_call_to_action';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ea5fdfaf-771f-4572-8df2-95682aaff975';
    $display->content['new-ea5fdfaf-771f-4572-8df2-95682aaff975'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-ea5fdfaf-771f-4572-8df2-95682aaff975';
    $pane = new stdClass();
    $pane->pid = 'new-f5cdc6ef-7548-4eba-b4fb-912398f8d884';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_to_cta_form';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'default',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f5cdc6ef-7548-4eba-b4fb-912398f8d884';
    $display->content['new-f5cdc6ef-7548-4eba-b4fb-912398f8d884'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-f5cdc6ef-7548-4eba-b4fb-912398f8d884';
    $pane = new stdClass();
    $pane->pid = 'new-7fc99968-2d2e-4f73-bbda-ca9ab8b0efc4';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_button_text';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7fc99968-2d2e-4f73-bbda-ca9ab8b0efc4';
    $display->content['new-7fc99968-2d2e-4f73-bbda-ca9ab8b0efc4'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-7fc99968-2d2e-4f73-bbda-ca9ab8b0efc4';
    $pane = new stdClass();
    $pane->pid = 'new-06d7d592-1db0-4d17-bb53-a0c832a2f5ed';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_prodpage_promotion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '3',
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
      'css_id' => 'show-this-promotion',
      'css_class' => 'promotion',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '06d7d592-1db0-4d17-bb53-a0c832a2f5ed';
    $display->content['new-06d7d592-1db0-4d17-bb53-a0c832a2f5ed'] = $pane;
    $display->panels['two_66_33_second'][6] = 'new-06d7d592-1db0-4d17-bb53-a0c832a2f5ed';
    $pane = new stdClass();
    $pane->pid = 'new-da521c4c-48b2-4572-a154-154ef415799d';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_product_technical_docs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 1,
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'da521c4c-48b2-4572-a154-154ef415799d';
    $display->content['new-da521c4c-48b2-4572-a154-154ef415799d'] = $pane;
    $display->panels['two_66_33_second'][7] = 'new-da521c4c-48b2-4572-a154-154ef415799d';
    $pane = new stdClass();
    $pane->pid = 'new-2213eddb-073a-47cc-85e9-46d18883d97a';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_product_diagram';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 1,
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '2213eddb-073a-47cc-85e9-46d18883d97a';
    $display->content['new-2213eddb-073a-47cc-85e9-46d18883d97a'] = $pane;
    $display->panels['two_66_33_second'][8] = 'new-2213eddb-073a-47cc-85e9-46d18883d97a';
    $pane = new stdClass();
    $pane->pid = 'new-7f6384e2-f861-4a86-bf66-c8f11f9645ff';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_prodpage_testimonial';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
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
      'css_id' => 'show-this-testimonial',
      'css_class' => 'testimonial',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '7f6384e2-f861-4a86-bf66-c8f11f9645ff';
    $display->content['new-7f6384e2-f861-4a86-bf66-c8f11f9645ff'] = $pane;
    $display->panels['two_66_33_second'][9] = 'new-7f6384e2-f861-4a86-bf66-c8f11f9645ff';
    $pane = new stdClass();
    $pane->pid = 'new-bd20692f-5387-4121-bac5-b7064f547dd5';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_prodpage_case_study';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'bd20692f-5387-4121-bac5-b7064f547dd5';
    $display->content['new-bd20692f-5387-4121-bac5-b7064f547dd5'] = $pane;
    $display->panels['two_66_33_second'][10] = 'new-bd20692f-5387-4121-bac5-b7064f547dd5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:product_page:default:default'] = $panelizer;

  return $export;
}
