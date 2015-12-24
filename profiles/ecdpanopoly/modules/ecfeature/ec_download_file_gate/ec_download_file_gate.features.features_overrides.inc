<?php
/**
 * @file
 * ec_download_file_gate.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_download_file_gate_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.admin_views_file.display|default|display_options|fields|field_file_restricted"] = array(
    'id' => 'field_file_restricted',
    'table' => 'field_data_field_file_restricted',
    'field' => 'field_file_restricted',
    'type' => 'list_key',
  );

 return $overrides;
}
