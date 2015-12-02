<?php
/**
 * @file
 * ec_download_file_gate.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_download_file_gate_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_ec_guide_thank_you'] = entity_import('rules_config', '{ "rules_redirect_ec_guide_thank_you" : {
      "LABEL" : "Redirect to EC Guide Thank you page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--request_restricted" : { "bundle" : "request_restricted" } },
      "DO" : [ { "redirect" : { "url" : "node\\/1299" } } ]
    }
  }');
  $items['rules_request_restricted'] = entity_import('rules_config', '{ "rules_request_restricted" : {
      "LABEL" : "Request Restricted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "node" ],
      "ON" : { "node_presave--request_restricted" : { "bundle" : "request_restricted" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-req-res-send-email" ], "value" : "1" } }
      ],
      "DO" : [
        { "ec_restrict_request_action_process" : { "node" : [ "node" ] } },
        { "mail" : {
            "to" : "[node:field-req-res-email]",
            "subject" : "[node:title] - [node:field-req-res-name]",
            "message" : "Thank you for requesting an Energy Circle Guide.\\r\\n\\r\\nClick the link below to download the file. \\r\\n\\r\\n[node:title]\\r\\n\\r\\nhttp:\\/\\/energycircle.com.678elmp02.blackmesh.com\\/[node:field_req_res_dl_link]\\u0026key=[node:field-req-res-key]\\r\\n\\r\\n",
            "from" : "info@energycircle.com",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "Email Sent\\r\\n[node:title]\\r\\n" } },
        { "data_set" : { "data" : [ "node:field-req-res-send-email" ], "value" : "0" } },
        { "node_unpublish" : { "node" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
