<?php
/**
 * @file
 * ec_customer_referral.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_customer_referral_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__customer_referral';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__customer_referral'] = $strongarm;

  return $export;
}
