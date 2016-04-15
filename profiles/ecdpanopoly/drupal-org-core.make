api = 2
core = 7.x
base = panopoly

; Use Panopoly instead of Drupal core:
 projects[panopoly][type] = core
 projects[panopoly][download][type] = git
 projects[panopoly][download][url] = git://github.com/energycircle/ecdpanopoly-drops-7.git
 projects[panopoly][download][branch] = master

; Bug with image styles on database update
projects[drupal][patch][1973278] = http://www.drupal.org/files/issues/image-accommodate_missing_definition-1973278-16.patch
