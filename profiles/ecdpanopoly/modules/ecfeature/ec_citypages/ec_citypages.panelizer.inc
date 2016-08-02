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
  $display->title = 'Offering %node:field_ref_citypages_services in the %node:title area';
  $display->uuid = '60209d87-3ec8-4eea-bce3-b6787afeca31';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b3169805-c6f1-4e03-b6fb-5420534bdeff';
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
  $pane->uuid = 'b3169805-c6f1-4e03-b6fb-5420534bdeff';
  $display->content['new-b3169805-c6f1-4e03-b6fb-5420534bdeff'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-b3169805-c6f1-4e03-b6fb-5420534bdeff';
  $pane = new stdClass();
  $pane->pid = 'new-19c604c9-c704-4e0c-bafe-9f5cf443c12d';
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
  $pane->uuid = '19c604c9-c704-4e0c-bafe-9f5cf443c12d';
  $display->content['new-19c604c9-c704-4e0c-bafe-9f5cf443c12d'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-19c604c9-c704-4e0c-bafe-9f5cf443c12d';
  $pane = new stdClass();
  $pane->pid = 'new-b7d51614-0ab2-423a-81e9-c04f81c8a173';
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
  $pane->uuid = 'b7d51614-0ab2-423a-81e9-c04f81c8a173';
  $display->content['new-b7d51614-0ab2-423a-81e9-c04f81c8a173'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-b7d51614-0ab2-423a-81e9-c04f81c8a173';
  $pane = new stdClass();
  $pane->pid = 'new-ab5028dd-3f70-4a3e-8bad-81566eca25bd';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_lists-panel_pane_3';
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
  $pane->uuid = 'ab5028dd-3f70-4a3e-8bad-81566eca25bd';
  $display->content['new-ab5028dd-3f70-4a3e-8bad-81566eca25bd'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-ab5028dd-3f70-4a3e-8bad-81566eca25bd';
  $pane = new stdClass();
  $pane->pid = 'new-47f8dd9f-b2de-4cb2-a160-21941418f9e9';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_lists-panel_pane_7';
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
  $pane->uuid = '47f8dd9f-b2de-4cb2-a160-21941418f9e9';
  $display->content['new-47f8dd9f-b2de-4cb2-a160-21941418f9e9'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-47f8dd9f-b2de-4cb2-a160-21941418f9e9';
  $pane = new stdClass();
  $pane->pid = 'new-ce25c590-b940-456c-9a17-c33646cc7ad7';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_services-panel_pane_2';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ce25c590-b940-456c-9a17-c33646cc7ad7';
  $display->content['new-ce25c590-b940-456c-9a17-c33646cc7ad7'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-ce25c590-b940-456c-9a17-c33646cc7ad7';
  $pane = new stdClass();
  $pane->pid = 'new-fcb9f388-7a91-48b7-a98c-05037c624219';
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
  $pane->uuid = 'fcb9f388-7a91-48b7-a98c-05037c624219';
  $display->content['new-fcb9f388-7a91-48b7-a98c-05037c624219'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-fcb9f388-7a91-48b7-a98c-05037c624219';
  $pane = new stdClass();
  $pane->pid = 'new-58107f76-75c2-435e-af34-e2f2e7b5c656';
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
      'map_width' => '640px',
      'map_height' => '300px',
      'map_zoomlevel' => '7',
      'map_maptype' => 'roadmap',
      'marker_icon' => '',
      'map_scrollwheel' => 0,
      'map_imageformat' => 'png8',
      'map_link' => 0,
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
        'scrollWheelZoom' => 0,
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
    'context' => array(),
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
  $pane->uuid = '58107f76-75c2-435e-af34-e2f2e7b5c656';
  $display->content['new-58107f76-75c2-435e-af34-e2f2e7b5c656'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-58107f76-75c2-435e-af34-e2f2e7b5c656';
  $pane = new stdClass();
  $pane->pid = 'new-c55ea408-1617-424a-8826-b98d8359fc1e';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_lists-panel_pane_5';
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
  $pane->uuid = 'c55ea408-1617-424a-8826-b98d8359fc1e';
  $display->content['new-c55ea408-1617-424a-8826-b98d8359fc1e'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-c55ea408-1617-424a-8826-b98d8359fc1e';
  $pane = new stdClass();
  $pane->pid = 'new-f9802f5b-ab74-4703-954a-45fb1fc337ea';
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
  $pane->uuid = 'f9802f5b-ab74-4703-954a-45fb1fc337ea';
  $display->content['new-f9802f5b-ab74-4703-954a-45fb1fc337ea'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-f9802f5b-ab74-4703-954a-45fb1fc337ea';
  $pane = new stdClass();
  $pane->pid = 'new-d4784f13-1ef0-44b0-808b-57ba61a33caa';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_lists-panel_pane_4';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd4784f13-1ef0-44b0-808b-57ba61a33caa';
  $display->content['new-d4784f13-1ef0-44b0-808b-57ba61a33caa'] = $pane;
  $display->panels['two_66_33_second'][4] = 'new-d4784f13-1ef0-44b0-808b-57ba61a33caa';
  $pane = new stdClass();
  $pane->pid = 'new-ab2ae74a-b752-481d-9a94-194189b95af2';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_lists-panel_pane_8';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ab2ae74a-b752-481d-9a94-194189b95af2';
  $display->content['new-ab2ae74a-b752-481d-9a94-194189b95af2'] = $pane;
  $display->panels['two_66_33_second'][5] = 'new-ab2ae74a-b752-481d-9a94-194189b95af2';
  $pane = new stdClass();
  $pane->pid = 'new-ff53fd8a-d05a-49dd-b92f-ff6c10d1ec60';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'city_pages_lists-panel_pane_6';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'ff53fd8a-d05a-49dd-b92f-ff6c10d1ec60';
  $display->content['new-ff53fd8a-d05a-49dd-b92f-ff6c10d1ec60'] = $pane;
  $display->panels['two_66_33_second'][6] = 'new-ff53fd8a-d05a-49dd-b92f-ff6c10d1ec60';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:city_page:default:default'] = $panelizer;

  return $export;
}
