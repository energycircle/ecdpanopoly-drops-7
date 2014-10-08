<?php
/**
 * @file
 * ec_base_config.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_base_config_defaultconfig_features() {
  return array(
    'ec_base_config' => array(
      'metatag_config_default' => 'metatag_config_default',
    ),
  );
}

/**
 * Implements hook_defaultconfig_metatag_config_default().
 */
function ec_base_config_defaultconfig_metatag_config_default() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'global';
  $config->config = array(
    'title' => array(
      'value' => '[current-page:title] | [site:name]',
    ),
    'generator' => array(
      'value' => 'Drupal 7 (http://drupal.org)',
    ),
    'canonical' => array(
      'value' => '[current-page:url:absolute]',
    ),
    'shortlink' => array(
      'value' => '[current-page:url:unaliased]',
    ),
    'og:type' => array(
      'value' => 'article',
    ),
    'og:title' => array(
      'value' => '[current-page:title]',
    ),
    'og:site_name' => array(
      'value' => '[site:name]',
    ),
    'og:url' => array(
      'value' => '[current-page:url:absolute]',
    ),
  );
  $export['global'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'node';
  $config->config = array(
    'title' => array(
      'value' => '[node:title] | [site:name]',
    ),
    'description' => array(
      'value' => '[node:summary]',
    ),
    'author' => array(
      'value' => '[node:author:field_google_url]',
    ),
    'og:title' => array(
      'value' => '[node:title]',
    ),
    'og:description' => array(
      'value' => '[node:summary]',
    ),
  );
  $export['node'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'taxonomy_term';
  $config->config = array(
    'title' => array(
      'value' => '[term:name] | [site:name]',
    ),
    'description' => array(
      'value' => '[term:description]',
    ),
    'og:title' => array(
      'value' => '[term:name]',
    ),
    'og:description' => array(
      'value' => '[term:description]',
    ),
  );
  $export['taxonomy_term'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'user';
  $config->config = array(
    'title' => array(
      'value' => '[user:name] | [site:name]',
    ),
    'og:type' => array(
      'value' => 'profile',
    ),
    'og:title' => array(
      'value' => '[user:name]',
    ),
    'og:image' => array(
      'value' => '[user:picture:url]',
    ),
  );
  $export['user'] = $config;

  return $export;
}
