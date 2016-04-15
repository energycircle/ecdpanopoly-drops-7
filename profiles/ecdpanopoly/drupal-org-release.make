api = 2
core = 7.x
base = panopoly

; Use Panopoly instead of Drupal core:
 projects[panopoly][type] = core
 projects[panopoly][download][type] = git
 projects[panopoly][download][url] = https://github.com/pantheon-systems/drops-7.git
 projects[panopoly][download][branch] = master
 
; Pull in Custom Profile ECDPanopoly:
 projects[ecdpanopoly][type] = profile
 projects[ecdpanopoly][download][type] = git
 projects[ecdpanopoly][download][url] = https://github.com/energycircle/ecdpanopoly.git
 projects[ecdpanopoly][download][branch] = 1.x
