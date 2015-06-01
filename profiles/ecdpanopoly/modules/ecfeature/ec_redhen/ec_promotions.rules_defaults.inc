<?php
/**
 * @file
 * ec_promotions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_promotions_default_rules_configuration() {
  $items = array();
  $items['entityform_notifications_promotion_form_notification'] = entity_import('rules_config', '{ "entityform_notifications_promotion_form_notification" : {
      "LABEL" : "Promotion Form Notification",
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
  return $items;
}
