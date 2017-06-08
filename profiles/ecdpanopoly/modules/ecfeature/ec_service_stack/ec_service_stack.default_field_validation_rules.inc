<?php
/**
 * @file
 * ec_service_stack.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function ec_service_stack_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Service Spam Protect';
  $rule->name = 'service_spam_protect';
  $rule->field_name = 'field_business2';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'schedule_service';
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
    'errors' => 1,
  );
  $rule->error_message = 'Sorry, no spam permitted. ';
  $export['service_spam_protect'] = $rule;

  return $export;
}
