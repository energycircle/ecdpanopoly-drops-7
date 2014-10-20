<?php
/**
 * @file
 * ec_distinction.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_distinction_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_distinction';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_distinction';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_distinction';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_distinction';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_distinction';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_distinction';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_distinction';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_distinction';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_distinction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_distinction_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_distinction_types_pattern'] = $strongarm;

  return $export;
}
