<?php
/**
 * @file
 * ec_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_article_taxonomy_default_vocabularies() {
  return array(
    'article_types' => array(
      'name' => 'Article Types',
      'machine_name' => 'article_types',
      'description' => 'Types of content posted using the "Article" type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'uuid' => '',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
