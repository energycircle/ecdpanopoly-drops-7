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
    'name' => 'President',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '36fdccdf-3c79-4fcb-9fb2-e0625b651570',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-position/president',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Employee',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
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
    ),
  );
  $terms[] = array(
    'name' => 'Outgoing Chair',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '5023325c-c072-4211-a510-7441209b4552',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-position/outgoing-chair',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Officer',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
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
    'name' => 'Board Member',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '87da4bd9-bcd5-4528-847e-c638d9598f2a',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-types/board-member',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Incoming Chair',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '8e46e337-7c79-4729-8ecf-18e4ca04707d',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-position/incoming-chair',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Director',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
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
  $terms[] = array(
    'name' => 'Current Chair',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'ce103571-9bc9-4e83-a4eb-bb2443a3d9f0',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-position/current-chair',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Board Treasurer',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'fcd9be1c-97b8-4cad-800a-e5775d20d697',
    'vocabulary_machine_name' => 'contact_position',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'contact-position/board-treasurer',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
