<?php
/**
 * @file
 * ec_service_review_system.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_service_review_system_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Show on Reviews Page',
    'description' => '<p>Show this review in the public-facing list of reviews on the site.</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 2,
    'uuid' => '53d81135-dc62-42fb-add9-09ee439a19db',
    'vocabulary_machine_name' => 'service_review_tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'New',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '55b22add-7670-4270-962a-c46681d957b2',
    'vocabulary_machine_name' => 'service_review_tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Complete',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 3,
    'uuid' => '5c493b67-2b6a-4563-b57c-6407dacf45f3',
    'vocabulary_machine_name' => 'service_review_tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Follow-up needed',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 1,
    'uuid' => '887cb2fe-c026-43cf-95af-6e0489bde289',
    'vocabulary_machine_name' => 'service_review_tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
