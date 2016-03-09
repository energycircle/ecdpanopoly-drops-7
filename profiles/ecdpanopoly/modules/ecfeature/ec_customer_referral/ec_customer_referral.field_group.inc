<?php
/**
 * @file
 * ec_customer_referral.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_customer_referral_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ec_referral_information|entityform|customer_referral|form';
  $field_group->group_name = 'group_ec_referral_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'customer_referral';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_ec_referral_referrer_email',
      1 => 'field_ec_referral_referrer_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ec-referral-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ec_referral_information|entityform|customer_referral|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ec_referral_list|entityform|customer_referral|form';
  $field_group->group_name = 'group_ec_referral_list';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'customer_referral';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referral Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_ec_referral_refer_friend',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ec-referral-list field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ec_referral_list|entityform|customer_referral|form'] = $field_group;

  return $export;
}
