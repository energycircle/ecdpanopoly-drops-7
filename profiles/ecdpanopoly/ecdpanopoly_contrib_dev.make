api = 2
core = 7.x

projects[context_pantheon][version] = 1.0-alpha3
projects[context_pantheon][subdir] = ec-dev

projects[context_mobile_detect][version] = 2.0-alpha1
projects[context_mobile_detect][subdir] = ec-dev


; Feature Tools
projects[diff][version] = 3.3
projects[diff][subdir] = ec-dev

projects[features_extra][version] = 1.0
projects[features_extra][subdir] = ec-dev

projects[uuid_features][version] = 1.x
projects[uuid_features][subdir] = ec-dev
projects[uuid_features][patch] = https://www.drupal.org/files/issues/added-filter-check-on-feature-node-rebuild-2307757-4.patch
projects[uuid_features][patch] = https://www.drupal.org/files/issues/uuid_features-fpp_panelizer_view_mode_object_array.patch

projects[features_roles_permissions][version] = 1.2
projects[features_roles_permissions][subdir] = ec-dev

projects[features_orphans][version] = 1.2
projects[features_orphans][subdir] = ec-dev

;projects[feature_set][version] = 1.x
;projects[feature_set][subdir] = ec-dev

projects[node_export][version] = 3.x
projects[node_export][subdir] = ec-dev

projects[features_disable_modules][version] = 1.x
projects[features_disable_modules][subdir] = ec-dev
projects[features_disable_modules][download][url] = http://git.drupal.org/sandbox/imre.horjan/2265801.git
projects[features_disable_modules][type] = module

projects[permissions_export][version] = 1.0-rc3
projects[permissions_export][subdir] = ec-dev

; Field Tools
projects[field_tools][version] = 1.0-alpha9
projects[field_tools][subdir] = ec-dev

projects[ftools][version] = 2.x-dev
projects[ftools][subdir] = ec-dev

; Deploy Mods

projects[deploy_services_client][subdir] = eccontrib
projects[deploy_services_client][version] = 1.x

projects[deploy][subdir] = eccontrib
projects[deploy][version] = 3.x
projects[deploy][patch] = https://www.drupal.org/files/deploy-1520410-term_object_needs_vid_property-6.patch
projects[deploy][patch][1604938] = https://www.drupal.org/files/deploy-1604938_1.patch
