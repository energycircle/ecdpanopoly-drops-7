<?php
/**
 * @file
 * ec_citypages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_citypages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_citypages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_group_info_alter().
 */
function ec_citypages_field_group_info_alter(&$data) {
  if (isset($data['group_citypages_general|node|city_page|form'])) {
    $data['group_citypages_general|node|city_page|form']->data['children'][2] = 'field_citypagesshort_description'; /* WAS: 'field_citypages_pin' */
    unset($data['group_citypages_general|node|city_page|form']->data['children'][4]);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ec_citypages_field_default_field_instances_alter(&$data) {
  if (isset($data['node-city_page-field_call_to_action'])) {
    $data['node-city_page-field_call_to_action']['settings']['text_processing'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-city_page-field_citypages_area'])) {
    $data['node-city_page-field_citypages_area']['default_value'] = array(); /* WAS: '' */
  }
  if (isset($data['node-city_page-field_citypages_other_descriptio'])) {
    $data['node-city_page-field_citypages_other_descriptio']['description'] = 'Enter seasonal services and/or any other content about your work in this locality.<br /><br /><strong>Example: "Ask us about our work in the historic district. Our designs and installations are tailored to fit the appearance standards of your neighborhood while maximizing efficiency and return on investment."</strong>'; /* WAS: 'Enter any other content about your work in this locality.<br /><br /><strong>Example: "Ask us about our work in the historic district. Our designs and installations are tailored to fit the appearance standards of your neighborhood while maximizing efficiency and return on investment."</strong>' */
    $data['node-city_page-field_citypages_other_descriptio']['label'] = 'Local/Seasonal Services -- or -- Other Local Notes'; /* WAS: 'Other Local Notes' */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function ec_citypages_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:city_page:default:default'])) {
    $data['node:city_page:default:default']->display->content['new-19c604c9-c704-4e0c-bafe-9f5cf443c12d']->shown = FALSE; /* WAS: TRUE */
    $data['node:city_page:default:default']->display->content['new-210ec5e9-312c-4f96-9d36-4035e0e6dce4'] = (object) array(
          'pid' => 'new-210ec5e9-312c-4f96-9d36-4035e0e6dce4',
          'panel' => 'two_66_33_first',
          'type' => 'views_panes',
          'subtype' => 'case_studies_this_page-panel_pane_5',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => '210ec5e9-312c-4f96-9d36-4035e0e6dce4',
        ); /* WAS: '' */
    $data['node:city_page:default:default']->display->content['new-2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d']->configuration['delta_reversed'] = 0; /* WAS: FALSE */
    $data['node:city_page:default:default']->display->content['new-2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d']->configuration['formatter_settings']['field_multiple_limit'] = 1; /* WAS: -1 */
    $data['node:city_page:default:default']->display->content['new-2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d']->configuration['formatter_settings']['links'] = 1; /* WAS: '' */
    $data['node:city_page:default:default']->display->content['new-2ada9f9a-4730-4ac2-92ee-cfd7ba6bc30d']->configuration['formatter_settings']['view_mode'] = 'show_this_block'; /* WAS: '' */
    $data['node:city_page:default:default']->display->content['new-58107f76-75c2-435e-af34-e2f2e7b5c656'] = (object) array(
          'pid' => 'new-58107f76-75c2-435e-af34-e2f2e7b5c656',
          'panel' => 'two_66_33_first',
          'type' => 'entity_field',
          'subtype' => 'node:field_citypages_area',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'geofield_leaflet',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'map_width' => '640px',
              'map_height' => '300px',
              'map_zoomlevel' => 7,
              'map_maptype' => 'roadmap',
              'marker_icon' => '',
              'map_scrollwheel' => 0,
              'map_imageformat' => 'png8',
              'map_link' => 0,
              'leaflet_map' => 'google-roadmap',
              'height' => 300,
              'popup' => array(
                'show' => 0,
                'text' => '',
              ),
              'zoom' => array(
                'initialZoom' => -1,
                'minZoom' => 1,
                'maxZoom' => -1,
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
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '58107f76-75c2-435e-af34-e2f2e7b5c656',
        ); /* WAS: '' */
    $data['node:city_page:default:default']->display->content['new-adfd0e3b-b128-488d-946f-6c4574f396d9'] = (object) array(
          'pid' => 'new-adfd0e3b-b128-488d-946f-6c4574f396d9',
          'panel' => 'two_66_33_first',
          'type' => 'views_panes',
          'subtype' => 'blog_listing-panel_pane_5',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => 'adfd0e3b-b128-488d-946f-6c4574f396d9',
        ); /* WAS: '' */
    $data['node:city_page:default:default']->display->content['new-b7d51614-0ab2-423a-81e9-c04f81c8a173']->position = 2; /* WAS: 1 */
    $data['node:city_page:default:default']->display->panels['two_66_33_first'][1] = 'new-58107f76-75c2-435e-af34-e2f2e7b5c656'; /* WAS: 'new-b7d51614-0ab2-423a-81e9-c04f81c8a173' */
    $data['node:city_page:default:default']->display->panels['two_66_33_first'][3] = 'new-adfd0e3b-b128-488d-946f-6c4574f396d9'; /* WAS: '' */
    $data['node:city_page:default:default']->display->panels['two_66_33_first'][4] = 'new-210ec5e9-312c-4f96-9d36-4035e0e6dce4'; /* WAS: '' */
    unset($data['node:city_page:default:default']->display->content['new-63cab71e-249a-4d6e-90d0-c678a9b79244']);
    unset($data['node:city_page:default:default']->display->content['new-a354d14f-13d2-4c04-8090-979e08bd822d']);
    unset($data['node:city_page:default:default']->display->content['new-e9eedaa8-4f17-4a41-94f1-04e98026154b']);
    unset($data['node:city_page:default:default']->display->panels['two_66_33_second'][4]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ec_citypages_strongarm_alter(&$data) {
  if (isset($data['auto_menutitle_city_page'])) {
    $data['auto_menutitle_city_page']->value = 0; /* WAS: 1 */
  }
  if (isset($data['menu_options_city_page'])) {
    unset($data['menu_options_city_page']->value[0]);
    unset($data['menu_options_city_page']->value[1]);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function ec_citypages_views_default_views_alter(&$data) {
  if (isset($data['city_pages'])) {
    $data['city_pages']->display['default']->display_options['cache']['output_lifespan'] = 3600; /* WAS: '' */
    $data['city_pages']->display['default']->display_options['cache']['output_lifespan_custom'] = 0; /* WAS: '' */
    $data['city_pages']->display['default']->display_options['cache']['results_lifespan'] = 3600; /* WAS: '' */
    $data['city_pages']->display['default']->display_options['cache']['results_lifespan_custom'] = 0; /* WAS: '' */
    $data['city_pages']->display['default']->display_options['cache']['type'] = 'time'; /* WAS: 'none' */
  }
  if (isset($data['city_pages_lists'])) {
    $data['city_pages_lists']->display['default']->display_options['cache']['output_lifespan'] = 3600; /* WAS: '' */
    $data['city_pages_lists']->display['default']->display_options['cache']['output_lifespan_custom'] = 0; /* WAS: '' */
    $data['city_pages_lists']->display['default']->display_options['cache']['results_lifespan'] = 3600; /* WAS: '' */
    $data['city_pages_lists']->display['default']->display_options['cache']['results_lifespan_custom'] = 0; /* WAS: '' */
    $data['city_pages_lists']->display['default']->display_options['cache']['type'] = 'time'; /* WAS: 'none' */
    $data['city_pages_lists']->display['panel_pane_1']->display_options['defaults'] = array(
      'title' => FALSE,
    ); /* WAS: '' */
    $data['city_pages_lists']->display['panel_pane_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:4:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:2:{s:5:"title";b:0;s:6:"fields";b:0;}s:5:"title";s:33:"Service Areas All Over New Jersey";s:6:"fields";a:1:{s:5:"title";a:5:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:31:"City Page Linked Content Simple";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
  }
  if (isset($data['city_pages_service_area_map'])) {
    $data['city_pages_service_area_map']->display['attachment_1']->display_options['fields']['field_citypages_image']['settings']['image_style'] = 'sc_300x225'; /* WAS: 'sc_140x105' */
    $data['city_pages_service_area_map']->display['default']->display_options['cache']['output_lifespan'] = 3600; /* WAS: '' */
    $data['city_pages_service_area_map']->display['default']->display_options['cache']['output_lifespan_custom'] = 0; /* WAS: '' */
    $data['city_pages_service_area_map']->display['default']->display_options['cache']['results_lifespan'] = 3600; /* WAS: '' */
    $data['city_pages_service_area_map']->display['default']->display_options['cache']['results_lifespan_custom'] = 0; /* WAS: '' */
    $data['city_pages_service_area_map']->display['default']->display_options['cache']['type'] = 'time'; /* WAS: 'none' */
    $data['city_pages_service_area_map']->display['panel_pane_2']->display_options['cache'] = array(
      'type' => 'none',
    ); /* WAS: '' */
    $data['city_pages_service_area_map']->display['panel_pane_2']->display_options['defaults']['cache'] = FALSE; /* WAS: '' */
    $data['city_pages_service_area_map']->display['panel_pane_3']->display_options['cache'] = array(
      'type' => 'none',
    ); /* WAS: '' */
    $data['city_pages_service_area_map']->display['panel_pane_3']->display_options['defaults']['cache'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function ec_citypages_node_info() {
  $items = array(
    'city_page' => array(
      'name' => t('City Page'),
      'base' => 'node_content',
      'description' => t('A landing page for a locality in the service area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function ec_citypages_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: city_page
  $schemaorg['node']['city_page'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_citypages_area' => array(
      'predicates' => array(),
    ),
    'field_citypages_pin' => array(
      'predicates' => array(),
    ),
    'field_citypages_image' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_ref_to_cta_form' => array(
      'predicates' => array(),
    ),
    'field_button_text' => array(
      'predicates' => array(),
    ),
    'field_citypages_other_descriptio' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_citypages_weight_features_default_settings() {
  $settings = array();

  $settings['city_page'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
