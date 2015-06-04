<?php
/**
 * @file
 * ec_article.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_article_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*article*field_ref_article_blog*node*blog_post*field_ref_blog_article';
  $cnr_obj->enabled = 1;
  $export['node*article*field_ref_article_blog*node*blog_post*field_ref_blog_article'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*article*field_ref_article_case_study*node*case_study*field_ref_case_study_article';
  $cnr_obj->enabled = 1;
  $export['node*article*field_ref_article_case_study*node*case_study*field_ref_case_study_article'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*article*field_ref_article_product*node*product_page*field_ref_prodpage_article';
  $cnr_obj->enabled = 0;
  $export['node*article*field_ref_article_product*node*product_page*field_ref_prodpage_article'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*article*field_ref_article_promo*node*promotion*field_ref_promo_article';
  $cnr_obj->enabled = 0;
  $export['node*article*field_ref_article_promo*node*promotion*field_ref_promo_article'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*article*field_ref_article_testimonial*node*testimonial*field_ref_testimonial_article';
  $cnr_obj->enabled = 0;
  $export['node*article*field_ref_article_testimonial*node*testimonial*field_ref_testimonial_article'] = $cnr_obj;

  return $export;
}
