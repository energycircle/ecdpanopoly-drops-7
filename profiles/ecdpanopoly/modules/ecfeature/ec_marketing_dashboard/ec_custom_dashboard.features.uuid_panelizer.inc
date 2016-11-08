<?php
/**
 * @file
 * ec_custom_dashboard.features.uuid_panelizer.inc
 */

/**
 * Implements hook_uuid_features_default_panelizer().
 */
function ec_custom_dashboard_uuid_features_default_panelizer() {
  $uuid_panelizer = array();

  // Modified panelizer display for node 55093536-d0c6-4c5d-878e-cb8984c8ef59.
  $display = new panels_display();
  $display->layout = 'two_brick';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10c9e351-f69c-4629-b191-77b8b01f4f1c';
  $display->storage_type = 'panelizer_entity';
  $display->storage_id = 'node:22:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40';
  $pane->panel = 'two_brick_bottom';
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
    'formatter_settings' => array(),
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
  $pane->uuid = '74f82699-93ba-4b15-8bcf-e3bfa1894d40';
  $display->content['new-74f82699-93ba-4b15-8bcf-e3bfa1894d40'] = $pane;
  $display->panels['two_brick_bottom'][0] = 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40';
  $pane = new stdClass();
  $pane->pid = 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6';
  $pane->panel = 'two_brick_bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e0d93093-20b4-42cd-bf23-6f2f487240a6';
  $display->content['new-e0d93093-20b4-42cd-bf23-6f2f487240a6'] = $pane;
  $display->panels['two_brick_bottom'][1] = 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6';
  $pane = new stdClass();
  $pane->pid = 'new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d';
  $pane->panel = 'two_brick_bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d';
  $display->content['new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d'] = $pane;
  $display->panels['two_brick_bottom'][2] = 'new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d';
  $pane = new stdClass();
  $pane->pid = 'new-96fb1bf5-7ac2-4566-9dae-876a363c71c9';
  $pane->panel = 'two_brick_bottom';
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
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '96fb1bf5-7ac2-4566-9dae-876a363c71c9';
  $display->content['new-96fb1bf5-7ac2-4566-9dae-876a363c71c9'] = $pane;
  $display->panels['two_brick_bottom'][3] = 'new-96fb1bf5-7ac2-4566-9dae-876a363c71c9';
  $pane = new stdClass();
  $pane->pid = 'new-5fc2f422-ae45-4af9-878e-371f46ba9f39';
  $pane->panel = 'two_brick_left_above';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dash-row2',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5fc2f422-ae45-4af9-878e-371f46ba9f39';
  $display->content['new-5fc2f422-ae45-4af9-878e-371f46ba9f39'] = $pane;
  $display->panels['two_brick_left_above'][0] = 'new-5fc2f422-ae45-4af9-878e-371f46ba9f39';
  $pane = new stdClass();
  $pane->pid = 'new-8fbba644-f9f3-4878-82c0-e20c52b384db';
  $pane->panel = 'two_brick_left_above';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_2';
  $pane->shown = FALSE;
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dash-row2',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8fbba644-f9f3-4878-82c0-e20c52b384db';
  $display->content['new-8fbba644-f9f3-4878-82c0-e20c52b384db'] = $pane;
  $display->panels['two_brick_left_above'][1] = 'new-8fbba644-f9f3-4878-82c0-e20c52b384db';
  $pane = new stdClass();
  $pane->pid = 'new-54290ada-c313-4008-a2b4-1c485b8e3a4f';
  $pane->panel = 'two_brick_left_above';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_6';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dash-row2',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '54290ada-c313-4008-a2b4-1c485b8e3a4f';
  $display->content['new-54290ada-c313-4008-a2b4-1c485b8e3a4f'] = $pane;
  $display->panels['two_brick_left_above'][2] = 'new-54290ada-c313-4008-a2b4-1c485b8e3a4f';
  $pane = new stdClass();
  $pane->pid = 'new-c6698fe9-ebee-49bb-bf4d-287c0fc3ab91';
  $pane->panel = 'two_brick_left_above';
  $pane->type = 'views_panes';
  $pane->subtype = 'analytics-panel_pane_4';
  $pane->shown = FALSE;
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dash-row2',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c6698fe9-ebee-49bb-bf4d-287c0fc3ab91';
  $display->content['new-c6698fe9-ebee-49bb-bf4d-287c0fc3ab91'] = $pane;
  $display->panels['two_brick_left_above'][3] = 'new-c6698fe9-ebee-49bb-bf4d-287c0fc3ab91';
  $pane = new stdClass();
  $pane->pid = 'new-b8acde20-0af1-4b76-bf59-d51af0896dfc';
  $pane->panel = 'two_brick_right_above';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dash-row2',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b8acde20-0af1-4b76-bf59-d51af0896dfc';
  $display->content['new-b8acde20-0af1-4b76-bf59-d51af0896dfc'] = $pane;
  $display->panels['two_brick_right_above'][0] = 'new-b8acde20-0af1-4b76-bf59-d51af0896dfc';
  $pane = new stdClass();
  $pane->pid = 'new-89bca480-a5dc-4f45-a2f6-899192240a96';
  $pane->panel = 'two_brick_right_above';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_content-panel_pane_1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '89bca480-a5dc-4f45-a2f6-899192240a96';
  $display->content['new-89bca480-a5dc-4f45-a2f6-899192240a96'] = $pane;
  $display->panels['two_brick_right_above'][1] = 'new-89bca480-a5dc-4f45-a2f6-899192240a96';
  $pane = new stdClass();
  $pane->pid = 'new-1af6f677-eff3-437e-85f4-49a2aef62b01';
  $pane->panel = 'two_brick_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Upload Photos',
    'title' => '',
    'body' => '<a href="http://dev-ec-chadwick.pantheonsite.io/node/add/gallery">Upload Job Photos</a>',
    'format' => 'panopoly_html_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1af6f677-eff3-437e-85f4-49a2aef62b01';
  $display->content['new-1af6f677-eff3-437e-85f4-49a2aef62b01'] = $pane;
  $display->panels['two_brick_top'][0] = 'new-1af6f677-eff3-437e-85f4-49a2aef62b01';
  $pane = new stdClass();
  $pane->pid = 'new-25e57298-3049-4c63-a699-e2ce854d70a6';
  $pane->panel = 'two_brick_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Links to add',
    'title' => '',
    'body' => '<ul>
<li><a href="/node/add/blog-post">Add a blog</a></li>
<li><a href="/node/add/panopoly-page">Add a content page</a></li>
<li><a href="/admin/structure/menu">Restructure Menu</a></li>
<li><a href="/edit-slides">Edit Slides</a></li>
<li><a href="/node/add/gallery">Upload Photos</a></li>
</ul>',
    'format' => 'panopoly_html_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dash-links',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '25e57298-3049-4c63-a699-e2ce854d70a6';
  $display->content['new-25e57298-3049-4c63-a699-e2ce854d70a6'] = $pane;
  $display->panels['two_brick_top'][1] = 'new-25e57298-3049-4c63-a699-e2ce854d70a6';
  $pane = new stdClass();
  $pane->pid = 'new-819273aa-179c-4c77-b333-1e94d1c09343';
  $pane->panel = 'two_brick_top';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dash-row1',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '819273aa-179c-4c77-b333-1e94d1c09343';
  $display->content['new-819273aa-179c-4c77-b333-1e94d1c09343'] = $pane;
  $display->panels['two_brick_top'][2] = 'new-819273aa-179c-4c77-b333-1e94d1c09343';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $uuid_panelizer[] = $display;

  return $uuid_panelizer;
}
