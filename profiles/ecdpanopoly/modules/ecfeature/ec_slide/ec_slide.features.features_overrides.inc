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

  // Exported overrides for: image
  $overrides["image.flexslider_full.label"] = 'flexslider_full';
  $overrides["image.flexslider_thumbnail.label"] = 'flexslider_thumbnail';

  // Exported overrides for: user_permission
  $overrides["user_permission.create slide content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.create slide content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any slide content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any slide content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any slide content.roles|EC Platinum editor"]["DELETED"] = TRUE;

 return $overrides;
}
