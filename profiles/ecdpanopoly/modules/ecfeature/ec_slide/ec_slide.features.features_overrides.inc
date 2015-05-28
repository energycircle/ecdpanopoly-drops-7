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
  $overrides["flexslider_optionset.default.options|animationLoop"] = 1;
  $overrides["flexslider_optionset.default.options|controlNav"] = 0;
  $overrides["flexslider_optionset.default.options|directionNav"] = 1;
  $overrides["flexslider_optionset.default.options|keyboard"] = 1;
  $overrides["flexslider_optionset.default.options|mousewheel"] = 0;
  $overrides["flexslider_optionset.default.options|multipleKeyboard"] = 0;
  $overrides["flexslider_optionset.default.options|pauseOnAction"] = 1;
  $overrides["flexslider_optionset.default.options|pauseOnHover"] = 0;
  $overrides["flexslider_optionset.default.options|pausePlay"] = 0;
  $overrides["flexslider_optionset.default.options|randomize"] = 0;
  $overrides["flexslider_optionset.default.options|reverse"] = 0;
  $overrides["flexslider_optionset.default.options|slideshow"] = 1;
  $overrides["flexslider_optionset.default.options|smoothHeight"] = 0;
  $overrides["flexslider_optionset.default.options|thumbCaptions"] = 0;
  $overrides["flexslider_optionset.default.options|thumbCaptionsBoth"] = 0;
  $overrides["flexslider_optionset.default.options|touch"] = 1;
  $overrides["flexslider_optionset.default.options|useCSS"] = 1;
  $overrides["flexslider_optionset.default.options|video"] = 0;
  $overrides["flexslider_optionset.default.type"]["DELETED"] = TRUE;

  // Exported overrides for: image
  $overrides["image.flexslider_full.label"] = 'flexslider_full';
  $overrides["image.flexslider_thumbnail.label"] = 'flexslider_thumbnail';

  // Exported overrides for: user_permission

 return $overrides;
}
