<?php
/**
 * @file
 * ec_panopoly_page_overrides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_panopoly_page_overrides_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_panopoly_page_overrides_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function ec_panopoly_page_overrides_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default:default'])) {
    $data['node:panopoly_page:default:default']->display->content['new-74f82699-93ba-4b15-8bcf-e3bfa1894d40']->panel = 'two_66_33_first'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default:default']->display->content['new-96fb1bf5-7ac2-4566-9dae-876a363c71c9']->panel = 'two_66_33_first'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default:default']->display->content['new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d']->panel = 'two_66_33_first'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default:default']->display->content['new-bcc6c8e4-04cb-4637-a941-703d8659139a'] = (object) array(
          'pid' => 'new-bcc6c8e4-04cb-4637-a941-703d8659139a',
          'panel' => 'two_66_33_second',
          'type' => 'views_panes',
          'subtype' => 'testimonials-panel_pane_2',
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
          'uuid' => 'bcc6c8e4-04cb-4637-a941-703d8659139a',
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-bd56e09b-f7d2-4fc8-b3a0-d74b62df2293'] = (object) array(
          'pid' => 'new-bd56e09b-f7d2-4fc8-b3a0-d74b62df2293',
          'panel' => 'two_66_33_second',
          'type' => 'views_panes',
          'subtype' => 'service_request-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'full',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'bd56e09b-f7d2-4fc8-b3a0-d74b62df2293',
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-d1f269e2-19ca-4eb5-a8a8-a108276a7706'] = (object) array(
          'pid' => 'new-d1f269e2-19ca-4eb5-a8a8-a108276a7706',
          'panel' => 'two_66_33_second',
          'type' => 'views_panes',
          'subtype' => 'blog_listing-panel_pane_3',
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
          'position' => 2,
          'locks' => array(),
          'uuid' => 'd1f269e2-19ca-4eb5-a8a8-a108276a7706',
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-e0d93093-20b4-42cd-bf23-6f2f487240a6']->panel = 'two_66_33_first'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default:default']->display->content['new-eb9d8405-655f-490f-834d-27b0c4e638dc'] = (object) array(
          'pid' => 'new-eb9d8405-655f-490f-834d-27b0c4e638dc',
          'panel' => 'two_66_33_second',
          'type' => 'views_panes',
          'subtype' => 'promotions-panel_pane_1',
          'shown' => FALSE,
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
          'position' => 1,
          'locks' => array(),
          'uuid' => 'eb9d8405-655f-490f-834d-27b0c4e638dc',
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->layout = 'two_66_33'; /* WAS: 'radix_boxton' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_bottom'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_first'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_second'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_top'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['two_66_33_first'] = array(
      0 => 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6',
      1 => 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40',
      2 => 'new-96fb1bf5-7ac2-4566-9dae-876a363c71c9',
      3 => 'new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d',
    ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['two_66_33_second'] = array(
      0 => 'new-bd56e09b-f7d2-4fc8-b3a0-d74b62df2293',
      1 => 'new-eb9d8405-655f-490f-834d-27b0c4e638dc',
      2 => 'new-d1f269e2-19ca-4eb5-a8a8-a108276a7706',
      3 => 'new-bcc6c8e4-04cb-4637-a941-703d8659139a',
    ); /* WAS: '' */
    unset($data['node:panopoly_page:default:default']->display->panels['contentmain']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ec_panopoly_page_overrides_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['default']['choice'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['featured']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['grouped_teaser'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['page_manager']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['show_this_block'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['teaser']['status'] = 0; /* WAS: 1 */
    unset($data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result']['substitute']);
  }
}

/**
 * Implements hook_rdf_default_mappings().
 */
function ec_panopoly_page_overrides_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: panopoly_page
  $schemaorg['node']['panopoly_page'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
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
        0 => 'schema:name',
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
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_featured_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
        1 => 'foaf:primaryImage',
      ),
      'type' => 'rel',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_ref_page_testimonial' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_panopoly_page_overrides_weight_features_default_settings() {
  $settings = array();

  $settings['panopoly_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
