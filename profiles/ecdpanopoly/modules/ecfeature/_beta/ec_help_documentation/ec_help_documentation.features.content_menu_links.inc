<?php
/**
 * @file
 * ec_help_documentation.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ec_help_documentation_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: management:help-documentation
  $menu_links['management:help-documentation'] = array(
    'menu_name' => 'management',
    'link_path' => 'help-documentation',
    'router_path' => 'help-documentation',
    'link_title' => 'EC Help Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib-discontinue/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('EC Help Documentation');


  return $menu_links;
}
