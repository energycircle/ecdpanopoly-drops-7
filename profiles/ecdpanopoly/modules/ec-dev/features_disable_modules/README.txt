/**
 * @file
 * README file for Features Disable Modules.
 */

Features Disable Modules

DESCRIPTION
This module extends Features to ensure automated disabling of unnecessary or 
conflicting modules.
This module aims to help you if you want to find an automated way of disabling 
modules.

USAGE
You will be able to export a new set of components called 'Disable Modules' on 
the Features' Create/Recreate module page.

1. Create a new featue module and export a list of modules you don't want to be 
enabled.
2. Copy the newly created feature module into sites/all/modules or any 
equivalent folder.
3. Enable the newly created module. Your modules will be disabled immediately or 
at least at the next cache clear or feature revert.

NOTICES
You won't be able to enable exported modules until you had removed it from the 
controlling module's list of disabled modules.

You will get an error if you try to enable those modules.

Another way to enable exported modules is disabling the feature module what 
doesn't let them to be enabled.

INSTALLATION
As usual

EXAMPLES
1. You can disable the Views UI and module on the production site.
3. You can create a feature which controlles the state of other modules using 
dependencies to enable necessary and disable_modules to disable unnecessary 
modules. You can call such a module as MyProject Modules.
