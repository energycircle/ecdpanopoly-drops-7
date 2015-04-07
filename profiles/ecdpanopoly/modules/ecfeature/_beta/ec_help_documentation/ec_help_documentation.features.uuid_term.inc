<?php
/**
 * @file
 * ec_help_documentation.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_help_documentation_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'EC Features',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '5db3baf4-4271-4c4a-bb98-5b07cf3f9696',
    'vocabulary_machine_name' => 'help_document_type',
    'metatags' => array(
      'und' => array(
        'title' => array(
          'value' => '',
        ),
        'description' => array(
          'value' => '',
        ),
        'canonical' => array(
          'value' => '',
        ),
        'shortlink' => array(
          'value' => '',
        ),
        'og:url' => array(
          'value' => '',
        ),
        'og:title' => array(
          'value' => '',
        ),
        'og:description' => array(
          'value' => '',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Technical',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '7145d731-acb5-4b05-a9cf-bee0a6e92ac6',
    'vocabulary_machine_name' => 'help_document_type',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Internal',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'ce19b640-297b-4a98-81f5-e1e0a6321fec',
    'vocabulary_machine_name' => 'help_document_type',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
