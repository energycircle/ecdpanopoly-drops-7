<?php
/**
 * @file
 * ec_conferences_lte.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_conferences_lte_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Regional',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '0b89747c-20c3-4e92-8d60-e8a6d9ed5b5f',
    'vocabulary_machine_name' => 'conferences_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'conferences-types/regional',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bronze Sponsor',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 4,
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
      1 => array(
        'alias' => 'sponsor-types/bronze-sponsor',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Host Sponsor',
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
      1 => array(
        'alias' => 'sponsor-types/host-sponsor',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gold Sponsor',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 2,
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
      1 => array(
        'alias' => 'sponsor-types/gold-sponsor',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Silver Sponsor',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 3,
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
      1 => array(
        'alias' => 'sponsor-types/silver-sponsor',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Platinum Sponsor',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 1,
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
      1 => array(
        'alias' => 'sponsor-types/platinum-sponsor',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'b20d6614-3ff6-4389-a609-0790ce9caa1e',
    'vocabulary_machine_name' => 'conferences_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'conferences-types/national',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Promotional Partner',
    'description' => NULL,
    'format' => NULL,
    'weight' => 6,
    'uuid' => 'f36c51f2-bdcf-467e-b8bd-ce1b19107833',
    'vocabulary_machine_name' => 'sponsor_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'sponsor-types/promotional-partner',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Media Sponsor',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 5,
    'uuid' => 'f8ff3349-5c0d-4772-8ea5-a61d1ef33191',
    'vocabulary_machine_name' => 'sponsor_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'sponsor-types/media',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'sponsor-types/media-sponsor',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
