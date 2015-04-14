<?php
// $Id$
/*
 * Copyright © 2012 New Signature
 *
 * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * You can contact New Signature by electronic mail at labs@newsignature.com -or- by U.S. Postal Service at 1100 H St. NW, Suite 940, Washington, DC 20005.
 */
/**
 * @file Provides theme functions for the new addressfield field formatters.
 */

/**
 * Implements theme_field();
 * 
 * Themes an address according to the default renderer.
 */
function theme_addressfield_formatter($vars) {
  $address = $vars['address'];
  $handlers = $vars['handlers'];
  
  $out = addressfield_generate($address, $handlers, array('mode' => 'render'));
  return '<div class="addressfield">' . render($out) . '</div>';
}

/**
 * Implements theme_field();
 * 
 * Themes an address field into "city, state, country"
 */
function theme_addressfield_formatter__citystate($vars) {
  $loc = $vars['address'];
  
  // Determine which location components to render
  $out = array();
  if (!empty($loc['locality'])) {
    $out[] = $loc['locality'];
  }
  if (!empty($loc['administrative_area'])) {
    $out[] = $loc['administrative_area'];
  }
  if ($loc['country'] != addressfield_tokens_default_country() && $country_name = _addressfield_tokens_country($loc['country'])) {
    $out[] = $country_name;
  }
  
  // If there's no location, render an alternate
  if (empty($out)) {
    $out[] = 'Undefined';
  }
  
  // Render the location components
  $output = '<span class="addressfield-citystate">' . implode(', ', $out) . '</span>';
  
  return $output;
}

/**
 * Implements theme_field();
 * 
 * Themes an address field into "name, street1, street2, city, state, zip, country"
 */
function theme_addressfield_formatter__linear($vars) {
  $loc = $vars['address'];
  
  // Determine which location components to render
  $out = array();
  if (!empty($loc['name_line']) && $vars['name_line']) {
    $out[] = $loc['name_line'];
  }
  if (!empty($loc['organisation_name']) && $vars['organisation_name']) {
    $out[] = $loc['organisation_name'];
  }
  if (!empty($loc['thoroughfare'])) {
    $out[] = $loc['thoroughfare'];
  }
  if (!empty($loc['premise']) && $vars['premise']) {
    $out[] = $loc['premise'];
  }
  if (!empty($loc['locality'])) {
    $out[] = $loc['locality'];
  }
  if (!empty($loc['administrative_area'])) {
    $out[] = $loc['administrative_area'];
  }
  if (!empty($loc['postal_code'])) {
    $out[] = $loc['postal_code'];
  }
  if ($loc['country'] != addressfield_tokens_default_country() && $country_name = _addressfield_tokens_country($loc['country'])) {
    $out[] = $country_name;
  }
  
  // Render the location components
  $output = implode(', ', $out);
  
  return $output;
}