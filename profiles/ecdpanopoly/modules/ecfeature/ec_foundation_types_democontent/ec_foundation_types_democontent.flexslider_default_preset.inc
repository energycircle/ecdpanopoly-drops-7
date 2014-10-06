<?php
/**
 * @file
 * ec_foundation_types_democontent.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function ec_foundation_types_democontent_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'home_slides';
  $preset->title = 'Home Slides';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'sc_1280x440';
  $preset->options = array(
    'animation' => 'slide',
    'animationDuration' => 700,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 14000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 1,
    'controlNav' => 0,
    'keyboardNav' => 1,
    'mousewheel' => 1,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['home_slides'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'testimonials';
  $preset->title = 'testimonials';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 's_460';
  $preset->options = array(
    'animation' => 'slide',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 14000,
    'animationLoop' => 0,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 1,
    'controlNav' => 0,
    'keyboardNav' => 1,
    'mousewheel' => 1,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['testimonials'] = $preset;

  return $export;
}
