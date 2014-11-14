<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_conference_tracks_sessions_uuid_features_default_terms() {
 
  $terms[] = array(
    'name' => 'ASHI',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '1baeff35-88c1-4713-ba1d-b2ffea9511c3',
    'vocabulary_machine_name' => 'ceu_issuers',
    'field_logo' => array(),
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
    'field_logo' => array(),
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
 
 
  $terms[] = array(
    'name' => 'AIA',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '6221c565-4fc3-4618-96e4-b2bbdd76c677',
    'vocabulary_machine_name' => 'ceu_issuers',
    'field_logo' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/aia',
        'language' => 'und',
      ),
    ),
  );
 
  $terms[] = array(
    'name' => 'NATE',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '6fbd5fba-a194-48bc-97a6-e8257f740544',
    'vocabulary_machine_name' => 'ceu_issuers',
    'field_logo' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/nate',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'InterNACHI',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '7a622da1-b0f0-4886-b004-84a557d0ab86',
    'vocabulary_machine_name' => 'ceu_issuers',
    'field_logo' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/internachi',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'RESNET',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '8d7b2868-270b-40c3-98e8-4722e8aedced',
    'vocabulary_machine_name' => 'ceu_issuers',
    'field_logo' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/resnet',
        'language' => 'und',
      ),
    ),
  );
 
  $terms[] = array(
    'name' => 'NAHB',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'd7b3336c-4adb-4375-9a28-edb58f1559f8',
    'vocabulary_machine_name' => 'ceu_issuers',
    'field_logo' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/nahb',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'NARI',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'db1d4f67-772e-430a-ae87-413809d695ff',
    'vocabulary_machine_name' => 'ceu_issuers',
    'field_logo' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'ceu-issuers/nari',
        'language' => 'und',
      ),
    ),
  );
 
  return $terms;
}
