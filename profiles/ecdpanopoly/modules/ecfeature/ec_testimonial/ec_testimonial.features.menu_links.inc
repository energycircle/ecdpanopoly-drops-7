<?php
/**
 * @file
 * ec_testimonial.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ec_testimonial_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary-menu_testimonials:node/3
  $menu_links['menu-auxiliary-menu_testimonials:node/3'] = array(
    'menu_name' => 'menu-auxiliary-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Testimonials',
    'options' => array(
      'identifier' => 'menu-auxiliary-menu_testimonials:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_testimonials:node/3
  $menu_links['menu-footer-menu_testimonials:node/3'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Testimonials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/ecdpanopoly/modules/eccontrib-discontinue/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_testimonials:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: navigation_testimonial:node/add/testimonial
  $menu_links['navigation_testimonial:node/add/testimonial'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/testimonial',
    'router_path' => 'node/add/testimonial',
    'link_title' => 'Testimonial',
    'options' => array(
      'attributes' => array(
        'title' => 'A customer testimonial, including text, image, and/or video',
      ),
      'identifier' => 'navigation_testimonial:node/add/testimonial',
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
  t('Testimonial');
  t('Testimonials');


  return $menu_links;
}
