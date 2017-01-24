api = 2
core = 7.x

; Drupal Contrib Mods
includes[] = panopoly.make

; Drupal Contrib Mods
includes[] = ecdpanopoly_contrib.make

; Theme
includes[] = ecdpanopoly_theme.make

; Drupal DEV Contrib Mods
includes[] = ecdpanopoly_contrib_dev.make

; Features
includes[] = ecdpanopoly_features.make

; Include drush commands
;drush_install_commands.sh


projects[drupal][patch][2364343-20] = https://www.drupal.org/files/issues/2364343-20.robots.txt.patch
projects[drupal][patch][] = https://www.drupal.org/files/issues/1551132-drupal-reinstall-schema-empty-tables-87-D7.patch
