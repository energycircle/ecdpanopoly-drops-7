<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_conference_tracks_sessions_taxonomy_default_vocabularies() {
  return array(
    'areas_of_focus' => array(
      'name' => 'Areas of Focus',
      'machine_name' => 'areas_of_focus',
      'description' => 'Tags for sessions and other types of events',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'ceu_issuers' => array(
      'name' => 'CEU Issuers',
      'machine_name' => 'ceu_issuers',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'session_format' => array(
      'name' => 'Session Format',
      'machine_name' => 'session_format',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
  );
}
