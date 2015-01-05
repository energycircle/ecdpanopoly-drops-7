
EC RMS: Review Management System

Energy Circle Platinum 

rev. 1.0  01-05-15

Overview
==========

The RMS feature allows site content editors to import a set of review nodes, used to prompt and collect customer ratings from 1 to 10 and customer reviews for the website or on third-party review sites.

For each imported customer review node, an email is sent to the customer, soliciting a rating. A link in the email opens the customer review node, with a 1 to 10 rating widget displayed. 

Based on the rating, the customer is directed either to a reviews page (for high ratings) or to a customer feedback page (for medium or low rating).

The review page includes a text entry field for entering reviews for the site, and/or a list of third-party review sites (with links).

Administrative pages allow content editors to view and manage the reviews.

The token that allows the customer to edit the review node expires in one week, after which time the link in the email expires.


Installation and Setup
==========
1. Turn on the Feature
2. Edit review sites and enter the client-specific review site urls.
	Go to: Content >> filter by type = "RMS Review Site"
	Edit each review site and enter the url.
	Add new review sites as desired.
	Remove unwanted review sites by unpublishing or deleting the nodes.
3. Set the order of the review sites at /admin/review-sites
4. Edit labels/copy as desired.
	Edit field labels at Structure >> Content Types >> RMS Customer Review >> Manage fields.
	Edit the message copy (in custom panel panes) at Structure >> Pages >> click "edit" next to the System / the node_edit page >> click "Content" for whichever Variant you want to work on, and edit the custom panel pane(s).
	Edit the email content at Configuration >> Workflow >> Rules >> RMS: Send New Review Email >> edit the Action, "Send HTML e-mail"
5. Import new RMS Customer Review nodes at /import
6. View/Manage reviews at /admin/reviews

Test with a test import before importing live customer records.
	

Troubleshooting
==========
* html email: tags are being stripped from the email. Turn off WYSIWYG filter for html input format to allow any html. (Use with caution!)





