<?php
/**
 * @file
 * ec_promotions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_promotions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
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
function ec_promotions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_promotions_node_info() {
  $items = array(
    'promotion' => array(
      'name' => t('Promotion'),
      'base' => 'node_content',
      'description' => t('A sale, special listing, or other promotion'),
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
function ec_promotions_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: promotion
  $schemaorg['node']['promotion'] = array(
    'rdftype' => array(
      0 => 'schema:Offer',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
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
        0 => 'schema:articleBody',
        1 => 'content:encoded',
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
    'field_display_title' => array(
      'predicates' => array(
        0 => 'schema:itemOffered',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_display_subtitle' => array(
      'predicates' => array(
        0 => 'schema:itemOffered',
      ),
    ),
    'field_promotion_link_text' => array(
      'predicates' => array(
        0 => 'schema:source',
      ),
    ),
    'field_display_startend' => array(
      'predicates' => array(
        0 => 'schema:endDate',
      ),
    ),
    'field_promotion_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
      ),
      'type' => 'rel',
    ),
    'field_ref_promo_article' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_promo_serv_group' => array(
      'predicates' => array(
        0 => 'schema:availableService',
      ),
    ),
    'field_ref_promo_serv_cat' => array(
      'predicates' => array(
        0 => 'schema:availableService',
      ),
    ),
    'field_ref_promo_service' => array(
      'predicates' => array(
        0 => 'schema:availableService',
      ),
    ),
    'field_a_b_test_page' => array(
      'predicates' => array(),
    ),
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_promotions_weight_features_default_settings() {
  $settings = array();

  $settings['promotion'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
