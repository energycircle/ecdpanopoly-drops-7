<?php
/**
 * @file
 * ec_casestudy.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_casestudy_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:case_study:default:default.display|content|new-1126786f-4c05-4a8e-b5cc-2d078e0e3147|position"] = 1;
  $overrides["panelizer_defaults.node:case_study:default:default.display|content|new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2|position"] = 0;
  $overrides["panelizer_defaults.node:case_study:default:default.display|content|new-905e2642-3f3f-49d4-923f-0dd613a046b1|position"] = 3;
  $overrides["panelizer_defaults.node:case_study:default:default.display|content|new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd|position"] = 2;
  $overrides["panelizer_defaults.node:case_study:default:default.display|panels|two_66_33_first|0"] = 'new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2';
  $overrides["panelizer_defaults.node:case_study:default:default.display|panels|two_66_33_first|1"] = 'new-1126786f-4c05-4a8e-b5cc-2d078e0e3147';
  $overrides["panelizer_defaults.node:case_study:default:default.display|panels|two_66_33_first|2"] = 'new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd';
  $overrides["panelizer_defaults.node:case_study:default:default.display|panels|two_66_33_first|3"] = 'new-905e2642-3f3f-49d4-923f-0dd613a046b1';

 return $overrides;
}
