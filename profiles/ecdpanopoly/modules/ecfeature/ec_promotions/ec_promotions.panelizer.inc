<?php
/**
 * @file
 * ec_promotions.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_promotions_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:promotion:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'promotion';
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
  $display->title = '';
  $display->uuid = '76d2898c-437c-4922-8a9c-8ed623d7c870';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e0df6a1-3953-45b7-9e5e-11f88619bec6';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_promotion_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'image_link' => '',
      'image_style' => 'sc_780x585',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e0df6a1-3953-45b7-9e5e-11f88619bec6';
  $display->content['new-2e0df6a1-3953-45b7-9e5e-11f88619bec6'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-2e0df6a1-3953-45b7-9e5e-11f88619bec6';
  $pane = new stdClass();
  $pane->pid = 'new-293a10f9-566c-4313-84d4-9eb1d9a2129f';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'title_style' => 'h2',
      'title_link' => '',
      'title_class' => 'title',
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
  $pane->uuid = '293a10f9-566c-4313-84d4-9eb1d9a2129f';
  $display->content['new-293a10f9-566c-4313-84d4-9eb1d9a2129f'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-293a10f9-566c-4313-84d4-9eb1d9a2129f';
  $pane = new stdClass();
  $pane->pid = 'new-4ef52184-b3e7-4bd5-9a78-f78eff423ce1';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_subtitle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'title_style' => 'h3',
      'title_link' => '',
      'title_class' => 'sub-title',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4ef52184-b3e7-4bd5-9a78-f78eff423ce1';
  $display->content['new-4ef52184-b3e7-4bd5-9a78-f78eff423ce1'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-4ef52184-b3e7-4bd5-9a78-f78eff423ce1';
  $pane = new stdClass();
  $pane->pid = 'new-f46528d4-cc1b-4cec-b7eb-820a2329c48d';
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
  $pane->uuid = 'f46528d4-cc1b-4cec-b7eb-820a2329c48d';
  $display->content['new-f46528d4-cc1b-4cec-b7eb-820a2329c48d'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-f46528d4-cc1b-4cec-b7eb-820a2329c48d';
  $pane = new stdClass();
  $pane->pid = 'new-87e6d985-b80c-4782-9181-b1854eeae406';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '87e6d985-b80c-4782-9181-b1854eeae406';
  $display->content['new-87e6d985-b80c-4782-9181-b1854eeae406'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-87e6d985-b80c-4782-9181-b1854eeae406';
  $pane = new stdClass();
  $pane->pid = 'new-5ff0e224-f540-4414-9404-10245556dba9';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_display_startend';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
      'show_remaining_days' => 1,
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Promotion Days Left',
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
  $pane->uuid = '5ff0e224-f540-4414-9404-10245556dba9';
  $display->content['new-5ff0e224-f540-4414-9404-10245556dba9'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-5ff0e224-f540-4414-9404-10245556dba9';
  $pane = new stdClass();
  $pane->pid = 'new-d0aaf404-8c38-4f01-ade9-ebd2e75d9aae';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_promo_case_study';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'link' => FALSE,
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
  $pane->uuid = 'd0aaf404-8c38-4f01-ade9-ebd2e75d9aae';
  $display->content['new-d0aaf404-8c38-4f01-ade9-ebd2e75d9aae'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-d0aaf404-8c38-4f01-ade9-ebd2e75d9aae';
  $pane = new stdClass();
  $pane->pid = 'new-f9d99927-5258-4486-b3bb-2643d502c2f6';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_promotion_product';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'link' => FALSE,
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
  $pane->uuid = 'f9d99927-5258-4486-b3bb-2643d502c2f6';
  $display->content['new-f9d99927-5258-4486-b3bb-2643d502c2f6'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-f9d99927-5258-4486-b3bb-2643d502c2f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:promotion:default:default'] = $panelizer;

  return $export;
}
