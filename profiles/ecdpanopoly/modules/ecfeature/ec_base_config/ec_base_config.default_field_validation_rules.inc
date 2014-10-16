<?php
/**
 * @file
 * ec_base_config.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function ec_base_config_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Spam Protection';
  $rule->name = 'contact_spam_protection';
  $rule->field_name = 'field_business2';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'contact';
  $rule->validator = 'field_validation_must_be_empty_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Sorry, no spam please.';
  $export['contact_spam_protection'] = $rule;

  return $export;
}