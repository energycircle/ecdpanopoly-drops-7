<?php
/**
 * @file
 * ec_citypages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_citypages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: node
  $overrides["node.city_page.title_label"] = 'Title';

  // Exported overrides for: variable
  $overrides["variable.additional_settings__active_tab_city_page.value"] = 'edit-schemaorg-ui';

 return $overrides;
}
