<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_conference_tracks_sessions_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'ASHI',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '1baeff35-88c1-4713-ba1d-b2ffea9511c3',
    'vocabulary_machine_name' => 'ceu_issuers',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/ashi',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BPI',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '220605f2-9043-48c5-98ee-9d35824b849c',
    'vocabulary_machine_name' => 'ceu_issuers',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/bpi',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
