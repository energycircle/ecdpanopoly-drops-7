<?php
/**
 * @file
 * ec_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|article|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shown on This Page',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_article_case_study',
      1 => 'field_ref_article_product',
      2 => 'field_ref_article_testimonial',
      3 => 'field_ref_article_blog',
      4 => 'field_ref_article_promo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Shown on This Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_shown_on_this_page|node|article|form'] = $field_group;

  return $export;
}
