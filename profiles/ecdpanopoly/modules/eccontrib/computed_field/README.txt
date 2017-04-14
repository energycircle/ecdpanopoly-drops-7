CONTENTS OF THIS FILE
--------------------

* Introduction
* Requirements
* Installation
* Configuration
* Maintainers


INTRODUCTION
------------

The Computed Field module allows users to add custom "computed fields" to content types. These computed fields are populated with values that you define via PHP code.

* For a full description of the module visit https://www.drupal.org/node/126522

* To submit bug reports and feature suggestions, or to track changes visit https://www.drupal.org/project/issues/computed_field


REQUIREMENTS
------------

This module requires no modules outside of Drupal core.


INSTALLATION
------------

* Install the Computed Field as you would normally install a contributed Drupal module. Visit https://www.drupal.org/docs/7/extending-drupal-7/installing-contributed-modules-find-import-enable-configure-drupal-7 for further information.


CONFIGURATION
--------------

1. To add a computed field to a content type, navigate to Administration > Structure > Content types and select the content type to be edited.
2. Select the "manage fields" tab.
3. "Add a new field" and now the field type "Computed" is available. Save.

Computed Code
* This is the code that will assign a value to your computed field. It should be valid PHP without the <?php ?> tags.
Display Code
* This is also PHP code which should assign a string to the $display_output variable. It has $entity_field_item['value'] available, which is the value of the computed field. It also has $field (and some language information) available, and you can call any Drupal functions you want to display your field. Alternately, the code can be supplied by your own custom function named computed_field_YOUR_FIELD_MACHINE_NAME_display().

Database Storage Settings
* Data type - This is the SQL data type to use for storing the field contents in the database. Let us know if you need any other storage types, or if you would like an 'other' option. For calculating dollars and cents, for example, you would choose the "decimal" option.
* Data Length - This value will simply be passed on to SQL. For storing up to 10 digit integers (INTs), enter 10. For storing currency as a float, use 10,2 (unless you'll store larger than 10 figure amounts). For storing usernames or other short text with a VARCHAR field, 64 may be appropriate.
* Default Value - Leave this blank if you don't want the database to store a default value if your computed field's value isn't set. Following the currency example above, you would set this to "0.00".
* Not NULL - Leave unchecked if you want to allow NULL values in the database field. For things like currency, you probably want to check this.
* Indexed - Adds a simple DB index on the computed values.


MAINTAINERS
-----------

* Ra Mänd (ram4nd) - https://www.drupal.org/u/ram4nd
* Vadym Myrgorod (dealancer) - https://www.drupal.org/u/dealancer
* Colan Schwartz (colan) - https://www.drupal.org/u/colan
* Moonshine - https://www.drupal.org/u/moonshine
* Pedro Lozano - https://www.drupal.org/u/pedro-lozano

Supporting organization for Drupal 7: 
Colan Schwartz Consulting - (https://www.drupal.org/colan-schwartz-consulting)
