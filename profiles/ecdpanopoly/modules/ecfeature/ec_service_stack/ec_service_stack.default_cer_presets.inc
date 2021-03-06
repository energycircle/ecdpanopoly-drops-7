<?php
/**
 * @file
 * ec_service_stack.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_service_stack_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service*field_ref_service_blog*node*blog_post*field_ref_blog_service';
  $cnr_obj->enabled = 0;
  $export['node*service*field_ref_service_blog*node*blog_post*field_ref_blog_service'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service*field_ref_service_case_study*node*case_study*field_ref_case_study_service';
  $cnr_obj->enabled = 1;
  $export['node*service*field_ref_service_case_study*node*case_study*field_ref_case_study_service'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service*field_ref_service_product*node*product_page*field_ref_prodpage_service';
  $cnr_obj->enabled = 0;
  $export['node*service*field_ref_service_product*node*product_page*field_ref_prodpage_service'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service*field_ref_service_promo*node*promotion*field_ref_promo_service';
  $cnr_obj->enabled = 0;
  $export['node*service*field_ref_service_promo*node*promotion*field_ref_promo_service'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service*field_ref_service_serv_cat*node*service_category*field_ref_serv_cat_services';
  $cnr_obj->enabled = 1;
  $export['node*service*field_ref_service_serv_cat*node*service_category*field_ref_serv_cat_services'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service*field_ref_service_testimonial*node*testimonial*field_ref_testimonial_service';
  $cnr_obj->enabled = 0;
  $export['node*service*field_ref_service_testimonial*node*testimonial*field_ref_testimonial_service'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_blog*node*blog_post*field_ref_blog_serv_cat';
  $cnr_obj->enabled = 0;
  $export['node*service_category*field_ref_serv_cat_blog*node*blog_post*field_ref_blog_serv_cat'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_case_study*node*case_study*field_ref_case_study_serv_cat';
  $cnr_obj->enabled = 1;
  $export['node*service_category*field_ref_serv_cat_case_study*node*case_study*field_ref_case_study_serv_cat'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_prodpage*node*product_page*field_ref_prodpage_serv_cat';
  $cnr_obj->enabled = 0;
  $export['node*service_category*field_ref_serv_cat_prodpage*node*product_page*field_ref_prodpage_serv_cat'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_promo*node*promotion*field_ref_promo_serv_cat';
  $cnr_obj->enabled = 0;
  $export['node*service_category*field_ref_serv_cat_promo*node*promotion*field_ref_promo_serv_cat'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_serv_group*node*service_category*field_ref_serv_cat_serv_group';
  $cnr_obj->enabled = 0;
  $export['node*service_category*field_ref_serv_cat_serv_group*node*service_category*field_ref_serv_cat_serv_group'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_serv_group*node*service_group*field_ref_serv_group_serv_cat';
  $cnr_obj->enabled = 1;
  $export['node*service_category*field_ref_serv_cat_serv_group*node*service_group*field_ref_serv_group_serv_cat'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_services*node*service*field_ref_service_serv_cat';
  $cnr_obj->enabled = 0;
  $export['node*service_category*field_ref_serv_cat_services*node*service*field_ref_service_serv_cat'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_category*field_ref_serv_cat_testimonial*node*testimonial*field_ref_testimonial_serv_cat';
  $cnr_obj->enabled = 1;
  $export['node*service_category*field_ref_serv_cat_testimonial*node*testimonial*field_ref_testimonial_serv_cat'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_group*field_ref_serv_group_blog*node*blog_post*field_ref_blog_serv_group';
  $cnr_obj->enabled = 1;
  $export['node*service_group*field_ref_serv_group_blog*node*blog_post*field_ref_blog_serv_group'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_group*field_ref_serv_group_case_study*node*case_study*field_ref_case_study_serv_group';
  $cnr_obj->enabled = 1;
  $export['node*service_group*field_ref_serv_group_case_study*node*case_study*field_ref_case_study_serv_group'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_group*field_ref_serv_group_prodpage*node*product_page*field_ref_prodpage_serv_group';
  $cnr_obj->enabled = 0;
  $export['node*service_group*field_ref_serv_group_prodpage*node*product_page*field_ref_prodpage_serv_group'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_group*field_ref_serv_group_promo*node*promotion*field_ref_promo_serv_group';
  $cnr_obj->enabled = 0;
  $export['node*service_group*field_ref_serv_group_promo*node*promotion*field_ref_promo_serv_group'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_group*field_ref_serv_group_serv_cat*node*service_category*field_ref_serv_cat_serv_group';
  $cnr_obj->enabled = 0;
  $export['node*service_group*field_ref_serv_group_serv_cat*node*service_category*field_ref_serv_cat_serv_group'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service_group*field_ref_serv_group_testimonial*node*testimonial*field_ref_testimonial_serv_group';
  $cnr_obj->enabled = 0;
  $export['node*service_group*field_ref_serv_group_testimonial*node*testimonial*field_ref_testimonial_serv_group'] = $cnr_obj;

  return $export;
}
