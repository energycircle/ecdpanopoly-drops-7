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
    'name' => 'Weatherization',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 7,
    'uuid' => '03cabcd2-1c70-4ed4-9f27-12b62a95cd2f',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/weatherization',
        'language' => 'und',
      ),
    ),
  );
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
    'name' => '4 Hour Workshop',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '2cb08227-8cf0-40b6-b7aa-5ed496172f2f',
    'vocabulary_machine_name' => 'session_format',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'session-format/4-hour-workshop',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Super Session',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '36367aec-48d0-4270-be3e-6fabbf973fca',
    'vocabulary_machine_name' => 'session_format',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'session-format/super-session',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Speaker',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '3e877f59-4124-4815-b51d-8fc64b03bbca',
    'vocabulary_machine_name' => 'session_format',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'session-format/speaker',
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
    'name' => 'Full Day',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '7b9b0f8f-4a01-42d1-98fe-c3e9c175d90e',
    'vocabulary_machine_name' => 'session_format',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'session-format/full-day',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Utilities',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 6,
    'uuid' => '84f5e1fb-767b-4e6b-9e4a-e98e4f2f8ffb',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/utilities',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Contractors',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 1,
    'uuid' => '85a5f1e3-70e0-4646-a4ad-12badcfb2445',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/contractors',
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
    'name' => 'Sustainability Professionals',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 5,
    'uuid' => 'a6b5e70a-2752-452b-ae33-3e9fe374c724',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/sustainability-professionals',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'HVAC',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 2,
    'uuid' => 'b26ddf65-2408-4cf0-88a5-de874f8bb076',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/hvac',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '90 Minute Session',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'b478ce8e-7ab8-4cf1-870a-139f0db9e1ca',
    'vocabulary_machine_name' => 'session_format',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'session-format/90-minute-session',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Evening',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'b49e73a3-9aea-43c3-935a-9ce7ed77a8ed',
    'vocabulary_machine_name' => 'session_format',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'session-format/evening',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Remodelers',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 4,
    'uuid' => 'b814472b-233e-403b-9d31-d667c300958f',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/remodelers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Panel Discussion',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'c4c8007d-0b30-4637-a674-d6537b18d04b',
    'vocabulary_machine_name' => 'session_format',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'session-format/panel-discussion',
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
  $terms[] = array(
    'name' => 'Architects',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'e3442f2a-4ee4-4f76-b695-e1424141d197',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/architects',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
