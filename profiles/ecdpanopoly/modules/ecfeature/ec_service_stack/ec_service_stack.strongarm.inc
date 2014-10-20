<?php
/**
 * @file
 * ec_service_stack.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_service_stack_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_service';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_service_category';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_service_group';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_service';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_service_category';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_service_group';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_service';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_service_category';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_service_group';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_service';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_service_category';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_service_group';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_service';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_service_category';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_service_group';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_service';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_service_category';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_service_group';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_service';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_service_category';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_service_group';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_service';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_service_category';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_service_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_service_group';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_service_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__schedule_service';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'email' => array(
        'custom_settings' => TRUE,
      ),
      'confirmation' => array(
        'custom_settings' => FALSE,
      ),
      'download' => array(
        'custom_settings' => FALSE,
      ),
      'table' => array(
        'custom_settings' => TRUE,
      ),
      'review' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__schedule_service'] = $strongarm;

  return $export;
}
