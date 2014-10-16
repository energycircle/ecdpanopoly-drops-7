<?php
/**
 * @file
 * ec_testimonial.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function ec_testimonial_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'testimonials';
  $preset->title = 'testimonials';
  $preset->theme = 'classic';
  $preset->options = '';
  $export['testimonials'] = $preset;

  return $export;
}
