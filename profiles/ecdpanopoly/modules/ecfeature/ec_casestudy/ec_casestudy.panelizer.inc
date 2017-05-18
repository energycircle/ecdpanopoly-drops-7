<?php
/**
 * @file
 * ec_casestudy.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ec_casestudy_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'case_study';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:case_study:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
      'three_50_25_25_top' => NULL,
      'three_50_25_25_first' => NULL,
      'three_50_25_25_second' => NULL,
      'three_50_25_25_third' => NULL,
      'three_50_25_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9b6d31e0-208c-4611-bdc5-bffccf65190d';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:case_study:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd';
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
      'title_class' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d978697-58b3-48a3-8879-6f3b3ad3b5dd';
  $display->content['new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd';
  $pane = new stdClass();
  $pane->pid = 'new-447a638f-fea7-4c7b-9faf-8a8d4ac392c5';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'sc_780x390',
      'image_link' => '',
    ),
    'context' => array(),
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
  $pane->uuid = '447a638f-fea7-4c7b-9faf-8a8d4ac392c5';
  $display->content['new-447a638f-fea7-4c7b-9faf-8a8d4ac392c5'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-447a638f-fea7-4c7b-9faf-8a8d4ac392c5';
  $pane = new stdClass();
  $pane->pid = 'new-905e2642-3f3f-49d4-923f-0dd613a046b1';
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
      'title_style' => 'h4',
      'title_link' => '',
      'title_class' => '',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '905e2642-3f3f-49d4-923f-0dd613a046b1';
  $display->content['new-905e2642-3f3f-49d4-923f-0dd613a046b1'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-905e2642-3f3f-49d4-923f-0dd613a046b1';
  $pane = new stdClass();
  $pane->pid = 'new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6';
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
  $pane->uuid = 'b84ebfba-7d4c-40cb-b4dc-488daad43ae6';
  $display->content['new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6';
  $pane = new stdClass();
  $pane->pid = 'new-9a220ee5-4887-4430-a156-0abffd600d01';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_issues';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9a220ee5-4887-4430-a156-0abffd600d01';
  $display->content['new-9a220ee5-4887-4430-a156-0abffd600d01'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-9a220ee5-4887-4430-a156-0abffd600d01';
  $pane = new stdClass();
  $pane->pid = 'new-4091888d-c34f-4c0c-8a8c-c5cee6652a1e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'gallery_slideshow_carousel-panel_pane_3';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4091888d-c34f-4c0c-8a8c-c5cee6652a1e';
  $display->content['new-4091888d-c34f-4c0c-8a8c-c5cee6652a1e'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-4091888d-c34f-4c0c-8a8c-c5cee6652a1e';
  $pane = new stdClass();
  $pane->pid = 'new-f81278a2-11bf-4766-a0e8-bce804761f64';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'gallery_slideshow_carousel-panel_pane_4';
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
  $pane->uuid = 'f81278a2-11bf-4766-a0e8-bce804761f64';
  $display->content['new-f81278a2-11bf-4766-a0e8-bce804761f64'] = $pane;
  $display->panels['two_66_33_first'][6] = 'new-f81278a2-11bf-4766-a0e8-bce804761f64';
  $pane = new stdClass();
  $pane->pid = 'new-aa3e64f3-d254-418e-bbf8-265f27ca9a77';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_diagnosis';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'aa3e64f3-d254-418e-bbf8-265f27ca9a77';
  $display->content['new-aa3e64f3-d254-418e-bbf8-265f27ca9a77'] = $pane;
  $display->panels['two_66_33_first'][7] = 'new-aa3e64f3-d254-418e-bbf8-265f27ca9a77';
  $pane = new stdClass();
  $pane->pid = 'new-8e0f7aa2-79d3-4331-a9a7-d49e9d3b6dda';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'service_icons-panel_pane_1';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '8e0f7aa2-79d3-4331-a9a7-d49e9d3b6dda';
  $display->content['new-8e0f7aa2-79d3-4331-a9a7-d49e9d3b6dda'] = $pane;
  $display->panels['two_66_33_first'][8] = 'new-8e0f7aa2-79d3-4331-a9a7-d49e9d3b6dda';
  $pane = new stdClass();
  $pane->pid = 'new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'gallery_slideshow_carousel-panel_pane_1';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2';
  $display->content['new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2'] = $pane;
  $display->panels['two_66_33_first'][9] = 'new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2';
  $pane = new stdClass();
  $pane->pid = 'new-48fa4a2e-f8f1-4cc3-8bab-ce488cd9d544';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_project_outcome';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '48fa4a2e-f8f1-4cc3-8bab-ce488cd9d544';
  $display->content['new-48fa4a2e-f8f1-4cc3-8bab-ce488cd9d544'] = $pane;
  $display->panels['two_66_33_first'][10] = 'new-48fa4a2e-f8f1-4cc3-8bab-ce488cd9d544';
  $pane = new stdClass();
  $pane->pid = 'new-1126786f-4c05-4a8e-b5cc-2d078e0e3147';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'gallery_slideshow_carousel-panel_pane_2';
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '1126786f-4c05-4a8e-b5cc-2d078e0e3147';
  $display->content['new-1126786f-4c05-4a8e-b5cc-2d078e0e3147'] = $pane;
  $display->panels['two_66_33_first'][11] = 'new-1126786f-4c05-4a8e-b5cc-2d078e0e3147';
  $pane = new stdClass();
  $pane->pid = 'new-af619ff3-c262-426a-a714-1a69d12a6f96';
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
  $pane->css = array(
    'css_id' => 'primary-cta-form',
    'css_class' => 'cta-form',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'af619ff3-c262-426a-a714-1a69d12a6f96';
  $display->content['new-af619ff3-c262-426a-a714-1a69d12a6f96'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-af619ff3-c262-426a-a714-1a69d12a6f96';
  $pane = new stdClass();
  $pane->pid = 'new-0a65c9ca-576a-412a-97df-046677dc8309';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'geolocation_googlemaps_static',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'map_width' => '300px',
      'map_height' => '300px',
      'map_zoomlevel' => '7',
      'map_imageformat' => 'png8',
      'map_link' => 0,
      'map_maptype' => 'roadmap',
      'marker_icon' => '',
    ),
    'context' => array(),
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
  $pane->uuid = '0a65c9ca-576a-412a-97df-046677dc8309';
  $display->content['new-0a65c9ca-576a-412a-97df-046677dc8309'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-0a65c9ca-576a-412a-97df-046677dc8309';
  $pane = new stdClass();
  $pane->pid = 'new-daaaf62d-222d-4899-94e9-d039376ae89f';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_year_built';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'daaaf62d-222d-4899-94e9-d039376ae89f';
  $display->content['new-daaaf62d-222d-4899-94e9-d039376ae89f'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-daaaf62d-222d-4899-94e9-d039376ae89f';
  $pane = new stdClass();
  $pane->pid = 'new-734fb739-ee9a-4113-a132-bc0bc28f281b';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_square_footage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '734fb739-ee9a-4113-a132-bc0bc28f281b';
  $display->content['new-734fb739-ee9a-4113-a132-bc0bc28f281b'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-734fb739-ee9a-4113-a132-bc0bc28f281b';
  $pane = new stdClass();
  $pane->pid = 'new-aaaaca6d-7114-4234-86fa-7cf4c572df04';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_rooms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'aaaaca6d-7114-4234-86fa-7cf4c572df04';
  $display->content['new-aaaaca6d-7114-4234-86fa-7cf4c572df04'] = $pane;
  $display->panels['two_66_33_second'][4] = 'new-aaaaca6d-7114-4234-86fa-7cf4c572df04';
  $pane = new stdClass();
  $pane->pid = 'new-9fa182d2-1abe-4572-a700-ab49257c5f78';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_energy_after';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9fa182d2-1abe-4572-a700-ab49257c5f78';
  $display->content['new-9fa182d2-1abe-4572-a700-ab49257c5f78'] = $pane;
  $display->panels['two_66_33_second'][5] = 'new-9fa182d2-1abe-4572-a700-ab49257c5f78';
  $pane = new stdClass();
  $pane->pid = 'new-dc596b43-66f1-41f7-83bc-3dbc832aa345';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_case_study_energy_before';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'dc596b43-66f1-41f7-83bc-3dbc832aa345';
  $display->content['new-dc596b43-66f1-41f7-83bc-3dbc832aa345'] = $pane;
  $display->panels['two_66_33_second'][6] = 'new-dc596b43-66f1-41f7-83bc-3dbc832aa345';
  $pane = new stdClass();
  $pane->pid = 'new-a994a6bf-39d7-4a27-84b8-b8d9bb69e01d';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_case_study_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
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
  $pane->css = array(
    'css_id' => 'show-this-blog',
    'css_class' => 'blog',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'a994a6bf-39d7-4a27-84b8-b8d9bb69e01d';
  $display->content['new-a994a6bf-39d7-4a27-84b8-b8d9bb69e01d'] = $pane;
  $display->panels['two_66_33_second'][7] = 'new-a994a6bf-39d7-4a27-84b8-b8d9bb69e01d';
  $pane = new stdClass();
  $pane->pid = 'new-fdbc7a34-cead-499c-8d11-202036463854';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_case_study_testimonial';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
      'field_multiple_limit' => '-1',
      'field_multiple_limit_offset' => '0',
      'view_mode' => 'show_this_block',
      'links' => 1,
      'field_multiple_limit_order' => '0',
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
  $pane->css = array(
    'css_id' => 'show-this-testimonial',
    'css_class' => 'testimonial',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'fdbc7a34-cead-499c-8d11-202036463854';
  $display->content['new-fdbc7a34-cead-499c-8d11-202036463854'] = $pane;
  $display->panels['two_66_33_second'][8] = 'new-fdbc7a34-cead-499c-8d11-202036463854';
  $pane = new stdClass();
  $pane->pid = 'new-ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_case_study_promo';
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
  $pane->css = array(
    'css_id' => 'show-this-promotion',
    'css_class' => 'promotion',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7';
  $display->content['new-ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7'] = $pane;
  $display->panels['two_66_33_second'][9] = 'new-ce0fefcf-2fa0-4d85-bc35-ea5ef1d5d8a7';
  $pane = new stdClass();
  $pane->pid = 'new-9ae886c7-fd0a-431c-adfa-1358ed3c0db4';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_case_study_prodpage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
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
  $pane->css = array(
    'css_id' => 'show-this-product',
    'css_class' => 'product',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '9ae886c7-fd0a-431c-adfa-1358ed3c0db4';
  $display->content['new-9ae886c7-fd0a-431c-adfa-1358ed3c0db4'] = $pane;
  $display->panels['two_66_33_second'][10] = 'new-9ae886c7-fd0a-431c-adfa-1358ed3c0db4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:case_study:default:default'] = $panelizer;

  return $export;
}
