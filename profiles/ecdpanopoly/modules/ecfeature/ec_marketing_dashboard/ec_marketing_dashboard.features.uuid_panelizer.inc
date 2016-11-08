<?php
/**
 * @file
 * ec_marketing_dashboard.features.uuid_panelizer.inc
 */

/**
 * Implements hook_uuid_features_default_panelizer().
 */
function ec_marketing_dashboard_uuid_features_default_panelizer() {
  $uuid_panelizer = array();

  // Modified panelizer display for node 816df285-dd57-45b9-a2bd-08e22de6d218.
  $display = new panels_display();
  $display->layout = 'radix_sutro_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5464da8b-9174-42e0-9e98-90cca0a8c98f';
  $display->storage_type = 'panelizer_entity';
  $display->storage_id = 'node:2:page_manager';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d136862b-1c0b-4574-afbf-0b0e99e463a3';
  $pane->panel = 'column1';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_2';
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
  $pane->uuid = 'd136862b-1c0b-4574-afbf-0b0e99e463a3';
  $display->content['new-d136862b-1c0b-4574-afbf-0b0e99e463a3'] = $pane;
  $display->panels['column1'][0] = 'new-d136862b-1c0b-4574-afbf-0b0e99e463a3';
  $pane = new stdClass();
  $pane->pid = 'new-7dbf632d-6cbb-41c6-86c5-1fbdd9ca336a';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'table',
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
  $pane->uuid = '7dbf632d-6cbb-41c6-86c5-1fbdd9ca336a';
  $display->content['new-7dbf632d-6cbb-41c6-86c5-1fbdd9ca336a'] = $pane;
  $display->panels['column2'][0] = 'new-7dbf632d-6cbb-41c6-86c5-1fbdd9ca336a';
  $pane = new stdClass();
  $pane->pid = 'new-1865ed31-579c-4ceb-9338-106349f3401e';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_8';
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
  $pane->uuid = '1865ed31-579c-4ceb-9338-106349f3401e';
  $display->content['new-1865ed31-579c-4ceb-9338-106349f3401e'] = $pane;
  $display->panels['header'][0] = 'new-1865ed31-579c-4ceb-9338-106349f3401e';
  $pane = new stdClass();
  $pane->pid = 'new-4948bcc0-647d-40b6-a81e-5d7cacf5c89e';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_3';
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
  $pane->uuid = '4948bcc0-647d-40b6-a81e-5d7cacf5c89e';
  $display->content['new-4948bcc0-647d-40b6-a81e-5d7cacf5c89e'] = $pane;
  $display->panels['header'][1] = 'new-4948bcc0-647d-40b6-a81e-5d7cacf5c89e';
  $pane = new stdClass();
  $pane->pid = 'new-21893a92-6408-4bfa-9bde-f093a1970b09';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_7';
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
  $pane->uuid = '21893a92-6408-4bfa-9bde-f093a1970b09';
  $display->content['new-21893a92-6408-4bfa-9bde-f093a1970b09'] = $pane;
  $display->panels['middle'][0] = 'new-21893a92-6408-4bfa-9bde-f093a1970b09';
  $pane = new stdClass();
  $pane->pid = 'new-0ee62246-36f6-4bdb-b0e1-206dceafb774';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_1';
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
  $pane->uuid = '0ee62246-36f6-4bdb-b0e1-206dceafb774';
  $display->content['new-0ee62246-36f6-4bdb-b0e1-206dceafb774'] = $pane;
  $display->panels['middle'][1] = 'new-0ee62246-36f6-4bdb-b0e1-206dceafb774';
  $pane = new stdClass();
  $pane->pid = 'new-54222dc1-322e-42b1-83a7-3dc24da51f59';
  $pane->panel = 'secondcolumn1';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'table',
    'header_type' => 'titles',
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
  $pane->uuid = '54222dc1-322e-42b1-83a7-3dc24da51f59';
  $display->content['new-54222dc1-322e-42b1-83a7-3dc24da51f59'] = $pane;
  $display->panels['secondcolumn1'][0] = 'new-54222dc1-322e-42b1-83a7-3dc24da51f59';
  $pane = new stdClass();
  $pane->pid = 'new-15029c12-14e2-4314-a5a1-9e825766f38f';
  $pane->panel = 'secondcolumn2';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_4';
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
  $pane->uuid = '15029c12-14e2-4314-a5a1-9e825766f38f';
  $display->content['new-15029c12-14e2-4314-a5a1-9e825766f38f'] = $pane;
  $display->panels['secondcolumn2'][0] = 'new-15029c12-14e2-4314-a5a1-9e825766f38f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $uuid_panelizer[] = $display;

  return $uuid_panelizer;
}
