<?php
/**
 * @file
 * ec_slide.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_slide_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_flexslider:admin/config/media/flexslider
  $menu_links['management_flexslider:admin/config/media/flexslider'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/flexslider',
    'router_path' => 'admin/config/media/flexslider',
    'link_title' => 'FlexSlider',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer FlexSlider presets.',
      ),
      'identifier' => 'management_flexslider:admin/config/media/flexslider',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: navigation_slide:node/add/slide
  $menu_links['navigation_slide:node/add/slide'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/slide',
    'router_path' => 'node/add/slide',
    'link_title' => 'Slide',
    'options' => array(
      'attributes' => array(
        'title' => 'A slide to include in the home page slide set or another slide set.',
      ),
      'identifier' => 'navigation_slide:node/add/slide',
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
  t('FlexSlider');
  t('Slide');


  return $menu_links;
}
