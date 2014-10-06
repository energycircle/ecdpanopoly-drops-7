<?php
/**
 * @file
 * ec_foundation_types.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_foundation_types_default_cer() {
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
