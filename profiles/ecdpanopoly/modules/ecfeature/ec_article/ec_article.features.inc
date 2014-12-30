<?php
/**
 * @file
 * ec_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ec_article_field_default_field_instances_alter(&$data) {
  if (isset($data['node-article-body'])) {
    $data['node-article-body']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_article_author'])) {
    $data['node-article-field_article_author']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_article_image'])) {
    $data['node-article-field_article_image']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_article_source'])) {
    $data['node-article-field_article_source']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-article-field_article_source']['settings']['absolute_url'] = 1; /* WAS: '' */
    $data['node-article-field_article_source']['settings']['title_label_use_field_label'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-article-field_article_type'])) {
    $data['node-article-field_article_type']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_display_date'])) {
    $data['node-article-field_display_date']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_ref_article_blog'])) {
    $data['node-article-field_ref_article_blog']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_ref_article_case_study'])) {
    $data['node-article-field_ref_article_case_study']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_ref_article_product'])) {
    $data['node-article-field_ref_article_product']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_ref_article_promo'])) {
    $data['node-article-field_ref_article_promo']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-field_ref_article_testimonial'])) {
    $data['node-article-field_ref_article_testimonial']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_article_user_default_permissions_alter(&$data) {
  if (isset($data['administer panelizer node article breadcrumbs'])) {
    unset($data['administer panelizer node article breadcrumbs']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node article content'])) {
    unset($data['administer panelizer node article content']['roles']['EC Platinum admin']);
    unset($data['administer panelizer node article content']['roles']['EC Platinum editor']);
  }
  if (isset($data['administer panelizer node article context'])) {
    unset($data['administer panelizer node article context']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node article defaults'])) {
    unset($data['administer panelizer node article defaults']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node article layout'])) {
    unset($data['administer panelizer node article layout']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node article overview'])) {
    unset($data['administer panelizer node article overview']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node article settings'])) {
    unset($data['administer panelizer node article settings']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer taxonomy_term article_types defaults'])) {
    unset($data['administer panelizer taxonomy_term article_types defaults']['roles']['EC Platinum admin']);
  }
}

/**
 * Implements hook_node_info().
 */
function ec_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('A news story, press release, or other type of article.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_article_weight_features_default_settings() {
  $settings = array();

  $settings['article'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
