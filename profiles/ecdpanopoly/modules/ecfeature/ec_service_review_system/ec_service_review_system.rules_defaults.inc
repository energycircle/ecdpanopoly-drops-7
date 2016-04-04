<?php
/**
 * @file
 * ec_service_review_system.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_service_review_system_default_rules_configuration() {
  $items = array();
  $items['rules_sreview_email_submitter'] = entity_import('rules_config', '{ "rules_sreview_email_submitter" : {
      "LABEL" : "Service Review - Email Submitter",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_update" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_sreview_send_email" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-sreview-send-email" ] } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_sreview_email_sent" } },
        { "data_is_empty" : { "data" : [ "entityform:field-sreview-email-sent" ] } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_sreview_email" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "entityform:field-sreview-email" ],
            "subject" : "Thank you for your review of our services.",
            "message" : "Recently you completed a review for us. We\\u0027re glad that you were satisfied with our service, and appreciate receiving your comments.\\r\\n\\r\\nWould you take a minute to share a review on one of the popular review sites?\\r\\n\\r\\n\\u003Ca href=\\u0022http:\\/\\/rms-ec-demo.pantheon.io\\/service-review-sites\\u0022\\u003EUse the links on this page to go to a review site of your choosing, and post a review.\\u003C\\/a\\u003E\\r\\n\\r\\nThank you, \\r\\n\\r\\n[site:name]",
            "language" : [ "" ]
          }
        },
        { "data_set" : {
            "data" : [ "entityform:field-sreview-email-sent" ],
            "value" : { "value" : { "1" : "1" } }
          }
        }
      ]
    }
  }');
  $items['rules_sreview_high'] = entity_import('rules_config', '{ "rules_sreview_high" : {
      "LABEL" : "Service Review - High",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "sreview" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_sreview_rating" } },
        { "data_is" : {
            "data" : [ "entityform:field-sreview-rating" ],
            "op" : "IN",
            "value" : { "value" : { "9" : "9", "10" : "10" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "service-review-sites" } } ]
    }
  }');
  $items['rules_sreview_low'] = entity_import('rules_config', '{ "rules_sreview_low" : {
      "LABEL" : "Service Review - Low",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "sreview" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_sreview_rating" } },
        { "data_is" : {
            "data" : [ "entityform:field-sreview-rating" ],
            "op" : "IN",
            "value" : { "value" : { "1" : "1", "2" : "2", "3" : "3", "4" : "4", "5" : "5", "6" : "6" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thank you for your feedback. We will be in touch to see how we can serve you better next time." } }
      ]
    }
  }');
  $items['rules_sreview_medium'] = entity_import('rules_config', '{ "rules_sreview_medium" : {
      "LABEL" : "Service Review - Medium",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "sreview" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_sreview_rating" } },
        { "data_is" : {
            "data" : [ "entityform:field-sreview-rating" ],
            "op" : "IN",
            "value" : { "value" : { "7" : "7", "8" : "8" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thank you for your feedback. We will be in touch to see how we can serve you better next time." } }
      ]
    }
  }');
  $items['rules_sreview_notify_admins'] = entity_import('rules_config', '{ "rules_sreview_notify_admins" : {
      "LABEL" : "Service Review - Notify admins",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "sreview" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "digital@energycircle.com",
            "subject" : "A new service review has been submitted",
            "message" : "A new service review has been submitted. View new submissions on the \\u003Ca href=\\u0022\\/admin\\/service-review-sites\\u0022\\u003EManage Service Review Sites page\\u003C\\/a\\u003E.\\r\\n\\r\\n[entityform:textexport-email]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
