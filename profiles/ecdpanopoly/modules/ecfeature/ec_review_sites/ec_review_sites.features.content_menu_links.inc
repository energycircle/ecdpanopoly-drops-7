<?php
/**
 * @file
 * ec_review_sites.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_review_sites_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/review-site
  $menu_links['navigation:node/add/review-site'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/review-site',
    'router_path' => 'node/add/review-site',
    'link_title' => 'Review Site',
    'options' => array(
      'attributes' => array(
        'title' => 'Used to display review sites',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Review Site');


  return $menu_links;
}
