<?php
/**
 * @file
 * ec_campaign_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ec_campaign_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_footer';
  $context->description = 'Used to hide the footer with css';
  $context->tag = 'Page Style';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'field_name' => 'field_panel_hide_footer',
        'field_status' => 'match',
        'field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'panel-hide-footer',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page Style');
  t('Used to hide the footer with css');
  $export['hide_footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_header';
  $context->description = 'Used to hide the header with css';
  $context->tag = 'Page Style';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'field_name' => 'field_panel_hide_header',
        'field_status' => 'match',
        'field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'panel-hide-header',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page Style');
  t('Used to hide the header with css');
  $export['hide_header'] = $context;

  return $export;
}
