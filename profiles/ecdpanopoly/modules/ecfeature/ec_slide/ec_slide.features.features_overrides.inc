<?php
/**
 * @file
 * ec_slide.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_slide_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: flexslider_optionset
  $overrides["flexslider_optionset.default.export_type"]["DELETED"] = TRUE;
  $overrides["flexslider_optionset.default.type"]["DELETED"] = TRUE;

 return $overrides;
}
