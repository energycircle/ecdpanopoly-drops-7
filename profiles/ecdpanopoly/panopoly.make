api = 2
core = 7.x

; The Panopoly Foundation
projects[panopoly_core][version] = 1.28
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.28
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.28
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.28
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.28
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.28
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.28
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset
projects[panopoly_pages][version] = 1.28
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.28
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.28
projects[panopoly_search][subdir] = panopoly


;panopoly add ons
projects[panopoly_config][version] = 1.0
projects[panopoly_config][subdir] = panopoly_custom

projects[panopoly_seo][version] = 1.0-beta3
projects[panopoly_seo][subdir] = panopoly_custom


; For running the automated tests.
projects[panopoly_test][version] = 1.28
projects[panopoly_test][subdir] = panopoly


; patches
projects[defaultconfig][patch][1900574] = https://www.drupal.org/files/issues/1900574.defaultconfig.undefinedindex_13.patch
projects[defaultconfig][subdir] = contrib

#projects[views][patch][1036962] = https://www.drupal.org/files/views-fix-destination-link-for-ajax-1036962-29.patch
#projects[views][subdir] = contrib

projects[views][patch][1615438] = https://www.drupal.org/files/search_multiple_terms-1615438-30.patch
projects[views][subdir] = contrib

#projects[menu_block][patch][2899733] = https://www.drupal.org/files/issues/menu_block-check-depth_relative--2499733-1.patch
#projects[menu_block][subdir] = contrib

projects[features][patch][2899733] = https://www.drupal.org/files/issues/2138331-eval-log.patch
projects[features][subdir] = contrib

; disabled patch
#projects[entity][patch][2112855-25] = https://www.drupal.org/files/issues/entity-label-2112855-25.patch
#projects[entity][subdir] = contrib

#projects[table_field][patch][2475537-2] = https://www.drupal.org/files/issues/tablefield-update7002_fix-2475537-2.patch
#projects[table_field][subdir] = contrib

#projects[views][patch][2018737] = https://www.drupal.org/files/issues/views-asset-diff-2018737-37.patch
#projects[views][subdir] = contrib

#projects[defaultconfig][patch][1912812] = https://www.drupal.org/files/defaultconfig-remove-notice-1912812.patch
#projects[defaultconfig][subdir] = contrib