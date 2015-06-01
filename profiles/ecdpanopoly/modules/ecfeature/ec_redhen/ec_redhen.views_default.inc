<?php
/**
 * @file
 * ec_redhen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_redhen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_redhen_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_contact';
  $view->human_name = 'ADMIN RedHen Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ADMIN RedHen Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'redhen_contact_email' => 'redhen_contact_email',
    'field_contact_address_name_line' => 'field_contact_address_name_line',
  );
  $handler->display->display_options['style_options']['default'] = 'field_contact_address_name_line';
  $handler->display->display_options['style_options']['info'] = array(
    'redhen_contact_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_address_name_line' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  /* Field: Contact: Middle Name */
  $handler->display->display_options['fields']['middle_name']['id'] = 'middle_name';
  $handler->display->display_options['fields']['middle_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['middle_name']['field'] = 'middle_name';
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  /* Field: Contact: Email */
  $handler->display->display_options['fields']['redhen_contact_email']['id'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['table'] = 'field_data_redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['field'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['redhen_contact_email']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['redhen_contact_email']['delta_offset'] = '0';
  $handler->display->display_options['fields']['redhen_contact_email']['separator'] = '|';
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Contact: Contact Position */
  $handler->display->display_options['fields']['field_contact_position']['id'] = 'field_contact_position';
  $handler->display->display_options['fields']['field_contact_position']['table'] = 'field_data_field_contact_position';
  $handler->display->display_options['fields']['field_contact_position']['field'] = 'field_contact_position';
  $handler->display->display_options['fields']['field_contact_position']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Contact: Contact ID */
  $handler->display->display_options['sorts']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['sorts']['contact_id']['table'] = 'redhen_contact';
  $handler->display->display_options['sorts']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['sorts']['contact_id']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['contact_id']['expose']['label'] = 'Contact ID';
  /* Sort criterion: Contact: Updated */
  $handler->display->display_options['sorts']['updated']['id'] = 'updated';
  $handler->display->display_options['sorts']['updated']['table'] = 'redhen_contact';
  $handler->display->display_options['sorts']['updated']['field'] = 'updated';
  $handler->display->display_options['sorts']['updated']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['updated']['expose']['label'] = 'Updated';
  /* Sort criterion: Contact: Email (redhen_contact_email) */
  $handler->display->display_options['sorts']['redhen_contact_email_value']['id'] = 'redhen_contact_email_value';
  $handler->display->display_options['sorts']['redhen_contact_email_value']['table'] = 'field_data_redhen_contact_email';
  $handler->display->display_options['sorts']['redhen_contact_email_value']['field'] = 'redhen_contact_email_value';
  $handler->display->display_options['sorts']['redhen_contact_email_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['redhen_contact_email_value']['expose']['label'] = 'Email ';
  /* Sort criterion: Field: Phone (field_phone) */
  $handler->display->display_options['sorts']['field_phone_value']['id'] = 'field_phone_value';
  $handler->display->display_options['sorts']['field_phone_value']['table'] = 'field_data_field_phone';
  $handler->display->display_options['sorts']['field_phone_value']['field'] = 'field_phone_value';
  $handler->display->display_options['sorts']['field_phone_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_phone_value']['expose']['label'] = 'Phone';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  /* Field: Contact: Middle Name */
  $handler->display->display_options['fields']['middle_name']['id'] = 'middle_name';
  $handler->display->display_options['fields']['middle_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['middle_name']['field'] = 'middle_name';
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  /* Field: Contact: Email */
  $handler->display->display_options['fields']['redhen_contact_email']['id'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['table'] = 'field_data_redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['field'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['redhen_contact_email']['type'] = 'editable';
  $handler->display->display_options['fields']['redhen_contact_email']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'redhen_email_formatter',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['redhen_contact_email']['delta_offset'] = '0';
  $handler->display->display_options['fields']['redhen_contact_email']['separator'] = '|';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  /* Field: Contact: Credentials */
  $handler->display->display_options['fields']['field_contact_credentials']['id'] = 'field_contact_credentials';
  $handler->display->display_options['fields']['field_contact_credentials']['table'] = 'field_data_field_contact_credentials';
  $handler->display->display_options['fields']['field_contact_credentials']['field'] = 'field_contact_credentials';
  /* Field: Contact: Contact Position */
  $handler->display->display_options['fields']['field_contact_position']['id'] = 'field_contact_position';
  $handler->display->display_options['fields']['field_contact_position']['table'] = 'field_data_field_contact_position';
  $handler->display->display_options['fields']['field_contact_position']['field'] = 'field_contact_position';
  $handler->display->display_options['fields']['field_contact_position']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Contact Bio */
  $handler->display->display_options['fields']['field_contact_bio']['id'] = 'field_contact_bio';
  $handler->display->display_options['fields']['field_contact_bio']['table'] = 'field_data_field_contact_bio';
  $handler->display->display_options['fields']['field_contact_bio']['field'] = 'field_contact_bio';
  /* Field: Contact: Events Attended */
  $handler->display->display_options['fields']['field_contact_events_attended']['id'] = 'field_contact_events_attended';
  $handler->display->display_options['fields']['field_contact_events_attended']['table'] = 'field_data_field_contact_events_attended';
  $handler->display->display_options['fields']['field_contact_events_attended']['field'] = 'field_contact_events_attended';
  $handler->display->display_options['fields']['field_contact_events_attended']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_contact_events_attended']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_events_attended']['separator'] = '|';
  /* Field: Contact: Updated */
  $handler->display->display_options['fields']['updated']['id'] = 'updated';
  $handler->display->display_options['fields']['updated']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['updated']['field'] = 'updated';
  $handler->display->display_options['fields']['updated']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['updated']['second_date_format'] = 'panopoly_time';
  $handler->display->display_options['path'] = 'admin/edit/redhen/contacts';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');

  /* Display: Page - email */
  $handler = $view->new_display('page', 'Page - email', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  /* Field: Contact: Default email */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['link_to_entity'] = 0;
  /* Field: Contact: Email */
  $handler->display->display_options['fields']['redhen_contact_email']['id'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['table'] = 'field_data_redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['field'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['type'] = 'editable';
  $handler->display->display_options['fields']['redhen_contact_email']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'redhen_email_formatter',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['redhen_contact_email']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contact: Email (redhen_contact_email:default) */
  $handler->display->display_options['sorts']['redhen_contact_email_default']['id'] = 'redhen_contact_email_default';
  $handler->display->display_options['sorts']['redhen_contact_email_default']['table'] = 'field_data_redhen_contact_email';
  $handler->display->display_options['sorts']['redhen_contact_email_default']['field'] = 'redhen_contact_email_default';
  $handler->display->display_options['sorts']['redhen_contact_email_default']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'admin/edit/redhen/contacts/email';
  $export['admin_redhen_contacts'] = $view;

  $view = new view();
  $view->name = 'admin_redhen_org';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_org';
  $view->human_name = 'ADMIN RedHen ORG';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ADMIN RedHen ORG';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Organization: Organization ID */
  $handler->display->display_options['fields']['org_id']['id'] = 'org_id';
  $handler->display->display_options['fields']['org_id']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['org_id']['field'] = 'org_id';
  /* Field: Organization: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Field: Company Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Organization: Events Sponsored */
  $handler->display->display_options['fields']['field_sponsored_events']['id'] = 'field_sponsored_events';
  $handler->display->display_options['fields']['field_sponsored_events']['table'] = 'field_data_field_sponsored_events';
  $handler->display->display_options['fields']['field_sponsored_events']['field'] = 'field_sponsored_events';
  $handler->display->display_options['fields']['field_sponsored_events']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sponsored_events']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsored_events']['separator'] = '|';
  /* Field: Organization: Exhibitors At */
  $handler->display->display_options['fields']['field_exhibitors_at']['id'] = 'field_exhibitors_at';
  $handler->display->display_options['fields']['field_exhibitors_at']['table'] = 'field_data_field_exhibitors_at';
  $handler->display->display_options['fields']['field_exhibitors_at']['field'] = 'field_exhibitors_at';
  $handler->display->display_options['fields']['field_exhibitors_at']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_exhibitors_at']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_exhibitors_at']['separator'] = '|';
  /* Field: Organization: Partner */
  $handler->display->display_options['fields']['field_partner']['id'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['table'] = 'field_data_field_partner';
  $handler->display->display_options['fields']['field_partner']['field'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_partner']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_partner']['separator'] = '|';
  /* Sort criterion: Organization: Organization ID */
  $handler->display->display_options['sorts']['org_id']['id'] = 'org_id';
  $handler->display->display_options['sorts']['org_id']['table'] = 'redhen_org';
  $handler->display->display_options['sorts']['org_id']['field'] = 'org_id';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/edit/redhen/org';
  $export['admin_redhen_org'] = $view;

  $view = new view();
  $view->name = 'find_redhen_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_contact';
  $view->human_name = 'Find RedHen Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'middle_name' => 'middle_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = 'First Name';
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  /* Field: Contact: Middle Name */
  $handler->display->display_options['fields']['middle_name']['id'] = 'middle_name';
  $handler->display->display_options['fields']['middle_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['middle_name']['field'] = 'middle_name';
  /* Field: Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = 'Edit';
  $handler->display->display_options['fields']['contact_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['alter']['text'] = '<a href="/redhen/contact/[contact_id]/view/edit?">Edit</a>';
  /* Filter criterion: Contact: First name */
  $handler->display->display_options['filters']['first_name']['id'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['filters']['first_name']['field'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['first_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['first_name']['expose']['operator_id'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['first_name']['expose']['operator'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['identifier'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['first_name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['first_name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['first_name']['expose']['autocomplete_field'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['first_name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['first_name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Contact: Last name */
  $handler->display->display_options['filters']['last_name']['id'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['filters']['last_name']['field'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['last_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['last_name']['expose']['operator_id'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['last_name']['expose']['operator'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['identifier'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['last_name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['last_name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['last_name']['expose']['autocomplete_field'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['last_name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['last_name']['expose']['autocomplete_dependent'] = 0;

  /* Display: Find CRM Contacts */
  $handler = $view->new_display('panel_pane', 'Find CRM Contacts', 'panel_pane_1');
  $export['find_redhen_contacts'] = $view;

  $view = new view();
  $view->name = 'redhen_contacts';
  $view->description = 'List of contacts for autocomplete widget';
  $view->tag = 'default';
  $view->base_table = 'redhen_contact';
  $view->human_name = 'RedHen Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = '';
  $handler->display->display_options['fields']['first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Middle Name */
  $handler->display->display_options['fields']['middle_name']['id'] = 'middle_name';
  $handler->display->display_options['fields']['middle_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['middle_name']['field'] = 'middle_name';
  $handler->display->display_options['fields']['middle_name']['label'] = '';
  $handler->display->display_options['fields']['middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['middle_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['label'] = '';
  $handler->display->display_options['fields']['last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['last_name']['alter']['text'] = '[first_name] [middle_name] [last_name] ';
  $handler->display->display_options['fields']['last_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Contact: Last name */
  $handler->display->display_options['sorts']['last_name']['id'] = 'last_name';
  $handler->display->display_options['sorts']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['sorts']['last_name']['field'] = 'last_name';

  /* Display: RedHen Contacts */
  $handler = $view->new_display('entityreference', 'RedHen Contacts', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'first_name' => 'first_name',
    'middle_name' => 'middle_name',
    'last_name' => 'last_name',
    'contact_id' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['redhen_contacts'] = $view;

  $view = new view();
  $view->name = 'redhen_org';
  $view->description = 'List of contacts for autocomplete widget';
  $view->tag = 'default';
  $view->base_table = 'redhen_org';
  $view->human_name = 'RedHen ORG';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Organization: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;

  /* Display: RedHen ORG */
  $handler = $view->new_display('entityreference', 'RedHen ORG', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'label' => 'label',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['redhen_org'] = $view;

  return $export;
}
