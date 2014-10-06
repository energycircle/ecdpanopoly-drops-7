api = 2
core = 7.x


; EC CONTRIB MODS
projects[addressfield][version] = 1.0-beta5
projects[addressfield][subdir] = eccontrib

projects[adminrole][version] = 1.x
projects[adminrole][subdir] = eccontrib

projects[admin_theme][version] = 1.x
projects[admin_theme][subdir] = eccontrib

projects[advanced_help][version] = 1.x
projects[advanced_help][subdir] = eccontrib-discontinue

projects[auto_menutitle][version] = 1.x
projects[auto_menutitle][subdir] = eccontrib

projects[better_exposed_filters][version] = 3.x
projects[better_exposed_filters][subdir] = eccontrib

projects[cer][version] = 3.0-alpha7
projects[cer][subdir] = eccontrib

projects[colorbox][version] = 2.x
projects[colorbox][subdir] = eccontrib

projects[compact_forms][version] = 1.x
projects[compact_forms][subdir] = eccontrib

projects[contemplate][version] = 1.x
projects[contemplate][subdir] = eccontrib

projects[content_type_extras][version] = 1.8
projects[content_type_extras][subdir] = eccontrib

projects[disable_term_node_listings][version] = 1.x
projects[disable_term_node_listings][subdir] = eccontrib

projects[email][version] = 1.x
projects[email][subdir] = eccontrib

projects[entity2text][version] = 1.x
projects[entity2text][subdir] = eccontrib-discontinue

projects[entity_dependency][version] = 1.x
projects[entity_dependency][subdir] = eccontrib-discontinue

projects[entityform][version] = 2.x
projects[entityform][subdir] = eccontrib

projects[entityform_block][version] = 1.x
projects[entityform_block][subdir] = eccontrib

projects[entity_path][version] = 1.x
projects[entity_path][subdir] = eccontrib

projects[entity_view_mode][version] = 1.x
projects[entity_view_mode][subdir] = eccontrib

projects[entityreference_current][version] = 1.x
projects[entityreference_current][subdir] = eccontrib-discontinue

projects[entityreference_filter][version] = 1.2
projects[entityreference_filter][subdir] = eccontrib

projects[entityreference_prepopulate][version] = 1.x
projects[entityreference_prepopulate][subdir] = eccontrib

projects[entity_rules][version] = 1.x-dev
projects[entity_rules][subdir] = eccontrib

projects[entityform][version] = 2.x
projects[entityform][subdir] = eccontrib

projects[eva][version] = 1.x
projects[eva][subdir] = eccontrib

projects[exclude_node_title][version] = 1.x
projects[exclude_node_title][subdir] = eccontrib

projects[field_formatter_settings][version] = 1.x
projects[field_formatter_settings][subdir] = eccontrib

projects[field_multiple_limit][version] = 1.x
projects[field_multiple_limit][subdir] = eccontrib

projects[field_default_token][version] = 1.2
projects[field_default_token][subdir] = eccontrib

projects[field_hidden][version] = 1.6
projects[field_hidden][subdir] = eccontrib

projects[flexslider][version] = 2.x-dev
projects[flexslider][subdir] = eccontrib

projects[google_analytics][version] = 2.x
projects[google_analytics][subdir] = eccontrib

projects[globalredirect][version] = 1.x
projects[globalredirect][subdir] = eccontrib

projects[field_hidden][version] = 1.6
projects[field_hidden][subdir] = eccontrib

projects[field_validation][version] = 2.x
projects[field_validation][subdir] = eccontrib

projects[insert_view][version] = 2.x
projects[insert_view][subdir] = eccontrib

projects[jcarousel][version] = 2.x
projects[jcarousel][subdir] = eccontrib

projects[linkit_target][version] = 1.0
projects[linkit_target][subdir] = eccontrib

projects[maxlength][version] = 3.x
projects[maxlength][subdir] = eccontrib

