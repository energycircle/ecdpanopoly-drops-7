<?php
/**
 * @file
 * ec_redhen.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ec_redhen_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'redhen_note-redhen_note-redhen_note_body'
  $field_instances['redhen_note-redhen_note-redhen_note_body'] = array(
    'bundle' => 'redhen_note',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_note',
    'field_name' => 'redhen_note_body',
    'label' => 'Message',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'redhen_note-redhen_note-redhen_note_type'
  $field_instances['redhen_note-redhen_note-redhen_note_type'] = array(
    'bundle' => 'redhen_note',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_note',
    'field_name' => 'redhen_note_type',
    'label' => 'Note Type',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'relation-redhen_affiliation-endpoints'
  $field_instances['relation-redhen_affiliation-endpoints'] = array(
    'bundle' => 'redhen_affiliation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'view_modes' => array(
            'cer' => 'default',
            'entity_rule_setting' => 'default',
            'entityform' => 'default',
            'entityform_type' => 'default',
            'field_collection_item' => 'default',
            'fieldable_panels_pane' => 'default',
            'file' => 'default',
            'menu_link' => 'default',
            'node' => 'default',
            'redhen_contact' => 'default',
            'redhen_contact_type' => 'default',
            'redhen_note' => 'default',
            'redhen_org' => 'default',
            'redhen_org_type' => 'default',
            'redirect' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'user' => 'default',
            'wysiwyg_profile' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'relation-redhen_affiliation-redhen_relation_roles'
  $field_instances['relation-redhen_affiliation-redhen_relation_roles'] = array(
    'bundle' => 'redhen_affiliation',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'This is a placeholder field to control what actions a contact in an organization can perform. Access control to be implemented.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'redhen_relation_roles',
    'label' => 'Organization Role',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'relation-redhen_affiliation-redhen_relation_status'
  $field_instances['relation-redhen_affiliation-redhen_relation_status'] = array(
    'bundle' => 'redhen_affiliation',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'redhen_relation_status',
    'label' => 'Affiliation Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'relation-redhen_connection-endpoints'
  $field_instances['relation-redhen_connection-endpoints'] = array(
    'bundle' => 'redhen_connection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'view_modes' => array(
            'cer' => 'default',
            'entity_rule_setting' => 'default',
            'entityform' => 'default',
            'entityform_type' => 'default',
            'field_collection_item' => 'default',
            'fieldable_panels_pane' => 'default',
            'file' => 'default',
            'menu_link' => 'default',
            'node' => 'default',
            'redhen_contact' => 'default',
            'redhen_contact_type' => 'default',
            'redhen_note' => 'default',
            'redhen_org' => 'default',
            'redhen_org_type' => 'default',
            'redirect' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'user' => 'default',
            'wysiwyg_profile' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'relation-redhen_connection-redhen_relation_status'
  $field_instances['relation-redhen_connection-redhen_relation_status'] = array(
    'bundle' => 'redhen_connection',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'redhen_relation_status',
    'label' => 'Connection Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliation Status');
  t('Connection Status');
  t('Message');
  t('Note Type');
  t('Organization Role');
  t('This is a placeholder field to control what actions a contact in an organization can perform. Access control to be implemented.');
  t('endpoints');

  return $field_instances;
}
