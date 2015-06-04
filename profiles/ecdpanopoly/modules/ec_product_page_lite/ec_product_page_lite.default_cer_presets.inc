<?php
/**
 * @file
 * ec_product_page_lite.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_product_page_lite_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*product_page*field_ref_prodpage_article*node*article*field_ref_article_product';
  $cnr_obj->enabled = 1;
  $export['node*product_page*field_ref_prodpage_article*node*article*field_ref_article_product'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*product_page*field_ref_prodpage_case_study*node*case_study*field_ref_case_study_prodpage';
  $cnr_obj->enabled = 1;
  $export['node*product_page*field_ref_prodpage_case_study*node*case_study*field_ref_case_study_prodpage'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*product_page*field_ref_prodpage_promotion*node*promotion*field_ref_promotion_product';
  $cnr_obj->enabled = 1;
  $export['node*product_page*field_ref_prodpage_promotion*node*promotion*field_ref_promotion_product'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*product_page*field_ref_prodpage_serv_cat*node*service_category*field_ref_serv_cat_prodpage';
  $cnr_obj->enabled = 1;
  $export['node*product_page*field_ref_prodpage_serv_cat*node*service_category*field_ref_serv_cat_prodpage'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*product_page*field_ref_prodpage_serv_group*node*service_group*field_ref_serv_group_prodpage';
  $cnr_obj->enabled = 1;
  $export['node*product_page*field_ref_prodpage_serv_group*node*service_group*field_ref_serv_group_prodpage'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*product_page*field_ref_prodpage_service*node*service*field_ref_service_product';
  $cnr_obj->enabled = 1;
  $export['node*product_page*field_ref_prodpage_service*node*service*field_ref_service_product'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*product_page*field_ref_prodpage_testimonial*node*testimonial*field_ref_testimonial_prodpage';
  $cnr_obj->enabled = 1;
  $export['node*product_page*field_ref_prodpage_testimonial*node*testimonial*field_ref_testimonial_prodpage'] = $cnr_obj;

  return $export;
}
