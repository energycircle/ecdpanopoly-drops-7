<?php
/**
 * @file
 * ec_dropbox.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ec_dropbox_default_rules_configuration() {
  $items = array();
  $items['rules_contractor_redirect'] = entity_import('rules_config', '{ "rules_contractor_redirect" : {
      "LABEL" : "Contractor Redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Redirect" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "\\/admin\\/dropbox" } } ]
    }
  }');
  return $items;
}
