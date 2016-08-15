<?php
/**
 * @file
 * ec_sr3.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_sr3_taxonomy_default_vocabularies() {
  return array(
    'sr3_review_services' => array(
      'name' => 'SR3 Review Services',
      'machine_name' => 'sr3_review_services',
      'description' => 'Services in the review system checkbox set',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
