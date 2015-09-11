<?php
/**
 * @file
 * ec_redhen.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function ec_redhen_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'redhen_profile_pages';
  $pm_existing_page->label = 'RedHen Profile Pages';
  $pm_existing_page->context = 'entity|redhen_contact|contact_id';
  $pm_existing_page->paths = 'redhen/contact/%redhen_contact';
  $export['redhen_profile_pages'] = $pm_existing_page;

  return $export;
}