projects[menu_icons][version] = 3.x-dev
projects[menu_icons][subdir] = eccontrib

projects[path_redirect_import][version] = 1.x
projects[path_redirect_import][subdir] = eccontrib

projects[phone][version] = 1.x-dev
projects[phone][subdir] = eccontrib

projects[nodequeue][version] = 2.0-beta1
projects[nodequeue][subdir] = eccontrib

projects[redirect][version] = 1.0-rc1
projects[redirect][subdir] = eccontrib

projects[rules][version] = 2.x
projects[rules][subdir] = eccontrib

projects[seo_ui][version] = 1.x
projects[seo_ui][subdir] = eccontrib

projects[superfish][version] = 1.x-dev
projects[superfish][subdir] = eccontrib

projects[title][version] = 1.x
projects[title][subdir] = eccontrib

projects[token_tweaks][version] = 1.x
projects[token_tweaks][subdir] = eccontrib

projects[variable][version] = 2.x
projects[variable][subdir] = eccontrib

projects[views_accordion][version] = 1.x
projects[views_accordion][subdir] = eccontrib

projects[views_slideshow][version] = 3.x
projects[views_slideshow][subdir] = eccontrib-discontinue

;projects[views_url_path_arguments][version] = 1.x
;projects[views_url_path_arguments][subdir] = eccontrib

projects[weight][version] = 2.x
projects[weight][subdir] = eccontrib

projects[xmlsitemap][version] = 2.0
projects[xmlsitemap][subdir] = eccontrib

;Patches
projects[entity_rules][patch][] = "https://www.drupal.org/files/issues/entity_rules_entity_rules_get_form_entity_type_settings.patch"
;from https://www.drupal.org/node/2225315

projects[entity_rules][patch][] = "https://www.drupal.org/files/issues/entity_rules_entity_rules_get_type_settings.patch"
;from https://www.drupal.org/node/2201263

;EC Features
projects[ec_foundation_types][type] = "module"
projects[ec_foundation_types][download][type] = "git"
projects[ec_foundation_types][subdir] = "ecfeature"
projects[ec_foundation_types][download][url] = "https://github.com/energycircle/ec_foundation_types.git"

projects[ec_foundation_types_democontent][type] = "module"
projects[ec_foundation_types_democontent][download][type] = "git"
projects[ec_foundation_types_democontent][subdir] = "ecfeature"
projects[ec_foundation_types_democontent][download][url] = "https://github.com/energycircle/ec_foundation_types_democontent.git"

projects[ec_foundation_other][type] = "module"
projects[ec_foundation_other][download][type] = "git"
projects[ec_foundation_other][subdir] = "ecfeature"
projects[ec_foundation_other][download][url] = "https://github.com/energycircle/ec_foundation_other.git"

projects[ec_foundation_roles][type] = "module"
projects[ec_foundation_roles][download][type] = "git"
projects[ec_foundation_roles][subdir] = "ecfeature"
projects[ec_foundation_roles][download][url] = "https://github.com/energycircle/ec_foundation_roles.git"

projects[ec_foundation_views][type] = "module"
projects[ec_foundation_views][download][type] = "git"
projects[ec_foundation_views][subdir] = "ecfeature"
projects[ec_foundation_views][download][url] = "https://github.com/energycircle/ec_foundation_views.git"

projects[ec_foundation_image_styles][type] = "module"
projects[ec_foundation_image_styles][download][type] = "git"
projects[ec_foundation_image_styles][subdir] = "ecfeature"
projects[ec_foundation_image_styles][download][url] = "https://github.com/energycircle/ec_foundation_image_styles.git"


; Themes
projects[adaptivetheme][version] = 3.x
projects[adaptivetheme][type] = theme

; Include DEV tools
projects[ec_foundation_theme][type] = "theme"
projects[ec_foundation_theme][download][type] = "git"
projects[ec_foundation_theme][download][url] = "https://github.com/energycircle/ec_foundation_theme.git"


