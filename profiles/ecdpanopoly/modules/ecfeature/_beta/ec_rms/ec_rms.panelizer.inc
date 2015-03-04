<?php
/**
 * @file
 * ec_rms.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_rms_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ec_review:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ec_review';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '74535d6e-4e5a-4006-9a52-d1ad8af7075d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-124a7ddf-bbc7-4d50-9ec4-c4e50dcc8aae';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_rating';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '124a7ddf-bbc7-4d50-9ec4-c4e50dcc8aae';
    $display->content['new-124a7ddf-bbc7-4d50-9ec4-c4e50dcc8aae'] = $pane;
    $display->panels['center'][0] = 'new-124a7ddf-bbc7-4d50-9ec4-c4e50dcc8aae';
    $pane = new stdClass();
    $pane->pid = 'new-4f1bdd7b-0bb9-4f57-9b3a-1cf9cd1beb9b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_first_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4f1bdd7b-0bb9-4f57-9b3a-1cf9cd1beb9b';
    $display->content['new-4f1bdd7b-0bb9-4f57-9b3a-1cf9cd1beb9b'] = $pane;
    $display->panels['center'][1] = 'new-4f1bdd7b-0bb9-4f57-9b3a-1cf9cd1beb9b';
    $pane = new stdClass();
    $pane->pid = 'new-a65ffa65-75f7-49f2-8933-223e5785619b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_last_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a65ffa65-75f7-49f2-8933-223e5785619b';
    $display->content['new-a65ffa65-75f7-49f2-8933-223e5785619b'] = $pane;
    $display->panels['center'][2] = 'new-a65ffa65-75f7-49f2-8933-223e5785619b';
    $pane = new stdClass();
    $pane->pid = 'new-06597459-ff46-42c2-b145-1daf395efcb9';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_city';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06597459-ff46-42c2-b145-1daf395efcb9';
    $display->content['new-06597459-ff46-42c2-b145-1daf395efcb9'] = $pane;
    $display->panels['center'][3] = 'new-06597459-ff46-42c2-b145-1daf395efcb9';
    $pane = new stdClass();
    $pane->pid = 'new-e72b4e47-0481-40d9-ba20-0462e353b8ba';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'email_default',
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e72b4e47-0481-40d9-ba20-0462e353b8ba';
    $display->content['new-e72b4e47-0481-40d9-ba20-0462e353b8ba'] = $pane;
    $display->panels['center'][4] = 'new-e72b4e47-0481-40d9-ba20-0462e353b8ba';
    $pane = new stdClass();
    $pane->pid = 'new-d0d177cf-444b-40af-a853-201c2abbf288';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_site_review';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0d177cf-444b-40af-a853-201c2abbf288';
    $display->content['new-d0d177cf-444b-40af-a853-201c2abbf288'] = $pane;
    $display->panels['center'][5] = 'new-d0d177cf-444b-40af-a853-201c2abbf288';
    $pane = new stdClass();
    $pane->pid = 'new-9e4d15c3-a937-4338-b1ce-07ef4a3a7caa';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_message';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e4d15c3-a937-4338-b1ce-07ef4a3a7caa';
    $display->content['new-9e4d15c3-a937-4338-b1ce-07ef4a3a7caa'] = $pane;
    $display->panels['center'][6] = 'new-9e4d15c3-a937-4338-b1ce-07ef4a3a7caa';
    $pane = new stdClass();
    $pane->pid = 'new-85ce9ff0-95b2-40b7-99f1-491b0dfb6b7b';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85ce9ff0-95b2-40b7-99f1-491b0dfb6b7b';
    $display->content['new-85ce9ff0-95b2-40b7-99f1-491b0dfb6b7b'] = $pane;
    $display->panels['center'][7] = 'new-85ce9ff0-95b2-40b7-99f1-491b0dfb6b7b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-85ce9ff0-95b2-40b7-99f1-491b0dfb6b7b';
  $panelizer->display = $display;
  $export['node:ec_review:default:default'] = $panelizer;

  return $export;
}
