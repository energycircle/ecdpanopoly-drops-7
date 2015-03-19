ECDPanopoly  7.x-1.1-rc7, 2015-3-20
---------------------------
All changes in this release:

    Update Panopoly Core for Issue #2455073: Update to CTools 1.7 for SA-CONTRIB-2015-079
    #2455061: Update Drupal core to 7.35 for SA-CORE-2015-001
    Update Panopoly Magic and Test for Issue #2443499 by dsnopek: User profile: Unable to chage image field style formatter options because they don't get saved
    Update Panopoly Admin for Issue #2424017 by B-Prod: Malformed (and useless) string context causes errors with new versions of CTools
    Update Panopoly Test for Issue #2453837 by dsnopek: Authenticated users should have full permission to all test content types
    Update Panopoly Search and Test for Issue #2423841 by dsnopek: "Top search phrases" report not showing any data
    Update Panopoly Widgets for Issue #2432625 by dsnopek: panopoly_widgets makes it hard/impossible to implement responsive tables strategy for the whole site
    Update Panopoly Image for Issue #2449357 by dsnopek: Relabeled view modes baffles
    Update Panopoly Pages and Test for Issue #2293947 by caschbre, dsnopek, mglaman: Make "Landing Page" into node + Panelizer (rather than a Page Manager page)
    Update Panopoly WYSIWYG for Issue #2449495 by dsnopek: livepreview.feature is super slow
    Update Panopoly Users for Issue #2447591 by bwood: Perform coding style fixes on panopoly_users
    Update Panopoly Core for Issue #2448757: Features exports including Panels stuff (*.pages_default.inc, *.panelizer.inc, etc) use incorrect indentation
    Update Panopoly Admin for Issue #2444359 by caschbre: Update admin_views to version 1.4
    Update Panopoly Admin for Issue #2396241 by brandy.brown, dsnopek: Hide field labels in a more accessible way
    Update Panopoly Widgets for Issue #2446219 by mglaman: Media Vimeo patch to fix improper Exception handling
    Update Panopoly Admin for Issue #2152111 by brandy.brown, dsnopek: Removal of description from Featured image
    Update Panopoly Magic, Core and Test for Issue #2398347 by dsnopek, mglaman: Panopoly Magic abuses FPP revisions
    Update Panopoly Test and Magic for Issue #2447839 by dsnopek: Audit Behat code for slowness and optimize
    Update Panopoly Test for Issue #2447475 by dsnopek: YouTube test fails on Chrome 41
    Update Panopoly Magic for Issue #2443031 by joegraduate: Panopoly Magic update generates warning when FPP not installed
    Update Panopoly Admin for Issue #2430617 by hanoii: states.js doesn't work properly with jquery 1.7 (jquery_update 2.3)
    Update Panopoly Core for Issue #2420281 by dsnopek: Administration menu: errors when enabling it
    Update Panopoly Admin for Issue #2412321: Update admin_menu to 3.0-rc5
    Update Panopoly Admin for Issue #2272179: Update 'module_filter' module to version 7.x-2.0 (1.8 unsupported)
    #2442813: Installing last release fails to pull in panopoly_demo on Travsi-CI
    Update Panopoly Magic and Test for Issue #2317467 by dsnopek: Allow live preview to work with WYSIWYG
    #2231631 by dsnopek: Tests randomly fail with "MySQL server has gone away" (take 4)
    Start testing upgrades from the 1.18 release.
    Restored drupal-org.make after the 1.18 release


ECDPanopoly  7.x-1.1-rc6, 2015-2-25
---------------------------
- Upgrade panopoly to 1.17
- Drupal 7.34, 2014-11-19
	- Fixed security issues (multiple vulnerabilities). See SA-CORE-2014-006.