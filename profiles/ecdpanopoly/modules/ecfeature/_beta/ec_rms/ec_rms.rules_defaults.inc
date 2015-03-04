<?php
/**
 * @file
 * ec_rms.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_rms_default_rules_configuration() {
  $items = array();
  $items['rules_rms_redirect_for_completed_reviews'] = entity_import('rules_config', '{ "rules_rms_redirect_for_completed_reviews" : {
      "LABEL" : "RMS: Redirect for completed reviews - High",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_prepare" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ec_review" : "ec_review" } }
          }
        },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "1" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "3" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "4" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "5" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "6" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "7" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "8" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-review-site-review" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[site:url]" } },
        { "drupal_message" : { "message" : "Thank you for your business! We value your feedback." } }
      ]
    }
  }');
  $items['rules_rms_redirect_for_completed_reviews_med_low'] = entity_import('rules_config', '{ "rules_rms_redirect_for_completed_reviews_med_low" : {
      "LABEL" : "RMS: Redirect for completed reviews - Med-Low",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_prepare" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ec_review" : "ec_review" } }
          }
        },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "9" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "10" } },
        { "NOT data_is_empty" : { "data" : [ "node:field_review_message" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[site:url]" } },
        { "drupal_message" : { "message" : "Thank you for your business! We value your feedback." } }
      ]
    }
  }');
  $items['rules_rms_send_reviewer_low_range_message'] = entity_import('rules_config', '{ "rules_rms_send_reviewer_low_range_message" : {
      "LABEL" : "RMS: Send Reviewer Low-Range",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--ec_review" : { "bundle" : "ec_review" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "7" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "8" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "9" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "10" } },
        { "data_is_empty" : { "data" : [ "node:field-review-message" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[node:edit-url]\\/rms-message2\\/?authkey=[node:authlink:authkey]" } }
      ]
    }
  }');
  $items['rules_rms_send_reviewer_mid_range_message'] = entity_import('rules_config', '{ "rules_rms_send_reviewer_mid_range_message" : {
      "LABEL" : "RMS: Send Reviewer - Mid-Range",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "2",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--ec_review" : { "bundle" : "ec_review" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "1" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "3" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "4" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "5" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "6" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "9" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "10" } },
        { "data_is_empty" : { "data" : [ "node:field-review-message" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[node:edit-url]\\/rms-message1\\/?authkey=[node:authlink:authkey]" } }
      ]
    }
  }');
  $items['rules_rms_send_reviewer_to_internal_review_form'] = entity_import('rules_config', '{ "rules_rms_send_reviewer_to_internal_review_form" : {
      "LABEL" : "RMS: Send Reviewer - High Range",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "3",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--ec_review" : { "bundle" : "ec_review" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "1" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "3" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "4" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "5" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "6" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "7" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "8" } },
        { "data_is_empty" : { "data" : [ "node:field-review-site-review" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[node:edit-url]\\/rms-review\\/?authkey=[node:authlink:authkey]" } }
      ]
    }
  }');
  $items['rules_rms_send_reviewer_to_thank_you_page'] = entity_import('rules_config', '{ "rules_rms_send_reviewer_to_thank_you_page" : {
      "LABEL" : "RMS: Send Reviewer to Thank-You Page",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--ec_review" : { "bundle" : "ec_review" } },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-review-site-review" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[site:url]" } },
        { "drupal_message" : { "message" : "\\u003Cp class=\\u0022rms-thank-you\\u0022\\u003EThank you for your input! We look forward to working with you again in the future.\\u003C\\/p\\u003E" } }
      ]
    }
  }');
  $items['rules_rms_thank_you_low_mid_range'] = entity_import('rules_config', '{ "rules_rms_thank_you_low_mid_range" : {
      "LABEL" : "RMS: Thank-You - Low\\/Mid-Range",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--ec_review" : { "bundle" : "ec_review" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "9" } },
        { "NOT data_is" : { "data" : [ "node:field-review-rating" ], "value" : "10" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-review-message" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "\\/home" } },
        { "drupal_message" : { "message" : "Thank you for your comments. Our staff will be in touch." } }
      ]
    }
  }');
  $items['rules_send_review_email'] = entity_import('rules_config', '{ "rules_send_review_email" : {
      "LABEL" : "RMS: Send New Review Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert--ec_review" : { "bundle" : "ec_review" } },
      "DO" : [
        { "mimemail" : {
            "key" : "review_form_email",
            "to" : "[node:field-review-email]",
            "subject" : "Thanks for your business!",
            "body" : "\\u003Cp\\u003EDear [node:field-review-first-name] [node:field-review-last-name],\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWe hope that you had a pleasant experience with our service, and \\u003Cstrong\\u003Einvite you to rate your experience:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ca href=\\u0022[node:edit-url]\\/rms-rating\\/?authkey=[node:authlink:authkey]\\u0022 style=\\u0022text-transform:uppercase;cursor:pointer;display:inline-block;text-decoration:none;background-color:#151848;border-radius:2px;white-space:nowrap;width:320px;color:#ffffff;font-size:16px;border-radius:5px;font-weight:bold;padding:6px;text-align:center;\\u0022\\u003E Rate Your Experience \\u003C\\/a\\u003E\\r\\n\\r\\nThanks,\\r\\n\\r\\nThe team at [site:name]",
            "plaintext" : "Dear [node:field-review-first-name] [node:field-review-last-name]\\r\\n\\r\\nWe hope that you had a pleasant experience with our service, and invite you to rate your experience:\\r\\n[node:edit-url]\\/rms-rating\\/?authkey=[node:authlink:authkey]\\r\\n\\r\\nThanks,\\r\\n\\r\\nThe team at [site:name]\\r\\n",
            "language" : [ "" ]
          }
        },
        { "node_unpublish" : { "node" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
