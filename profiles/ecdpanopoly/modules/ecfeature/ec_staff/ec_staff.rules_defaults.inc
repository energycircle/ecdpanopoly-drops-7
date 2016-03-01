<?php
/**
 * @file
 * ec_staff.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_staff_default_rules_configuration() {
  $items = array();
  $items['rules_entityform_join_email_admin'] = entity_import('rules_config', '{ "rules_entityform_join_email_admin" : {
      "LABEL" : "Entityform - Join - Email Admin",
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
      "DO" : [
        { "component_rules_entityform_notifications_email_send_join" : {
            "USING" : {
              "entityform" : [ "entity:type:type" ],
              "entity" : [ "entity" ],
              "continue" : "1",
              "email_address" : [ "to-email" ],
              "show_submission" : [ "show_submission" ],
              "email_subject" : [ "email_subject" ],
              "email_body" : [ "email_body" ]
            },
            "PROVIDE" : { "continue" : { "continue_join" : "Continue Rules Join" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_entityform_join_email_message'] = entity_import('rules_config', '{ "rules_entityform_join_email_message" : {
      "LABEL" : "Entityform - Join - Email Message",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "entityform" : { "label" : "Entityform", "type" : "entityform" },
        "email_body" : { "label" : "Email Body", "type" : "text" },
        "show_submission" : { "label" : "Show Submission", "type" : "boolean" }
      },
      "IF" : [ { "NOT data_is_empty" : { "data" : [ "show-submission" ] } } ],
      "DO" : [
        { "data_set" : {
            "data" : [ "email-body" ],
            "value" : "[email-body:value]\\r\\n\\r\\n[entityform:textexport-email]\\r\\n\\r\\nLog in to the site at [site:url]user and then click the link below to view the resume.\\r\\n\\r\\nResume link (if a resume was uploaded): [entity:field-applicant-resume:file:url]\\r\\n\\r\\n\\r\\nAddress:\\r\\n\\r\\n[entityform:field-address:thoroughfare][entityform:field-postal-address:thoroughfare]\\r\\n\\r\\n[entityform:field-address:premise][entityform:field-postal-address:premise]\\r\\n\\r\\n[entityform:field-address:locality][entityform:field-postal-address:locality], [entityform:field-address:administrative_area][entityform:field-postal-address:administrative_area] [entityform:field-address:postal_code][entityform:field-postal-address:postal_code]\\r\\n\\r\\n[entityform:field-address:country]"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue", "email_body" ]
    }
  }');
  $items['rules_entityform_notifications_email_send_join'] = entity_import('rules_config', '{ "rules_entityform_notifications_email_send_join" : {
      "LABEL" : "Entityform Notifications Join Email Send",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entityform" : { "label" : "Entityform", "type" : "text" },
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "email_address" : { "label" : "Email Address", "type" : "text" },
        "show_submission" : { "label" : "Show submitted data", "type" : "boolean" },
        "email_subject" : { "label" : "Email Subject", "type" : "text" },
        "email_body" : { "label" : "Email Body", "type" : "text" }
      },
      "DO" : [
        { "component_rules_entityform_join_email_message" : {
            "USING" : {
              "entity" : [ "entity" ],
              "continue" : "1",
              "entityform" : [ "entity" ],
              "email_body" : [ "email_body" ],
              "show_submission" : "1"
            },
            "PROVIDE" : {
              "continue" : { "continue_join" : "Continue Rules" },
              "email_body" : { "email_body_join" : "Email Body" }
            }
          }
        },
        { "mail" : {
            "to" : [ "email-address" ],
            "subject" : [ "email-subject" ],
            "message" : [ "email-body-join" ],
            "from" : [ "email-address" ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
