<?php
/**
 * @file
 * ec_slide.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function ec_slide_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'home_slides';
  $preset->title = 'Home Slides';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'sc_1280x440';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = '';
  $export['home_slides'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'slideshow_slider';
  $preset->title = 'Slideshow Slider';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'sc_780x390';
  $preset->imagestyle_thumbnail = 'sc_780x390';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 1,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 1,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 1,
    'slideshowSpeed' => '11000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
  );
  $export['slideshow_slider'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'slideshow_thumbnails';
  $preset->title = 'Slideshow Thumbnails ';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'sc_220x110';
  $preset->imagestyle_thumbnail = 'sc_220x110';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '5000',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 1,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '#flexslider-slider',
    'asNavFor' => '#flexslider-slider',
    'itemWidth' => '150',
    'itemMargin' => '5',
    'minItems' => '1',
    'maxItems' => '5',
    'move' => '1',
    'animation' => 'slide',
    'slideshow' => 0,
    'slideshowSpeed' => '8000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 1,
    'pauseOnHover' => 1,
    'manualControls' => '',
  );
  $export['slideshow_thumbnails'] = $preset;

  return $export;
}