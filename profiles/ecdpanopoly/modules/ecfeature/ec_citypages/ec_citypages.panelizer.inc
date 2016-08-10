<?php
/**
 * @file
 * ec_citypages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_citypages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:city_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'city_page';
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
  $panelizer->link_to_entity = FALSE;
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
  $display->uuid = '35b0f6d6-83ed-4841-8d73-9fe561ba8ecd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-98f25efb-1706-4238-879e-e30269341f2c';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_lists-panel_pane_9';
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
  $pane->uuid = '98f25efb-1706-4238-879e-e30269341f2c';
  $display->content['new-98f25efb-1706-4238-879e-e30269341f2c'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-98f25efb-1706-4238-879e-e30269341f2c';
  $pane = new stdClass();
  $pane->pid = 'new-85879dd0-2508-4e62-8f0a-fdf197fc61aa';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'citypages_image_or_video-panel_pane_1';
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
  $pane->uuid = '85879dd0-2508-4e62-8f0a-fdf197fc61aa';
  $display->content['new-85879dd0-2508-4e62-8f0a-fdf197fc61aa'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-85879dd0-2508-4e62-8f0a-fdf197fc61aa';
  $pane = new stdClass();
  $pane->pid = 'new-e58a4b42-77fb-4423-9b00-2f92fa116b6e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages-panel_pane_1';
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
  $pane->uuid = 'e58a4b42-77fb-4423-9b00-2f92fa116b6e';
  $display->content['new-e58a4b42-77fb-4423-9b00-2f92fa116b6e'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-e58a4b42-77fb-4423-9b00-2f92fa116b6e';
  $pane = new stdClass();
  $pane->pid = 'new-5b4a6305-0b97-44ad-a445-cb59d7f1319e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_featured_content-panel_pane_1';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5b4a6305-0b97-44ad-a445-cb59d7f1319e';
  $display->content['new-5b4a6305-0b97-44ad-a445-cb59d7f1319e'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-5b4a6305-0b97-44ad-a445-cb59d7f1319e';
  $pane = new stdClass();
  $pane->pid = 'new-a746d7d9-3489-4fab-aabe-c359b497ee2f';
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
  $pane->uuid = 'a746d7d9-3489-4fab-aabe-c359b497ee2f';
  $display->content['new-a746d7d9-3489-4fab-aabe-c359b497ee2f'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-a746d7d9-3489-4fab-aabe-c359b497ee2f';
  $pane = new stdClass();
  $pane->pid = 'new-409757b5-16d8-4ab2-8356-f3f848d2a976';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_citypages_area';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'geofield_leaflet',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'data' => 'full',
      'field_multiple_limit' => -1,
      'field_multiple_limit_offset' => 0,
      'leaflet_map' => 'google-roadmap',
      'height' => '300',
      'popup' => array(
        'show' => 0,
        'text' => '',
      ),
      'zoom' => array(
        'initialZoom' => '-1',
        'minZoom' => '1',
        'maxZoom' => '-1',
        'scrollWheelZoom' => 1,
      ),
      'icon' => array(
        'iconType' => 'marker',
        'iconUrl' => '',
        'shadowUrl' => '',
        'html' => '',
        'iconImageStyle' => '',
        'htmlClass' => '',
        'iconSize' => array(
          'x' => '',
          'y' => '',
        ),
        'iconAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'shadowAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'popupAnchor' => array(
          'x' => '',
          'y' => '',
        ),
      ),
      'vector_display' => array(
        'stroke_override' => 0,
        'stroke' => 1,
        'color' => '',
        'weight' => '',
        'opacity' => '',
        'dashArray' => '',
        'fill' => 1,
        'fillColor' => '',
        'fillOpacity' => '',
        'clickable' => 1,
      ),
    ),
    'context' => 'panelizer',
    'override_title' => 0,
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
  $pane->uuid = '409757b5-16d8-4ab2-8356-f3f848d2a976';
  $display->content['new-409757b5-16d8-4ab2-8356-f3f848d2a976'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-409757b5-16d8-4ab2-8356-f3f848d2a976';
  $pane = new stdClass();
  $pane->pid = 'new-198063bb-6f2c-4db0-b888-4e781aa5ecec';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_featured_content-panel_pane_3';
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
  $pane->uuid = '198063bb-6f2c-4db0-b888-4e781aa5ecec';
  $display->content['new-198063bb-6f2c-4db0-b888-4e781aa5ecec'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-198063bb-6f2c-4db0-b888-4e781aa5ecec';
  $pane = new stdClass();
  $pane->pid = 'new-d699350c-a7af-4e19-9daf-0517069a37da';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_services-panel_pane_1';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd699350c-a7af-4e19-9daf-0517069a37da';
  $display->content['new-d699350c-a7af-4e19-9daf-0517069a37da'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-d699350c-a7af-4e19-9daf-0517069a37da';
  $pane = new stdClass();
  $pane->pid = 'new-82510549-346d-415c-b28f-f42b981fc8a3';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_featured_content-panel_pane_2';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '82510549-346d-415c-b28f-f42b981fc8a3';
  $display->content['new-82510549-346d-415c-b28f-f42b981fc8a3'] = $pane;
  $display->panels['two_66_33_second'][4] = 'new-82510549-346d-415c-b28f-f42b981fc8a3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:city_page:default:default'] = $panelizer;

  return $export;
}
