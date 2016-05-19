<?php
/**
 * @file
 * ec_service_stack.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_service_stack_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_service-review-site:node/add/sreview-site.
  $menu_links['navigation_service-review-site:node/add/sreview-site'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sreview-site',
    'router_path' => 'node/add/sreview-site',
    'link_title' => 'Service Review Site',
    'options' => array(
      'attributes' => array(
        'title' => 'Used to display links to sites that manage customer reviews. Usually only one node will be created for this content type. ',
      ),
      'identifier' => 'navigation_service-review-site:node/add/sreview-site',
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
  t('Service Review Site');

  return $menu_links;
}
