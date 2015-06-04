<?php
/**
 * @file
 * ec_promotions.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_promotions_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promotion*field_ref_promo_article*node*article*field_ref_article_promo';
  $cnr_obj->enabled = 1;
  $export['node*promotion*field_ref_promo_article*node*article*field_ref_article_promo'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promotion*field_ref_promo_case_study*node*case_study*field_ref_case_study_promo';
  $cnr_obj->enabled = 1;
  $export['node*promotion*field_ref_promo_case_study*node*case_study*field_ref_case_study_promo'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promotion*field_ref_promo_page*node*panopoly_page*field_ref_page_promotions';
  $cnr_obj->enabled = 0;
  $export['node*promotion*field_ref_promo_page*node*panopoly_page*field_ref_page_promotions'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promotion*field_ref_promo_serv_cat*node*service_category*field_ref_serv_cat_promo';
  $cnr_obj->enabled = 1;
  $export['node*promotion*field_ref_promo_serv_cat*node*service_category*field_ref_serv_cat_promo'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promotion*field_ref_promo_serv_group*node*service_group*field_ref_serv_group_promo';
  $cnr_obj->enabled = 1;
  $export['node*promotion*field_ref_promo_serv_group*node*service_group*field_ref_serv_group_promo'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promotion*field_ref_promo_service*node*service*field_ref_service_promo';
  $cnr_obj->enabled = 1;
  $export['node*promotion*field_ref_promo_service*node*service*field_ref_service_promo'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promotion*field_ref_promotion_product*node*product_page*field_ref_prodpage_promotion';
  $cnr_obj->enabled = 0;
  $export['node*promotion*field_ref_promotion_product*node*product_page*field_ref_prodpage_promotion'] = $cnr_obj;

  return $export;
}
