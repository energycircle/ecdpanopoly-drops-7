<?php
/**
 * @file
 * ec_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_gallery:node/add/gallery
  $menu_links['navigation_gallery:node/add/gallery'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/gallery',
    'router_path' => 'node/add/gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'attributes' => array(
        'title' => 'A photo set to be displayed as a photo gallery or similar display type.',
      ),
      'identifier' => 'navigation_gallery:node/add/gallery',
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
  t('Gallery');


  return $menu_links;
}
