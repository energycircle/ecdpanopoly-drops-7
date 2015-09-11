<?php
/**
 * @file
 * ec_testimonial.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_testimonial_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-testimonial-field_video.widget|settings|allowed_schemes|private"]["DELETED"] = TRUE;
  $overrides["field_instance.node-testimonial-field_video.widget|settings|browser_plugins|media_internet"] = 0;

 return $overrides;
}
