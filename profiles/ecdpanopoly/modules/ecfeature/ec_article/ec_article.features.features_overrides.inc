<?php
/**
 * @file
 * ec_article.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_article_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:article:default:default.display|content|new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e|configuration|formatter_settings|image_style"] = 'sc_940x470_mc';
  $overrides["panelizer_defaults.node:article:default:default.display|content|new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e|configuration|override_title_heading"] = 'h2';

 return $overrides;
}
