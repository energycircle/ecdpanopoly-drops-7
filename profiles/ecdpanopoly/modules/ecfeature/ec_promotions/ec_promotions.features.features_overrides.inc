<?php
/**
 * @file
 * ec_promotions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_promotions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: rules_config
  $overrides["rules_config.entityform_notifications_promotion_form_notification.0"] = Array;
  $overrides["rules_config.entityform_notifications_promotion_form_notification.1"] = Array;

 return $overrides;
}
