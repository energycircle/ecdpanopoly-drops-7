<?php
/**
 * @file
 * ec_sf_service_request_form.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ec_sf_service_request_form_field_default_field_instances_alter(&$data) {
  if (isset($data['entityform-schedule_service-field_name'])) {
    unset($data['entityform-schedule_service-field_name']);
  }
}

/**
 * Implements hook_default_salesforce_mapping().
 */
function ec_sf_service_request_form_default_salesforce_mapping() {
  $items = array();
  $items['schedule_service'] = entity_import('salesforce_mapping', '{
  "type" : "salesforce_mapping",
  "name" : "schedule_service",
  "label" : "Schedule Service",
  "sync_triggers" : "27",
  "salesforce_object_type" : "Lead",
  "salesforce_record_types_allowed" : { "default" : "default" },
  "salesforce_record_type_default" : "default",
  "drupal_entity_type" : "entityform",
  "drupal_bundle" : "schedule_service",
  "field_mappings" : [
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_first_name" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 120,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : "Name",
        "controllerName" : null,
        "createable" : true,
        "custom" : false,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : "personname",
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "First Name",
        "length" : 40,
        "mask" : null,
        "maskType" : null,
        "name" : "FirstName",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : false,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_last_name" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 240,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : "Name",
        "controllerName" : null,
        "createable" : true,
        "custom" : false,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : "personname",
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "Last Name",
        "length" : 80,
        "mask" : null,
        "maskType" : null,
        "name" : "LastName",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : false,
        "permissionable" : false,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_email" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 240,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : false,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : true,
        "inlineHelpText" : null,
        "label" : "Email",
        "length" : 80,
        "mask" : null,
        "maskType" : null,
        "name" : "Email",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "email",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_phone" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 120,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : false,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "Phone",
        "length" : 40,
        "mask" : null,
        "maskType" : null,
        "name" : "Phone",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "phone",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_sf_lead_id" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 18,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : false,
        "custom" : false,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : true,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : true,
        "inlineHelpText" : null,
        "label" : "Lead ID",
        "length" : 18,
        "mask" : null,
        "maskType" : null,
        "name" : "Id",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : false,
        "permissionable" : false,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "tns:ID",
        "sortable" : true,
        "type" : "id",
        "unique" : false,
        "updateable" : false,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "sf_drupal"
    },
    {
      "drupal_field" : {
        "fieldmap_type" : "property",
        "fieldmap_value" : "field_sf_lead_source"
      },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 120,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : false,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "Lead Source",
        "length" : 40,
        "mask" : null,
        "maskType" : null,
        "name" : "LeadSource",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "Web",
            "validFor" : null,
            "value" : "Web"
          },
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "Phone Inquiry",
            "validFor" : null,
            "value" : "Phone Inquiry"
          },
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "Partner Referral",
            "validFor" : null,
            "value" : "Partner Referral"
          },
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "Purchased List",
            "validFor" : null,
            "value" : "Purchased List"
          },
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "Other",
            "validFor" : null,
            "value" : "Other"
          }
        ],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "picklist",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_sf_utm_medium" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 765,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : true,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "UTM Medium",
        "length" : 255,
        "mask" : null,
        "maskType" : null,
        "name" : "UTM_Medium__c",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_sf_utm_source" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 765,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : true,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "UTM Source",
        "length" : 255,
        "mask" : null,
        "maskType" : null,
        "name" : "UTM_Source__c",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_sf_utm_term" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 765,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : true,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "UTM Term",
        "length" : 255,
        "mask" : null,
        "maskType" : null,
        "name" : "UTM_Term__c",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : {
        "fieldmap_type" : "property",
        "fieldmap_value" : "field_sf_utm_content"
      },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 765,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : true,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "UTM Content",
        "length" : 255,
        "mask" : null,
        "maskType" : null,
        "name" : "UTM_Content__c",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : { "fieldmap_type" : "constant", "fieldmap_value" : "Consumer" },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 765,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : false,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "Company",
        "length" : 255,
        "mask" : null,
        "maskType" : null,
        "name" : "Company",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : false,
        "permissionable" : false,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : {
        "fieldmap_type" : "property",
        "fieldmap_value" : "field_sf_product_interest"
      },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 765,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : true,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "Product Interest",
        "length" : 255,
        "mask" : null,
        "maskType" : null,
        "name" : "ProductInterest__c",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "GC1000 series",
            "validFor" : null,
            "value" : "GC1000 series"
          },
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "GC5000 series",
            "validFor" : null,
            "value" : "GC5000 series"
          },
          {
            "active" : true,
            "defaultValue" : false,
            "label" : "GC3000 series",
            "validFor" : null,
            "value" : "GC3000 series"
          }
        ],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "picklist",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    },
    {
      "drupal_field" : {
        "fieldmap_type" : "property",
        "fieldmap_value" : "field_sf_utm_campaign_name"
      },
      "salesforce_field" : {
        "aggregatable" : true,
        "autoNumber" : false,
        "byteLength" : 765,
        "calculated" : false,
        "calculatedFormula" : null,
        "cascadeDelete" : false,
        "caseSensitive" : false,
        "compoundFieldName" : null,
        "controllerName" : null,
        "createable" : true,
        "custom" : true,
        "defaultValue" : null,
        "defaultValueFormula" : null,
        "defaultedOnCreate" : false,
        "dependentPicklist" : false,
        "deprecatedAndHidden" : false,
        "digits" : 0,
        "displayLocationInDecimal" : false,
        "encrypted" : false,
        "externalId" : false,
        "extraTypeInfo" : null,
        "filterable" : true,
        "filteredLookupInfo" : null,
        "groupable" : true,
        "highScaleNumber" : false,
        "htmlFormatted" : false,
        "idLookup" : false,
        "inlineHelpText" : null,
        "label" : "UTM Name",
        "length" : 255,
        "mask" : null,
        "maskType" : null,
        "name" : "UTM_Name__c",
        "nameField" : false,
        "namePointing" : false,
        "nillable" : true,
        "permissionable" : true,
        "picklistValues" : [],
        "precision" : 0,
        "queryByDistance" : false,
        "referenceTargetField" : null,
        "referenceTo" : [],
        "relationshipName" : null,
        "relationshipOrder" : null,
        "restrictedDelete" : false,
        "restrictedPicklist" : false,
        "scale" : 0,
        "soapType" : "xsd:string",
        "sortable" : true,
        "type" : "string",
        "unique" : false,
        "updateable" : true,
        "writeRequiresMasterRead" : false
      },
      "key" : false,
      "direction" : "drupal_sf"
    }
  ],
  "pull_trigger_date" : "CreatedDate",
  "push_async" : "0",
  "push_batch" : "0",
  "created" : "1493742736",
  "weight" : "0",
  "locked" : "0",
  "rdf_mapping" : []
}');
  return $items;
}
