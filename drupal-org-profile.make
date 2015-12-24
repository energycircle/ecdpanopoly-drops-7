api = 2
core = 7.x
base= panopoly
 
; Pull in Custom Profile ECDPanopoly:
 projects[ecdpanopoly][type] = profile
 projects[ecdpanopoly][download][type] = git
 projects[ecdpanopoly][download][url] = https://github.com/energycircle/ecdpanopoly.git
 projects[ecdpanopoly][version] = master


projects[drupal][patch][1973278] = http://www.drupal.org/files/issues/image-accommodate_missing_definition-1973278-16.patch
