api = 2
core = 7.x

; The Panopoly Foundation
projects[panopoly_core][version] = 1.30
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.30
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.30
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.30
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.30
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.30
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.30
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset
projects[panopoly_pages][version] = 1.30
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.30
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.30
projects[panopoly_search][subdir] = panopoly


;panopoly add ons
projects[panopoly_config][version] = 1.0
projects[panopoly_config][subdir] = panopoly_custom

projects[panopoly_seo][version] = 1.0-beta3
projects[panopoly_seo][subdir] = panopoly_custom


; For running the automated tests.
projects[panopoly_test][version] = 1.30
projects[panopoly_test][subdir] = panopoly


; patches
projects[defaultconfig][patch][1900574] = https://www.drupal.org/files/issues/1900574.defaultconfig.undefinedindex_13.patch
projects[defaultconfig][subdir] = contrib

projects[views][patch][1615438] = https://www.drupal.org/files/search_multiple_terms-1615438-30.patch
projects[views][subdir] = contrib

projects[features][patch][2899733] = https://www.drupal.org/files/issues/2138331-eval-log.patch
projects[features][subdir] = contrib

projects[features][patch][1437264] = https://www.drupal.org/files/issues/features-var-export-object-1437264-12_0.patch
projects[features][subdir] = contrib

projects[entity][patch][1414428] = https://www.drupal.org/files/issues/entity-stop-assuming-you-may-find-array-1414428-14_0.patch
projects[entity][subdir] = contrib

projects[uuid][patch][1927474] = https://www.drupal.org/files/issues/uuid-fix-empty-uuids-1927474-9_0.patch
projects[uuid][subdir] = contrib

projects[tablefield][patch][] = https://www.drupal.org/files/issues/tablefield-update7002_fix-2475537-2.patch
projects[tablefield][subdir] = contrib

projects[views_bulk_operations][patch] =https://www.drupal.org/files/issues/inaccurate_total_passed_to_action.patch
projects[views_bulk_operations][subdir] = contrib