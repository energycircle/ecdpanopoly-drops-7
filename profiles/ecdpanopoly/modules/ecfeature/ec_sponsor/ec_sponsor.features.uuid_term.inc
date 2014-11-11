<?php
/**
 * @file
 * ec_sponsor.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_sponsor_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Bronze',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '1a14437b-a800-435c-af13-6e6a0bd75071',
    'vocabulary_machine_name' => 'sponsor_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'sponsor-types/bronze',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Host',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '3d44076d-54df-47e7-b759-d53c0212c06e',
    'vocabulary_machine_name' => 'sponsor_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'sponsor-types/host',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gold',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '57b1a06e-2d19-4397-89c9-3a28882b65e3',
    'vocabulary_machine_name' => 'sponsor_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'sponsor-types/gold',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Silver',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '6c7431a6-486a-4414-b4b8-ff9d7c690975',
    'vocabulary_machine_name' => 'sponsor_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'sponsor-types/silver',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Platinum',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'a017a85e-c0c8-4e40-9342-a98698094006',
    'vocabulary_machine_name' => 'sponsor_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'sponsor-types/platinum',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
