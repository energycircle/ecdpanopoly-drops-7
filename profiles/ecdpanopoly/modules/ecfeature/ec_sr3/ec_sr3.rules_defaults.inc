<?php
/**
 * @file
 * ec_sr3.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_sr3_default_rules_configuration() {
  $items = array();
  $items['rules_sr3_high_review'] = entity_import('rules_config', '{ "rules_sr3_high_review" : {
      "LABEL" : "SR3 Send High Reviewer to Review Page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--sr3_service_review" : { "bundle" : "sr3_service_review" },
        "node_update--sr3_service_review" : { "bundle" : "sr3_service_review" }
      },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "0" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "1" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "3" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "4" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "5" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "6" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "7" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "8" } },
        { "data_is_empty" : { "data" : [ "node:field_sr3_rating_value" ] } },
        { "data_is_empty" : { "data" : [ "node:field_sr3_service_review" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[node:edit-url]\\/sr3-rating\\/?authkey=[node:authlink:authkey]" } }
      ]
    }
  }');
  $items['rules_sr3_low_feedback'] = entity_import('rules_config', '{ "rules_sr3_low_feedback" : {
      "LABEL" : "SR3 Send Low Reviewer to Feedback Page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--sr3_service_review" : { "bundle" : "sr3_service_review" },
        "node_update--sr3_service_review" : { "bundle" : "sr3_service_review" }
      },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "7" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "8" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "9" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "10" } },
        { "data_is_empty" : { "data" : [ "node:field_sr3_service_feedback" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[node:edit-url]\\/sr3-message2\\/?authkey=[node:authlink:authkey]" } }
      ]
    }
  }');
  $items['rules_sr3_medium_feedback'] = entity_import('rules_config', '{ "rules_sr3_medium_feedback" : {
      "LABEL" : "SR3 Send Medium Reviewer to Feedback Page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--sr3_service_review" : { "bundle" : "sr3_service_review" },
        "node_update--sr3_service_review" : { "bundle" : "sr3_service_review" }
      },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "0" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "1" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "3" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "4" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "5" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "6" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "9" } },
        { "NOT data_is" : { "data" : [ "node:field_sr3_recommendation" ], "value" : "10" } },
        { "data_is_empty" : { "data" : [ "node:field_sr3_service_feedback" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[node:edit-url]\\/sr3-message1\\/?authkey=[node:authlink:authkey]" } }
      ]
    }
  }');
  $items['rules_sr3_reviewer_thankyou'] = entity_import('rules_config', '{ "rules_sr3_reviewer_thankyou" : {
      "LABEL" : "SR3 Send Finished Reviewer to Thank You Page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--sr3_service_review" : { "bundle" : "sr3_service_review" } },
      "DO" : [ { "redirect" : { "url" : "review-thank-you" } } ]
    }
  }');
  return $items;
}
