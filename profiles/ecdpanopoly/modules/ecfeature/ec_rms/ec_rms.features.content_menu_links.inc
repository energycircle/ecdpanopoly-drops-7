<?php
/**
 * @file
 * ec_rms.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_rms_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: navigation_rms---customer-review:node/add/ec-review
  $menu_links['navigation_rms---customer-review:node/add/ec-review'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ec-review',
    'router_path' => 'node/add/ec-review',
    'link_title' => 'RMS - Customer Review',
    'options' => array(
      'attributes' => array(
        'title' => 'A customer review',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation_rms---review-site:node/add/review-site
  $menu_links['navigation_rms---review-site:node/add/review-site'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/review-site',
    'router_path' => 'node/add/review-site',
    'link_title' => 'RMS - Review Site',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('RMS - Customer Review');
  t('RMS - Review Site');


  return $menu_links;
}
