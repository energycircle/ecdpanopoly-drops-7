<?php
/**
 * @file
 * ec_casestudy.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_casestudy_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_article*node*article*field_ref_article_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_article*node*article*field_ref_article_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_blog*node*blog_post*field_ref_blog_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_blog*node*blog_post*field_ref_blog_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_prodpage*node*product_page*field_ref_prodpage_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_prodpage*node*product_page*field_ref_prodpage_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_promo*node*promotion*field_ref_promo_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_promo*node*promotion*field_ref_promo_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_serv_cat*node*service_category*field_ref_serv_cat_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_serv_cat*node*service_category*field_ref_serv_cat_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_serv_group*node*service_group*field_ref_serv_group_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_serv_group*node*service_group*field_ref_serv_group_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_service*node*service*field_ref_service_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_service*node*service*field_ref_service_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_study_testimonial*node*testimonial*field_ref_testimonial_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_study_testimonial*node*testimonial*field_ref_testimonial_case_study'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*case_study*field_ref_case_sudy_page*node*panopoly_page*field_ref_page_case_study';
  $cnr_obj->enabled = 0;
  $export['node*case_study*field_ref_case_sudy_page*node*panopoly_page*field_ref_page_case_study'] = $cnr_obj;

  return $export;
}
