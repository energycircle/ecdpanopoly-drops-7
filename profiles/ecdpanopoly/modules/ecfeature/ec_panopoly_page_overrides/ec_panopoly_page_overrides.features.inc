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
 * Implements hook_field_default_field_instances_alter().
 */
function ec_panopoly_page_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-panopoly_page-body']['display']['default']['weight'] = 6; /* WAS: 1 */
    $data['node-panopoly_page-body']['display']['featured']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['featured']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['featured']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['display']['search_result']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['search_result']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['search_result']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 19,
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['display']['teaser']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['teaser']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['teaser']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['settings']['display_summary'] = 1; /* WAS: 0 */
    $data['node-panopoly_page-body']['settings']['linkit'] = array(
      'button_text' => 'Search',
      'enable' => 0,
      'profile' => '',
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['settings']['maxlength_js'] = ''; /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['settings']['maxlength_js_enforce'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['settings']['maxlength_js_label'] = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>'; /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['settings']['maxlength_js_label_summary'] = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>'; /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['settings']['maxlength_js_summary'] = ''; /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['settings']['maxlength_js_truncate_html'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['weight'] = 5; /* WAS: 4 */
    unset($data['node-panopoly_page-body']['display']['default']['module']);
  }
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-panopoly_page-field_featured_categories']['display']['default']['weight'] = 0; /* WAS: 3 */
    $data['node-panopoly_page-field_featured_categories']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_categories']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    unset($data['node-panopoly_page-field_featured_categories']['display']['default']['module']);
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['default_value'] = array(); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['display']['default']['weight'] = 3; /* WAS: 0 */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 12,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_schemes'] = array(
      'public' => 'public',
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_types'] = array(
      'image' => 'image',
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['browser_plugins'] = array(); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
    $data['node-panopoly_page-field_featured_image']['widget']['weight'] = 3; /* WAS: 1 */
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['module']);
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['settings']['image_link']);
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['settings']['image_style']);
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    $data['node-panopoly_page-field_featured_status']['display']['default']['weight'] = 7; /* WAS: 2 */
    $data['node-panopoly_page-field_featured_status']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 11,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['widget']['weight'] = 4; /* WAS: 3 */
    unset($data['node-panopoly_page-field_featured_status']['display']['default']['module']);
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function ec_panopoly_page_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context'])) {
    $data['node_edit_panel_context']->conf['display']->content['new-17fa67de-e033-46f2-bdd8-a138e91da0e4']->panel = 'sidebar'; /* WAS: 'contentmain' */
    $data['node_edit_panel_context']->conf['display']->content['new-17fa67de-e033-46f2-bdd8-a138e91da0e4']->position = 0; /* WAS: 1 */
    $data['node_edit_panel_context']->conf['display']->content['new-51126c95-cf51-4ad6-a27a-11e4260d8023']->position = 2; /* WAS: 1 */
    $data['node_edit_panel_context']->conf['display']->content['new-99f6c0bd-36fd-411b-9833-c0be0fab7548']->position = 3; /* WAS: 2 */
    $data['node_edit_panel_context']->conf['display']->content['new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c']->position = 1; /* WAS: 3 */
    $data['node_edit_panel_context']->conf['display']->content['new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52']->position = 1; /* WAS: 2 */
    $data['node_edit_panel_context']->conf['display']->panel_settings['contentmain'] = array(
      'style' => 0,
    ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panel_settings['sidebar']['style'] = 0; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panels['contentmain'][1] = 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52'; /* WAS: 'new-17fa67de-e033-46f2-bdd8-a138e91da0e4' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][0] = 'new-17fa67de-e033-46f2-bdd8-a138e91da0e4'; /* WAS: 'new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd' */
    unset($data['node_edit_panel_context']->conf['display']->content['new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd']);
    unset($data['node_edit_panel_context']->conf['display']->panels['contentmain'][2]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ec_panopoly_page_overrides_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__panopoly_page'])) {
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 2,
        'visible' => FALSE,
      ),
      'show_this_block' => array(
        'weight' => 3,
        'visible' => FALSE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 32,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['path']['weight'] = 26; /* WAS: 5 */
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['xmlsitemap'] = array(
      'weight' => 31,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__panopoly_page']->value['view_modes']['grouped_teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__panopoly_page']->value['view_modes']['show_this_block'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
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
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_ref_page_services' => array(
      'predicates' => array(),
    ),
    'field_ref_page_service_category' => array(
      'predicates' => array(),
    ),
    'field_ref_page_service_group' => array(
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
