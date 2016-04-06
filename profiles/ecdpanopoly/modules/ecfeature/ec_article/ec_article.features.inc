<?php
/**
 * @file
 * ec_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
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
function ec_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('A news story, press release, or other type of article.'),
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
function ec_article_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: article
  $schemaorg['node']['article'] = array(
    'rdftype' => array(
      0 => 'schema:Article',
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
    'field_display_date' => array(
      'predicates' => array(
        0 => 'schema:datePublished',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_article_type' => array(
      'predicates' => array(
        0 => 'schema:articleSection',
      ),
      'type' => 'rel',
    ),
    'field_article_author' => array(
      'predicates' => array(
        0 => 'schema:author',
      ),
    ),
    'field_article_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
      ),
      'type' => 'rel',
    ),
    'field_article_source' => array(
      'predicates' => array(
        0 => 'schema:source',
      ),
    ),
    'field_ref_article_testimonial' => array(
      'predicates' => array(
        0 => 'schema:review',
      ),
    ),
    'field_ref_article_blog' => array(
      'predicates' => array(
        0 => 'schema:blogPost',
      ),
    ),
    'field_ref_article_promo' => array(
      'predicates' => array(
        0 => 'schema:offers',
      ),
    ),
    'field_a_b_test_page' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: article_types
  $schemaorg['taxonomy_term']['article_types'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_article_weight_features_default_settings() {
  $settings = array();

  $settings['article'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
