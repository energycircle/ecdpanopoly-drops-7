<?php
/**
 * @file
 * ec_redhen.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ec_redhen_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_redhen_profile_pages_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'redhen_profile_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Public View',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Content from Contact (on Contact: Events Attended [field_contact_events_attended])',
        'keyword' => 'node',
        'name' => 'entity_from_field:field_contact_events_attended-redhen_contact-node',
        'delta' => '0',
        'context' => 'argument_entity_id:redhen_contact_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'logic' => 'and',
    ),
  );
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
  $display->title = '%redhen_contact:full-name';
  $display->uuid = '5ad6ed0c-435d-4921-9561-3e3aa1fe8cb8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1ffb228c-4344-4235-a271-db16deffb2e4';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'redhen_contact:field_contact_bio';
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
  $pane->uuid = '1ffb228c-4344-4235-a271-db16deffb2e4';
  $display->content['new-1ffb228c-4344-4235-a271-db16deffb2e4'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-1ffb228c-4344-4235-a271-db16deffb2e4';
  $pane = new stdClass();
  $pane->pid = 'new-da9cfac6-13f1-41a5-8105-1d4f782e2ff8';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'speaker_sessions_upcoming_and_past-panel_pane_1';
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
  $pane->uuid = 'da9cfac6-13f1-41a5-8105-1d4f782e2ff8';
  $display->content['new-da9cfac6-13f1-41a5-8105-1d4f782e2ff8'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-da9cfac6-13f1-41a5-8105-1d4f782e2ff8';
  $pane = new stdClass();
  $pane->pid = 'new-5873f8d4-588d-4731-8e65-b633a5120641';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'speaker_sessions_upcoming_and_past-panel_pane_2';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5873f8d4-588d-4731-8e65-b633a5120641';
  $display->content['new-5873f8d4-588d-4731-8e65-b633a5120641'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-5873f8d4-588d-4731-8e65-b633a5120641';
  $pane = new stdClass();
  $pane->pid = 'new-e5d2cefc-9209-4e93-b4fb-0cadd8115f6c';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'redhen_contact:field_contact_session_speaker';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e5d2cefc-9209-4e93-b4fb-0cadd8115f6c';
  $display->content['new-e5d2cefc-9209-4e93-b4fb-0cadd8115f6c'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-e5d2cefc-9209-4e93-b4fb-0cadd8115f6c';
  $pane = new stdClass();
  $pane->pid = 'new-b0291ef7-1fba-4c6a-85f4-096ed474fceb';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'redhen_contact:field_contact_events_attended';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 1,
    'formatter_settings' => array(
      'link' => 1,
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
  $pane->uuid = 'b0291ef7-1fba-4c6a-85f4-096ed474fceb';
  $display->content['new-b0291ef7-1fba-4c6a-85f4-096ed474fceb'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-b0291ef7-1fba-4c6a-85f4-096ed474fceb';
  $pane = new stdClass();
  $pane->pid = 'new-79def1a6-0503-4475-b734-bfa4b5719e4c';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'conference_home_upcomming_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '79def1a6-0503-4475-b734-bfa4b5719e4c';
  $display->content['new-79def1a6-0503-4475-b734-bfa4b5719e4c'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-79def1a6-0503-4475-b734-bfa4b5719e4c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1ffb228c-4344-4235-a271-db16deffb2e4';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_redhen_profile_pages_panel_context'] = $handler;

  return $export;
}
