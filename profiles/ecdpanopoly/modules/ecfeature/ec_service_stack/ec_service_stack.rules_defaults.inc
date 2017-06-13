<?php
/**
 * @file
 * ec_service_stack.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_service_stack_default_rules_configuration() {
  $items = array();
  $items['entityform_notifications_service_admin_email'] = entity_import('rules_config', '{ "entityform_notifications_service_admin_email" : {
      "LABEL" : "Service - Maintenance - Email Notification",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "email_subject" : { "label" : "Email Subject", "type" : "text" },
        "email_body" : { "label" : "Email Body", "type" : "text" },
        "show_submission" : { "label" : "Show Submission", "type" : "boolean" },
        "to_email" : { "label" : "To Email", "type" : "text" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_i_need" } },
        { "data_is" : { "data" : [ "entity:field-i-need" ], "value" : "Maintenance" } }
      ],
      "DO" : [
        { "component_rules_entityform_notifications_email_send" : {
            "entityform" : [ "entity" ],
            "email_address" : [ "to-email" ],
            "show_submission" : [ "show-submission" ],
            "email_subject" : [ "email-subject" ],
            "email_body" : [ "email-body" ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['entityform_notifications_service_estimate_email_notification'] = entity_import('rules_config', '{ "entityform_notifications_service_estimate_email_notification" : {
      "LABEL" : "Service - Estimate - Email Notification",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "email_subject" : { "label" : "Email Subject", "type" : "text" },
        "email_body" : { "label" : "Email Body", "type" : "text" },
        "show_submission" : { "label" : "Show Submission", "type" : "boolean" },
        "to_email" : { "label" : "To Email", "type" : "text" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_i_need" } },
        { "data_is" : { "data" : [ "entity:field-i-need" ], "value" : "Estimate" } }
      ],
      "DO" : [
        { "component_rules_entityform_notifications_email_send" : {
            "entityform" : [ "entity" ],
            "email_address" : [ "to-email" ],
            "show_submission" : [ "show-submission" ],
            "email_subject" : [ "email-subject" ],
            "email_body" : [ "email-body" ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['entityform_notifications_service_no_selection_email_notification'] = entity_import('rules_config', '{ "entityform_notifications_service_no_selection_email_notification" : {
      "LABEL" : "Service - No Selection - Email Notification",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "email_subject" : { "label" : "Email Subject", "type" : "text" },
        "email_body" : { "label" : "Email Body", "type" : "text" },
        "show_submission" : { "label" : "Show Submission", "type" : "boolean" },
        "to_email" : { "label" : "To Email", "type" : "text" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_i_need" } },
        { "data_is" : {
            "data" : [ "entity:field-i-need" ],
            "op" : "IN",
            "value" : { "value" : { "Other" : "Other" } }
          }
        }
      ],
      "DO" : [
        { "component_rules_entityform_notifications_email_send" : {
            "entityform" : [ "entity" ],
            "email_address" : [ "to-email" ],
            "show_submission" : [ "show-submission" ],
            "email_subject" : [ "email-subject" ],
            "email_body" : [ "email-body" ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['entityform_notifications_service_repar_email_notification'] = entity_import('rules_config', '{ "entityform_notifications_service_repar_email_notification" : {
      "LABEL" : "Service - Repair - Email Notification",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "email_subject" : { "label" : "Email Subject", "type" : "text" },
        "email_body" : { "label" : "Email Body", "type" : "text" },
        "show_submission" : { "label" : "Show Submission", "type" : "boolean" },
        "to_email" : { "label" : "To Email", "type" : "text" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_i_need" } },
        { "data_is" : { "data" : [ "entity:field-i-need" ], "value" : "Repair" } }
      ],
      "DO" : [
        { "component_rules_entityform_notifications_email_send" : {
            "entityform" : [ "entity" ],
            "email_address" : [ "to-email" ],
            "show_submission" : [ "show-submission" ],
            "email_subject" : [ "email-subject" ],
            "email_body" : [ "email-body" ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_service_maintenance'] = entity_import('rules_config', '{ "rules_service_maintenance" : {
      "LABEL" : "Service - Maintenance",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_i_need" } },
        { "data_is" : { "data" : [ "entity:field-i-need" ], "value" : "Maintenance" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "emily@energycircle.com",
            "subject" : "Someone filled out the form and check Maintenance",
            "message" : "Here is the body",
            "from" : "info@EnergyCircle.com",
            "language" : [ "" ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
