SUMMARY - Total Control
========================
The Total Control Admin Dashboard creates a default panel page with useful 
administration panes right out of the box. Several overview panes are included 
for site stats and quick reference. Administration view panes are provided with 
'more' links to more comprehensive versions of the views. Each View pane is 
customizable via pane config, or override the defaults provided to suit your 
own needs.  

For a full description of the module, visit the project page:
  http://drupal.org/project/total_control


REQUIREMENTS
-------------
Chaos Tools 1.x
Panels 3.x 
Views 2.x
Views Bulk Operations


INSTALLATION
-------------
Install this module as usual, see
http://drupal.org/documentation/install/modules-themes/modules-7


CONFIGURATION
--------------
Configure user permissions in Administer >> People >> Permissions

  * have total control
    Users in roles with the "have total control" permission will see
    the administration dashboard and all included view pages.

  * administer total control
    Users in roles with the "administer total control" permission will be
    able to visit the settings page where they can determine weather links
    will appear on the panes to "configure" content types.


CUSTOMIZATION
--------------
To override the default lists on the dashboard, you have two options:

  1. Edit the settings on the panel pane:
     * Use the cog wheel at the top right of the panel display
     * (or visit Admin > Structure > Pages/Panels)
     * Configure the pane in question (via cog wheel at top right of pane)

  2. Override the default views provided with the total_control module:
     * use the cog wheel at the top right of the view display
     * (or visit Admin > Structure > Views)


SUPPORT
--------
Please use the issue queue to report bugs or request support:
http://drupal.org/project/issues/total_control
