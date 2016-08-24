<?php
/**
 * @file
 * ec_sr3.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_sr3_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_sr3-service-review:node/add/sr3-service-review.
  $menu_links['navigation_sr3-service-review:node/add/sr3-service-review'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sr3-service-review',
    'router_path' => 'node/add/sr3-service-review',
    'link_title' => 'SR3 Service Review',
    'options' => array(
      'attributes' => array(
        'title' => 'A customer\'s service review',
      ),
      'identifier' => 'navigation_sr3-service-review:node/add/sr3-service-review',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('SR3 Service Review');

  return $menu_links;
}