<?php
/**
 * @file
 * ec_blog_post.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_blog_post_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_ref_blog_article*node*article*field_ref_article_blog';
  $cnr_obj->enabled = 0;
  $export['node*blog_post*field_ref_blog_article*node*article*field_ref_article_blog'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_ref_blog_case_study*node*case_study*field_ref_case_study_blog';
  $cnr_obj->enabled = 1;
  $export['node*blog_post*field_ref_blog_case_study*node*case_study*field_ref_case_study_blog'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_ref_blog_page*node*panopoly_page*field_ref_page_blog';
  $cnr_obj->enabled = 0;
  $export['node*blog_post*field_ref_blog_page*node*panopoly_page*field_ref_page_blog'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_ref_blog_serv_cat*node*service_category*field_ref_serv_cat_blog';
  $cnr_obj->enabled = 1;
  $export['node*blog_post*field_ref_blog_serv_cat*node*service_category*field_ref_serv_cat_blog'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_ref_blog_serv_group*node*service_group*field_ref_serv_group_blog';
  $cnr_obj->enabled = 0;
  $export['node*blog_post*field_ref_blog_serv_group*node*service_group*field_ref_serv_group_blog'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_ref_blog_service*node*service*field_ref_service_blog';
  $cnr_obj->enabled = 1;
  $export['node*blog_post*field_ref_blog_service*node*service*field_ref_service_blog'] = $cnr_obj;

  return $export;
}
