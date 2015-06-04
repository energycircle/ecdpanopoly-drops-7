<?php
/**
 * @file
 * ec_distinction.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_distinction_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:distinction:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'distinction';
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
  $display->uuid = '0a03c29f-8d02-4a7a-8fa7-6d07c25b5718';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-46728b59-1212-4aab-949b-665c5f538f14';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 's_300',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46728b59-1212-4aab-949b-665c5f538f14';
  $display->content['new-46728b59-1212-4aab-949b-665c5f538f14'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-46728b59-1212-4aab-949b-665c5f538f14';
  $pane = new stdClass();
  $pane->pid = 'new-2b69c70a-f677-4119-82d2-4ac9d279837b';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2b69c70a-f677-4119-82d2-4ac9d279837b';
  $display->content['new-2b69c70a-f677-4119-82d2-4ac9d279837b'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-2b69c70a-f677-4119-82d2-4ac9d279837b';
  $pane = new stdClass();
  $pane->pid = 'new-0abeefb6-1d7b-4277-99cc-b7bf562a8bc2';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-auxiliary-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'menu-auxiliary-menu',
    'parent_mlid' => 1633,
    'parent' => 'menu-auxiliary-menu:1633',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '1',
    'expanded' => 0,
    'sort' => 0,
    'override_title' => 1,
    'override_title_text' => 'About',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0abeefb6-1d7b-4277-99cc-b7bf562a8bc2';
  $display->content['new-0abeefb6-1d7b-4277-99cc-b7bf562a8bc2'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-0abeefb6-1d7b-4277-99cc-b7bf562a8bc2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2b69c70a-f677-4119-82d2-4ac9d279837b';
  $panelizer->display = $display;
  $export['node:distinction:default:default'] = $panelizer;

  return $export;
}
