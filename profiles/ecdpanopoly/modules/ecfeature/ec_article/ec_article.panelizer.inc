<?php
/**
 * @file
 * ec_article.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_article_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
  $display->uuid = 'db7980d7-e91c-4212-afed-87dfc118f603';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_display_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'panopoly_day',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3';
    $display->content['new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3';
    $pane = new stdClass();
    $pane->pid = 'new-71d6548e-7dea-44d2-85da-6522a6f72bd5';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_author';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '71d6548e-7dea-44d2-85da-6522a6f72bd5';
    $display->content['new-71d6548e-7dea-44d2-85da-6522a6f72bd5'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-71d6548e-7dea-44d2-85da-6522a6f72bd5';
    $pane = new stdClass();
    $pane->pid = 'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->uuid = 'fb766eaf-df62-44a2-ae1e-7d3db8d4db0e';
    $display->content['new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e';
    $pane = new stdClass();
    $pane->pid = 'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998';
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
    $pane->uuid = '4c95fbc1-06d5-4581-ad35-7c0de6a24998';
    $display->content['new-4c95fbc1-06d5-4581-ad35-7c0de6a24998'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998';
    $pane = new stdClass();
    $pane->pid = 'new-9fb8740b-980b-4914-91b5-5daca474f7d9';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->uuid = '9fb8740b-980b-4914-91b5-5daca474f7d9';
    $display->content['new-9fb8740b-980b-4914-91b5-5daca474f7d9'] = $pane;
    $display->panels['two_66_33_first'][4] = 'new-9fb8740b-980b-4914-91b5-5daca474f7d9';
    $pane = new stdClass();
    $pane->pid = 'new-4422fd08-749a-4717-bf82-bb6642306f9d';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_article_promo';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4422fd08-749a-4717-bf82-bb6642306f9d';
    $display->content['new-4422fd08-749a-4717-bf82-bb6642306f9d'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-4422fd08-749a-4717-bf82-bb6642306f9d';
    $pane = new stdClass();
    $pane->pid = 'new-64238565-3e44-408e-ba42-672dd0c33612';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_article_blog';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64238565-3e44-408e-ba42-672dd0c33612';
    $display->content['new-64238565-3e44-408e-ba42-672dd0c33612'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-64238565-3e44-408e-ba42-672dd0c33612';
    $pane = new stdClass();
    $pane->pid = 'new-179ea74a-f401-4a20-8441-6fde6c8d29bb';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ref_article_testimonial';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '179ea74a-f401-4a20-8441-6fde6c8d29bb';
    $display->content['new-179ea74a-f401-4a20-8441-6fde6c8d29bb'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-179ea74a-f401-4a20-8441-6fde6c8d29bb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:article:default:default'] = $panelizer;

  return $export;
}
