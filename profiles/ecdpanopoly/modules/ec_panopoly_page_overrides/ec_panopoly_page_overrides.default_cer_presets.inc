<?php
/**
 * @file
 * ec_panopoly_page_overrides.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_panopoly_page_overrides_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*panopoly_page*field_ref_page_blog*node*blog_post*field_ref_blog_page';
  $cnr_obj->enabled = 1;
  $export['node*panopoly_page*field_ref_page_blog*node*blog_post*field_ref_blog_page'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*panopoly_page*field_ref_page_case_study*node*case_study*field_ref_case_sudy_page';
  $cnr_obj->enabled = 1;
  $export['node*panopoly_page*field_ref_page_case_study*node*case_study*field_ref_case_sudy_page'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*panopoly_page*field_ref_page_promotions*node*promotion*field_ref_promo_page';
  $cnr_obj->enabled = 1;
  $export['node*panopoly_page*field_ref_page_promotions*node*promotion*field_ref_promo_page'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*panopoly_page*field_ref_page_testimonial*node*testimonial*field_ref_testimonial_page';
  $cnr_obj->enabled = 1;
  $export['node*panopoly_page*field_ref_page_testimonial*node*testimonial*field_ref_testimonial_page'] = $cnr_obj;

  return $export;
}
