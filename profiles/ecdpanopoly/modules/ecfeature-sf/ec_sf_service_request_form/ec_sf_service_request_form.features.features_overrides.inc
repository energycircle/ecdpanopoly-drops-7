<?php
/**
 * @file
 * ec_sf_service_request_form.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_sf_service_request_form_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.entityform-schedule_service-field_name.entityform-schedule_service-field_name"]["DELETED"] = TRUE;

 return $overrides;
}
