<?php
/**
 * @file
 * ec_service_review_system.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_service_review_system_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: management:admin/content
  $menu_links['management:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Find and manage content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content');


  return $menu_links;
}
