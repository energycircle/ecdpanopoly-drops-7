<?php
/**
 * @file
 * ec_casestudy.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_casestudy_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:case_study:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'case_study';
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
  $display->uuid = '9b6d31e0-208c-4611-bdc5-bffccf65190d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_slideshow_carousel-panel_pane_1';
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
    $pane->uuid = '85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2';
    $display->content['new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2';
    $pane = new stdClass();
    $pane->pid = 'new-1126786f-4c05-4a8e-b5cc-2d078e0e3147';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_slideshow_carousel-panel_pane_2';
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
    $pane->uuid = '1126786f-4c05-4a8e-b5cc-2d078e0e3147';
    $display->content['new-1126786f-4c05-4a8e-b5cc-2d078e0e3147'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-1126786f-4c05-4a8e-b5cc-2d078e0e3147';
    $pane = new stdClass();
    $pane->pid = 'new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd';
    $pane->panel = 'two_66_33_first';
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
    $pane->uuid = '9d978697-58b3-48a3-8879-6f3b3ad3b5dd';
    $display->content['new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd';
    $pane = new stdClass();
    $pane->pid = 'new-905e2642-3f3f-49d4-923f-0dd613a046b1';
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
      'override_title' => 0,
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
    $pane->uuid = '905e2642-3f3f-49d4-923f-0dd613a046b1';
    $display->content['new-905e2642-3f3f-49d4-923f-0dd613a046b1'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-905e2642-3f3f-49d4-923f-0dd613a046b1';
    $pane = new stdClass();
    $pane->pid = 'new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6';
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
    $pane->uuid = 'b84ebfba-7d4c-40cb-b4dc-488daad43ae6';
    $display->content['new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6'] = $pane;
    $display->panels['two_66_33_first'][4] = 'new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6';
    $pane = new stdClass();
    $pane->pid = 'new-ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_case_study_promo';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7';
    $display->content['new-ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7';
    $pane = new stdClass();
    $pane->pid = 'new-a994a6bf-39d7-4a27-84b8-b8d9bb69e01d';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_case_study_blog';
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
      'css_id' => 'show-this-blog',
      'css_class' => 'blog',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a994a6bf-39d7-4a27-84b8-b8d9bb69e01d';
    $display->content['new-a994a6bf-39d7-4a27-84b8-b8d9bb69e01d'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-a994a6bf-39d7-4a27-84b8-b8d9bb69e01d';
    $pane = new stdClass();
    $pane->pid = 'new-fdbc7a34-cead-499c-8d11-202036463854';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_case_study_testimonial';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fdbc7a34-cead-499c-8d11-202036463854';
    $display->content['new-fdbc7a34-cead-499c-8d11-202036463854'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-fdbc7a34-cead-499c-8d11-202036463854';
    $pane = new stdClass();
    $pane->pid = 'new-9ae886c7-fd0a-431c-adfa-1358ed3c0db4';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_case_study_prodpage';
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
    $pane->uuid = '9ae886c7-fd0a-431c-adfa-1358ed3c0db4';
    $display->content['new-9ae886c7-fd0a-431c-adfa-1358ed3c0db4'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-9ae886c7-fd0a-431c-adfa-1358ed3c0db4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6';
  $panelizer->display = $display;
  $export['node:case_study:default:default'] = $panelizer;

  return $export;
}
