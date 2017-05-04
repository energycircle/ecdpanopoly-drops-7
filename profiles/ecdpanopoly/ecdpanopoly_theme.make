api = 2
core = 7.x


; BASE THEME
projects[adaptivetheme][version] = 3.x
projects[adaptivetheme][type] = theme


; Include Theme
projects[ec_foundation_theme][type] = theme
projects[ec_foundation_theme][download][type] = git
projects[ec_foundation_theme][download][contrib_destination] = sites/all/themes
projects[ec_foundation_theme][download][url] = https://github.com/energycircle/ec_foundation_theme.git

; Include Admin Theme
projects[ec_at_admin][type] = theme
projects[ec_at_admin][download][type] = git
projects[ec_at_admin][download][subdir] = theme
projects[ec_at_admin][download][url] = https://github.com/energycircle/ec_at_admin.git
