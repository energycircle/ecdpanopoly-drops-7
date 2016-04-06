<?php
/**
 * @file
 * ec_blog_post.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_blog_post_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog_post:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog_post';
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
  $display->uuid = '4d6c27ae-a139-405a-83d7-1c9643efe410';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2fd4f329-cd19-4918-835a-d5ad299b322b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'block';
  $pane->subtype = 'sharethis-sharethis_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '2fd4f329-cd19-4918-835a-d5ad299b322b';
  $display->content['new-2fd4f329-cd19-4918-835a-d5ad299b322b'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-2fd4f329-cd19-4918-835a-d5ad299b322b';
  $pane = new stdClass();
  $pane->pid = 'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_image';
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
  $pane->uuid = 'e59aa6d9-c0b5-42fa-8fda-f448f54061c9';
  $display->content['new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9';
  $pane = new stdClass();
  $pane->pid = 'new-f9de1328-2b92-49ef-b109-11a59b997651';
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
  $pane->uuid = 'f9de1328-2b92-49ef-b109-11a59b997651';
  $display->content['new-f9de1328-2b92-49ef-b109-11a59b997651'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-f9de1328-2b92-49ef-b109-11a59b997651';
  $pane = new stdClass();
  $pane->pid = 'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97';
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
  $pane->uuid = '51b0ebb9-27c4-4fc8-aee6-5ec05832ad97';
  $display->content['new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97';
  $pane = new stdClass();
  $pane->pid = 'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'promotions-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'nodes',
    'header_type' => 'none',
    'view_mode' => 'show_this_block',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd10018c-d753-4216-8fb0-b9aa4e519c4d';
  $display->content['new-dd10018c-d753-4216-8fb0-b9aa4e519c4d'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:blog_post:default:default'] = $panelizer;

  return $export;
}
