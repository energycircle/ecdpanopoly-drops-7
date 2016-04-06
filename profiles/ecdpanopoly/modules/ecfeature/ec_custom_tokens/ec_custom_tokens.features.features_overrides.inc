<?php
/**
 * @file
 * ec_custom_tokens.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_custom_tokens_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ctools_custom_content
  $overrides["ctools_custom_content.phone_number.category"] = 'Site Assets';
  $overrides["ctools_custom_content.phone_number.settings|body"] = '<p>[custom:phone-number]</p>';
  $overrides["ctools_custom_content.phone_number.settings|substitute"] = 1;

 return $overrides;
}
