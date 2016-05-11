<?php
/**
 * @file
 * ec_blog_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_blog_post_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_blog_post_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_blog_post_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Used to display blog posts on the site as well as pull them into other content.'),
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
function ec_blog_post_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: blog_post
  $schemaorg['node']['blog_post'] = array(
    'rdftype' => array(
      0 => 'schema:Blog',
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
    'field_blog_category' => array(
      'predicates' => array(
        0 => 'schema:articleSection',
      ),
      'type' => 'rel',
    ),
    'field_blog_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
      ),
      'type' => 'rel',
    ),
    'field_ref_blog_article' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_blog_serv_group' => array(
      'predicates' => array(
        0 => 'schema:providesService',
      ),
    ),
    'field_ref_blog_serv_cat' => array(
      'predicates' => array(
        0 => 'schema:providesService',
      ),
    ),
    'field_ref_blog_service' => array(
      'predicates' => array(
        0 => 'schema:providesService',
      ),
    ),
    'field_ref_blog_citypages' => array(
      'predicates' => array(
        0 => 'schema:serviceLocation',
      ),
    ),
    'field_a_b_test_page' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: blog_categories
  $schemaorg['taxonomy_term']['blog_categories'] = array(
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
function ec_blog_post_weight_features_default_settings() {
  $settings = array();

  $settings['blog_post'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
