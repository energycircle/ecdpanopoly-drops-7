<?php
/**
 * @file
 * ec_testimonial.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_testimonial_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'RMS',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '3d516ee0-b8b1-4e26-8e73-e9d73b727078',
    'vocabulary_machine_name' => 'review_site_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'review-site-tags/rms',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
