<?php
/**
 * @file
 * ec_mobile_changes.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_mobile_changes_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panels_mini
  $overrides["panels_mini.header.display|content|new-3290653b-0769-430c-9897-7f86f1d38620|position"] = 1;
  $overrides["panels_mini.header.display|content|new-625c6381-2972-4318-8c37-4ee527175ff2"] = (object) array(
      'pid' => 'new-625c6381-2972-4318-8c37-4ee527175ff2',
      'panel' => 'three_25_25_50_top',
      'type' => 'custom',
      'subtype' => 'mobile_header_buttons',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'admin_title' => '',
        'title' => '',
        'title_heading' => 'h2',
        'body' => '',
        'format' => 'panopoly_wysiwyg_text',
        'substitute' => TRUE,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'mobile',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '625c6381-2972-4318-8c37-4ee527175ff2',
    );

 return $overrides;
}
