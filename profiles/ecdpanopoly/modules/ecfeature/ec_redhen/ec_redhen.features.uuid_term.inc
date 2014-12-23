<?php
/**
 * @file
 * ec_redhen.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_redhen_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Staff',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 3,
    'uuid' => '3b9cbf88-7150-4f7a-b950-95ae3c5f0319',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-types/employee',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'contact-position/staff',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Officer',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 1,
    'uuid' => '54302718-5821-413d-8d0e-57a38fcc4570',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-types/officer',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Person',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '8a2c52d3-47aa-44f1-8440-32c54d82ba06',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-position/person',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Director',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 2,
    'uuid' => 'bd903a62-3af5-4892-89ce-e1f0c162c972',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-types/director',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
