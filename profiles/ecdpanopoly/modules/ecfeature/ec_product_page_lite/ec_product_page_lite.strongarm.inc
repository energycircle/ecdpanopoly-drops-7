<?php
/**
 * @file
 * ec_product_page_lite.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_product_page_lite_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_page';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_product_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_product_page';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_product_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_product_page';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_product_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_product_page';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_product_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_product_page';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_product_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_product_page';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_product_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_product_page';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_product_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_product_page';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_product_page'] = $strongarm;

  return $export;
}
