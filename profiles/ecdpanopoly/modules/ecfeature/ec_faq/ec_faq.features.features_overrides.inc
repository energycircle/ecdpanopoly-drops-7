<?php
/**
 * @file
 * ec_faq.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_faq_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__faq.value|extra_fields|form|metatags|weight"] = 2;
  $overrides["variable.field_bundle_settings_node__faq.value|extra_fields|form|path|weight"] = 5;
  $overrides["variable.field_bundle_settings_node__faq.value|extra_fields|form|redirect|weight"] = 4;
  $overrides["variable.field_bundle_settings_node__faq.value|extra_fields|form|title|weight"] = 0;

 return $overrides;
}
