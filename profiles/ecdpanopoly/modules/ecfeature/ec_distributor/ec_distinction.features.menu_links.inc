<?php
/**
 * @file
 * ec_distinction.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_distinction_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_distinction:node/add/distinction
  $menu_links['navigation_distinction:node/add/distinction'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/distinction',
    'router_path' => 'node/add/distinction',
    'link_title' => 'Distinction',
    'options' => array(
      'attributes' => array(
        'title' => 'A certification, membership, award, partner, etc. ',
      ),
      'identifier' => 'navigation_distinction:node/add/distinction',
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
  t('Distinction');


  return $menu_links;
}
