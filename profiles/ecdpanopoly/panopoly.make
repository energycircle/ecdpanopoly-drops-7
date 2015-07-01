api = 2
core = 7.x

; The Panopoly Foundation
projects[panopoly_core][version] = 1.23
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.23
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.23
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.23
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.23
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.23
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.23
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset
projects[panopoly_pages][version] = 1.23
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.23
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.23
projects[panopoly_search][subdir] = panopoly


;panopoly add ons
projects[panopoly_config][version] = 1.x-dev
projects[panopoly_config][subdir] = panopoly_custom

projects[panopoly_seo][version] = 1.0-beta1
projects[panopoly_seo][subdir] = panopoly_custom


; For running the automated tests.
projects[panopoly_test][version] = 1.23
projects[panopoly_test][subdir] = panopoly

; patches
projects[defaultconfig][patch][1900574] = https://www.drupal.org/files/issues/1900574.defaultconfig.undefinedindex_13.patch
projects[defaultconfig][subdir] = contrib

projects[defaultconfig][patch][1912312] = https://www.drupal.org/files/defaultconfig-remove-notice-1912312.patch
projects[defaultconfig][subdir] = contrib

projects[views][patch][1036962] = https://www.drupal.org/files/views-fix-destination-link-for-ajax-1036962-29.patch
projects[views][subdir] = contrib

projects[views][patch][1615438] = https://www.drupal.org/files/search_multiple_terms-1615438-30.patch
projects[views][subdir] = contrib

projects[menu_block][patch][2499733] = https://www.drupal.org/files/issues/menu_block-check-depth_relative--2499733-1.patch
projects[menu_block][subdir] = contrib

; disabled patch
;projects[views][patch][2018737] = https://www.drupal.org/files/issues/views-asset-diff-2018737-37.patch
;projects[views][subdir] = contrib