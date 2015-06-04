<?php
/**
 * @file
 * ec_testimonial.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_testimonial_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*testimonial*field_ref_testimonial_article*node*article*field_ref_article_testimonial';
  $cnr_obj->enabled = 1;
  $export['node*testimonial*field_ref_testimonial_article*node*article*field_ref_article_testimonial'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*testimonial*field_ref_testimonial_case_study*node*case_study*field_ref_case_study_testimonial';
  $cnr_obj->enabled = 1;
  $export['node*testimonial*field_ref_testimonial_case_study*node*case_study*field_ref_case_study_testimonial'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*testimonial*field_ref_testimonial_page*node*panopoly_page*field_ref_page_testimonial';
  $cnr_obj->enabled = 0;
  $export['node*testimonial*field_ref_testimonial_page*node*panopoly_page*field_ref_page_testimonial'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*testimonial*field_ref_testimonial_prodpage*node*product_page*field_ref_prodpage_testimonial';
  $cnr_obj->enabled = 0;
  $export['node*testimonial*field_ref_testimonial_prodpage*node*product_page*field_ref_prodpage_testimonial'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*testimonial*field_ref_testimonial_serv_cat*node*service_category*field_ref_serv_cat_testimonial';
  $cnr_obj->enabled = 0;
  $export['node*testimonial*field_ref_testimonial_serv_cat*node*service_category*field_ref_serv_cat_testimonial'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*testimonial*field_ref_testimonial_serv_group*node*service_group*field_ref_serv_group_testimonial';
  $cnr_obj->enabled = 1;
  $export['node*testimonial*field_ref_testimonial_serv_group*node*service_group*field_ref_serv_group_testimonial'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*testimonial*field_ref_testimonial_service*node*service*field_ref_service_testimonial';
  $cnr_obj->enabled = 1;
  $export['node*testimonial*field_ref_testimonial_service*node*service*field_ref_service_testimonial'] = $cnr_obj;

  return $export;
}
