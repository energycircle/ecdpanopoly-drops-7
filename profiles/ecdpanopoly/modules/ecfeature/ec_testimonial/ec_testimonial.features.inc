<?php
/**
 * @file
 * ec_testimonial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_testimonial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
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
function ec_testimonial_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_testimonial_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('A customer testimonial, including text, image, and/or video'),
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
function ec_testimonial_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: testimonial
  $schemaorg['node']['testimonial'] = array(
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
        0 => 'schema:https://schema.org/reviewBody',
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
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_ref_testimonial_serv_group' => array(
      'predicates' => array(
        0 => 'schema:https://schema.org/itemReviewed',
      ),
    ),
    'field_ref_testimonial_serv_cat' => array(
      'predicates' => array(
        0 => 'schema:https://schema.org/itemReviewed',
      ),
    ),
    'field_ref_testimonial_service' => array(
      'predicates' => array(
        0 => 'schema:https://schema.org/itemReviewed',
      ),
    ),
    'field_testimonial_city' => array(
      'predicates' => array(
        0 => 'schema:jobLocation',
      ),
    ),
    'field_ref_testimonial_citypages' => array(
      'predicates' => array(
        0 => 'schema:https://schema.org/location',
      ),
    ),
    'field_tetstimonial_name' => array(
      'predicates' => array(
        0 => 'schema:author',
      ),
    ),
    'field_testimonial_image' => array(
      'predicates' => array(
        0 => 'schema:thumbnailUrl',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_testimonial_weight_features_default_settings() {
  $settings = array();

  $settings['testimonial'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
