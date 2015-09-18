<?php
/**
 * @file
 * ec_blog_demo_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ec_blog_demo_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'130\',
      \'uid\' => \'0\',
      \'title\' => \'Test Blog Article 2\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'90c57c63-8190-4e69-9a15-d431454cecdf\',
      \'nid\' => \'8\',
      \'type\' => \'blog_post\',
      \'language\' => \'und\',
      \'created\' => \'1414102662\',
      \'changed\' => \'1442258437\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4164e0fa-76fd-4421-9f76-31c019db75b1\',
      \'revision_timestamp\' => \'1442258437\',
      \'revision_uid\' => \'0\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_blog_image\' => array(),
      \'field_content_link\' => array(),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-23 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_blog_article\' => array(),
      \'field_ref_blog_case_study\' => array(),
      \'field_ref_blog_page\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'17\',
          ),
          array(
            \'target_id\' => \'18\',
          ),
        ),
      ),
      \'field_ref_blog_serv_cat\' => array(),
      \'field_ref_blog_serv_group\' => array(),
      \'field_ref_blog_service\' => array(),
      \'path\' => array(
        \'pid\' => \'186\',
        \'source\' => \'node/8\',
        \'alias\' => \'blog/test-blog-article-2\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'8\',
            \'revision_id\' => \'130\',
            \'name\' => \'node:blog_post:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_blog_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                )),
                \'new-f9de1328-2b92-49ef-b109-11a59b997651\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f9de1328-2b92-49ef-b109-11a59b997651\',
                )),
                \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                )),
                \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'promotions-panel_pane_2\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'nodes\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'show_this_block\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                  1 => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                  2 => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'184\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-An Online Customer Review Process that Works\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f64c199f-898b-4d21-989f-91172ae0a251\',
      \'nid\' => \'165\',
      \'type\' => \'blog_post\',
      \'language\' => \'und\',
      \'created\' => \'1442263914\',
      \'changed\' => \'1442263955\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'56869610-6d10-4dee-a96c-fa4652f7e304\',
      \'revision_timestamp\' => \'1442263955\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>As you know from our past blog posts, online reviews are very important for home performance companies. Reviews allow customers to trust your company and they improve local SEO. &nbsp;At Energy Circle, we follow a three step process for managing online reviews.</p><ol><li><h5>Ask</h5></li><li><h5>Filter</h5></li><li><h5>Respond</h5></li></ol><h3>&nbsp;</h3><h3>1- Ask</h3><p>Customers are unlikely to go online and leave a review without being prompted to, unless they had an exceptional experience (good or bad). A great method for gathering reviews is&nbsp;<a href=\\"http://www.energycircle.com/pro/webinar/secrets-total-email-domination-home-performance-marketing\\" target=\\"_blank\\">emailing former customers</a>. This means that you have to collect customer emails. If you have not been doing this in the past, now is a great time to start. The larger the email list you have, the higher number of reviews you are likely to receive.</p><p>If you have a good sized list of customer emails, don’t send them out all at once! It looks weird to customers and search engines if 99% of your reviews occur over the span of one week. Google will be more likely to read this as spam and you will lose out on the SEO benefits. It is best to space out your review request over a few months if you are planning on getting a high number of responses.</p><p>Keep these emails short and direct. You want the former customer to have no distractions between their mouse and the 10-star rating. A simple “We appreciate your business - please leave us feedback” is more than enough to inspire a review.</p><p>While it is best to contact people while the memory is still fresh in their mind, we have seen success from campaigns that send emails to customers who received services as far as two years ago. People don’t forget a positive experience, especially when it comes to home performance.</p><h3>2- Filter</h3><p>A recent&nbsp;<a href=\\"https://moz.com/blog/new-data-reveals-67-of-consumers-are-influenced-by-online-reviews\\" target=\\"_blank\\">MozBlog</a>&nbsp;by Dan Hinckley stated that 67% of online shoppers are influenced by online reviews. This stands for both positive and negative reviews. If a customer types in your business name to Google and is greeted with one-star, negative reviews, there is a good chance they will turn-tail and run. One or two bad reviews are not detrimental, as long as they are surrounded by other glowing review, but if your negative review count grows too high it could affect your bottom line.</p><p>To avoid negative reviews you need to filter out the customers who have had a negative experience, and be sure not to direct them to third party sites like Google+ and Yelp. An effective method is to have two different follow-up emails, one for people who have left a positive review and one for people who have left a negative review.</p><ul><li><p>The follow-up email for people who have left a positive review will include links to third party review sites and encourage them to share their experience with the world.</p></li><li><p>The follow-up email for those who had a negative experience should thank them for their feedback and include note that you will investigate what went wrong and how it can be improved.</p></li></ul><p>By using this filtration method you can increase the chances that people with positive things to say will share their experiences. And those who had a bad experience can be dealt with internally before they express their thoughts to the world.</p><p><a href=\\"https:\\" target=\\"_blank\\"><img src=\\"https://lh5.googleusercontent.com/JdrI4i8OY2PzI7GCMpZigo3SEhAPMmdXjxq1Wmro0rB10CvjMj4m3WnV3EIfzwPlnSNHhq_VNA2webAb3jnewaeMyG_9EfIpdokIYMNeSsoAftzZGDF3DSL5txkieLG00Gaby0o\\" alt=\\"An example of a filtered review request for clients who had a positive experience\\"></a></p><h5><em>Here\'s an example format for a call-to-action link you should send to your positive reviewers.</em></h5><h3>3- Respond</h3><p>Congratulations! You managed to get a review on a 3rd party site… now what? People like to see that a company is engaging with its customers. When you receive a review on a third party site it is recommend that you respond. &nbsp;A simple “Thank You” to the reviewer can increase your company\'s trust and credibility. Not to mention it makes the customer feel good about leaving their feedback, and may inspire others to do the same.</p><p>Responding to a negative review is a tricky subject, and every case is different. In most scenarios it is best to take a deep breath, approach the response without any bias, respond calmly, and do your best to try and take the discussion off of a public forum. If an apology is necessary, then apologize and make it known that you are taking all possible actions to prevent the occurrence from happening again.</p><h3>Reviews Impact the Bottom Line</h3><p>The numbers clearly show that customers care about reviews, and they can be the difference between choosing you or choosing your competitor. This process can be your guide to online review management success.</p><p>For more tips on weekly approaches to building a strong online reputation check out this post from Peter Troast on&nbsp;<a href=\\"http://www.energycircle.com/blog/2015/04/08/five-things-do-each-week\\" target=\\"_blank\\">Five Things to do Each Week.</a></p><p>Do you have experience using a review management system? Leave a comment below explaining what you liked, or didn’t like. If you’re interested in integrating with an app, we’d love to hear from you.</p><p></p>",
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<p>As you know from our past blog posts, online reviews are very important for home performance companies. Reviews allow customers to trust your company and they improve local SEO.  At Energy Circle, we follow a three step process for managing online reviews.</p><ol><li><h5>Ask</h5></li><li><h5>Filter</h5></li><li><h5>Respond</h5></li></ol><h3> </h3><h3>1- Ask</h3><p>Customers are unlikely to go online and leave a review without being prompted to, unless they had an exceptional experience (good or bad). A great method for gathering reviews is <a href=\\"http://www.energycircle.com/pro/webinar/secrets-total-email-domination-home-performance-marketing\\" target=\\"_blank\\">emailing former customers</a>. This means that you have to collect customer emails. If you have not been doing this in the past, now is a great time to start. The larger the email list you have, the higher number of reviews you are likely to receive.</p><p>If you have a good sized list of customer emails, don’t send them out all at once! It looks weird to customers and search engines if 99% of your reviews occur over the span of one week. Google will be more likely to read this as spam and you will lose out on the SEO benefits. It is best to space out your review request over a few months if you are planning on getting a high number of responses.</p><p>Keep these emails short and direct. You want the former customer to have no distractions between their mouse and the 10-star rating. A simple “We appreciate your business - please leave us feedback” is more than enough to inspire a review.</p><p>While it is best to contact people while the memory is still fresh in their mind, we have seen success from campaigns that send emails to customers who received services as far as two years ago. People don’t forget a positive experience, especially when it comes to home performance.</p><h3>2- Filter</h3><p>A recent <a href=\\"https://moz.com/blog/new-data-reveals-67-of-consumers-are-influenced-by-online-reviews\\" target=\\"_blank\\">MozBlog</a> by Dan Hinckley stated that 67% of online shoppers are influenced by online reviews. This stands for both positive and negative reviews. If a customer types in your business name to Google and is greeted with one-star, negative reviews, there is a good chance they will turn-tail and run. One or two bad reviews are not detrimental, as long as they are surrounded by other glowing review, but if your negative review count grows too high it could affect your bottom line.</p><p>To avoid negative reviews you need to filter out the customers who have had a negative experience, and be sure not to direct them to third party sites like Google+ and Yelp. An effective method is to have two different follow-up emails, one for people who have left a positive review and one for people who have left a negative review.</p><ul><li><p>The follow-up email for people who have left a positive review will include links to third party review sites and encourage them to share their experience with the world.</p></li><li><p>The follow-up email for those who had a negative experience should thank them for their feedback and include note that you will investigate what went wrong and how it can be improved.</p></li></ul><p>By using this filtration method you can increase the chances that people with positive things to say will share their experiences. And those who had a bad experience can be dealt with internally before they express their thoughts to the world.</p><p><a href=\\"https:\\" target=\\"_blank\\"><img src=\\"/sites/default/files/resize/remote/6be706edaacd62c4eaec371549238e34-561x446.png\\" alt=\\"An example of a filtered review request for clients who had a positive experience\\" width=\\"561\\" height=\\"446\\"></a></p><h5><em>Here\'s an example format for a call-to-action link you should send to your positive reviewers.</em></h5><h3>3- Respond</h3><p>Congratulations! You managed to get a review on a 3rd party site… now what? People like to see that a company is engaging with its customers. When you receive a review on a third party site it is recommend that you respond.  A simple “Thank You” to the reviewer can increase your company\'s trust and credibility. Not to mention it makes the customer feel good about leaving their feedback, and may inspire others to do the same.</p><p>Responding to a negative review is a tricky subject, and every case is different. In most scenarios it is best to take a deep breath, approach the response without any bias, respond calmly, and do your best to try and take the discussion off of a public forum. If an apology is necessary, then apologize and make it known that you are taking all possible actions to prevent the occurrence from happening again.</p><h3>Reviews Impact the Bottom Line</h3><p>The numbers clearly show that customers care about reviews, and they can be the difference between choosing you or choosing your competitor. This process can be your guide to online review management success.</p><p>For more tips on weekly approaches to building a strong online reputation check out this post from Peter Troast on <a href=\\"http://www.energycircle.com/blog/2015/04/08/five-things-do-each-week\\" target=\\"_blank\\">Five Things to do Each Week.</a></p><p>Do you have experience using a review management system? Leave a comment below explaining what you liked, or didn’t like. If you’re interested in integrating with an app, we’d love to hear from you.</p><p></p>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'field_blog_image\' => array(),
      \'field_content_link\' => array(),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-14 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_blog_article\' => array(),
      \'field_ref_blog_case_study\' => array(),
      \'field_ref_blog_page\' => array(),
      \'field_ref_blog_serv_cat\' => array(),
      \'field_ref_blog_serv_group\' => array(),
      \'field_ref_blog_service\' => array(),
      \'path\' => array(
        \'pid\' => \'382\',
        \'source\' => \'node/165\',
        \'alias\' => \'blog/online-customer-review-process-works\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'165\',
            \'revision_id\' => \'184\',
            \'name\' => \'node:blog_post:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_blog_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                )),
                \'new-f9de1328-2b92-49ef-b109-11a59b997651\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f9de1328-2b92-49ef-b109-11a59b997651\',
                )),
                \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                )),
                \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'promotions-panel_pane_2\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'nodes\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'show_this_block\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                  1 => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                  2 => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'131\',
      \'uid\' => \'0\',
      \'title\' => \'Demo-Test Blog Article 1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'acb8e0b9-5da7-431c-a494-c1e2b894992a\',
      \'nid\' => \'9\',
      \'type\' => \'blog_post\',
      \'language\' => \'und\',
      \'created\' => \'1414102610\',
      \'changed\' => \'1442367645\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a493cbb-f8ce-4d67-ad92-f055e9d45bf7\',
      \'revision_timestamp\' => \'1442367645\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the placeholder text for this page. Please replace this text with real copy.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the placeholder text for this page. Please replace this text with real copy.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_category\' => array(),
      \'field_blog_image\' => array(),
      \'field_content_link\' => array(),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-23 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_blog_article\' => array(),
      \'field_ref_blog_case_study\' => array(),
      \'field_ref_blog_page\' => array(),
      \'field_ref_blog_serv_cat\' => array(),
      \'field_ref_blog_serv_group\' => array(),
      \'field_ref_blog_service\' => array(),
      \'path\' => array(
        \'pid\' => \'187\',
        \'source\' => \'node/9\',
        \'alias\' => \'blog/test-blog-article-1\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'9\',
            \'revision_id\' => \'131\',
            \'name\' => \'node:blog_post:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_blog_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                )),
                \'new-f9de1328-2b92-49ef-b109-11a59b997651\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f9de1328-2b92-49ef-b109-11a59b997651\',
                )),
                \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                )),
                \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'promotions-panel_pane_2\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'nodes\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'show_this_block\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                  1 => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                  2 => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'185\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-9 Ideas for Lead Capture for High-Performance Home Builders\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'02d7aa35-4964-4e5f-8843-71b0226ad40c\',
      \'nid\' => \'166\',
      \'type\' => \'blog_post\',
      \'language\' => \'und\',
      \'created\' => \'1442264041\',
      \'changed\' => \'1442264058\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5db9d50e-2d9a-4ece-b66a-8daa0efedb0c\',
      \'revision_timestamp\' => \'1442264058\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>One of the greatest marketing challenges for builders and remodelers, and especially for those in the high performance (or green or&nbsp;<a href="http://www.phius.org/home-page" target="_blank">passive</a>&nbsp;or&nbsp;<a href="http://energy.gov/eere/buildings/zero-energy-ready-home" target="_blank">net zero</a>&nbsp;or&nbsp;<a href="https://www.energystar.gov/index.cfm?c=new_homes.hm_index" target="_blank">EnergyStar</a>) market, is&nbsp;<a href="http://www.energycircle.com/find?terms=lead+capture" target="_blank">lead capture</a>. Your potential client starts thinking about a project many years before it might happen. That lengthy period of dreaming, research and study is when you’d ideally capture the lead – and nurture that opportunity through to a contract.</p><p>The fundamental question, of course, is how to do that given that the consideration phase of a new project is such a long and winding journey.</p><p>At Energy Circle, we think of this as the challenge of multi-stage lead capture. This basic sales funnel diagram shows a hypothetical process for high-performance builders:</p><p><img src="https://lh5.googleusercontent.com/iPH1n3KiAazV27cXU9qeiDawhaqLsMY8D98yQJ4C1ItAVEmWYQMVlgWmtKcPflGjLyizLDTXgETl7g6bTnzSGME-jPnu0vLfTAelWXmv8JmAfAwcZeZVKm5SoBxw8FhQC8xGpUw" alt="A basic sales funnel diagram shows hypothetical process for high-performance builders"></p><p>In a more accurate diagram for the building industry, the top of the funnel would be even more exaggerated in comparison to the middle and bottom. Again, that’s because there is so much going on in a typical buyer’s mind during the early stages.</p><h4>Dissecting the Top of the Funnel</h4><p>By dissecting the thinking process that goes into a decision to build a new home or a substantial remodel, we can then identify opportunities for prospective clients to contact you. From there the right&nbsp;<a href="http://www.energycircle.com/blog/2012/10/24/low-energy-home-storytelling-what-s-best-channel" target="_blank">level of engagement</a>, nurturing and relationship building is the path to a contract.</p><p>What is fundamental about all&nbsp;<a href="http://www.energycircle.com/blog/2013/07/15/importance-of-strong-call-action" target="_blank">lead capture efforts</a>&nbsp;is to see that it is an exchange. A prospect is only willing to give up their contact information if they feel they are getting something of value in return. So think about it in those terms: What can you offer people that is useful, valuable, and worthy of the gift of their name?</p><p>The key top-of-funnel stages are all about questions and answers. Even the most highly educated leads are on your site to get more details about costs, terminology and process.</p><p>Here are some ideas for customer offers you can make on your site to get a phone call or a name during the early steps:</p><p><strong>Attend a workshop</strong>&nbsp;– you want to look for ways to connect online and offline experiences. Putting faces with names is just as important for you as it is for the customer. Workshops are a nice, very top-of-funnel idea for interacting with leads.</p><p><strong>Attend an open house</strong>&nbsp;– like a workshop, an open house will connect online and offline experiences, but in a more casual way. Here you are likely thinking about socially motivated leads, as opposed to pure high-performance geeks.</p><p><strong>View an online webinar</strong>&nbsp;– not everyone can find time to attend an in-person workshop or open house. Consider starting a webinar program for the online community. You can record the live versions and place them on your site (with an email gate) for ongoing lead capture. More importantly, you can interact with live attendees and do some Q&amp;A.</p><p><strong>Download our guide to high-performance home terminology</strong>&nbsp;– help your leads speak the language, one of their primary needs.</p><p>As potential customers move farther down the funnel toward the middle stages, your offers may start to include:</p><p><strong>Download our “Guide to Planning Your High Performance Home”&nbsp;</strong>– a content asset like this can take quite a bit of time to create, but if you believe your leads are educated and answers-driven (as most are) it can be worth doing.</p><p><strong>Read our “List of Questions to Ask Any Builder”</strong>&nbsp;– this is a pretty easy list to generate, because you can base it off the FAQs you receive in your office. Add your expertise into the mix with a friendly introduction, and don’t forget a strong call to action.</p><p><strong>Learn about financing options for passive homes</strong>&nbsp;– address another big worry (costs) head-on with a page about the options specific to your geographic area.</p><p><strong>Contact Us Directly&nbsp;</strong>- while many people in the consideration phase may not call you, some will and it’s important to offer them this route. Again, be mindful of the value. Can you offer something useful during that call? “Free consultation” is a good label for this type of call-to-action.</p><p><strong>Sign Up for Our Newsletter&nbsp;</strong>– Finally, something to consider having in your lead generation engine throughout the process is an email newsletter program. This works best when it is informational, educational and consistent. If you have the ability to meet those needs, pushing a post into customer inboxes every month or so can help maintain a long-term connection.</p><p><a href="http://www.energycircle.com/pro/white-papers/putting-your-website-to-work" target="_blank">No matter which options you use on your site</a>&nbsp;(and there are plenty more than what we listed above) remember the types of leads you are seeking. A key part of that is to exclude the lead types you are not actively trying to reach. It’s not that you don’t want to hear from everyone, it’s just that you will want to keep your offers and messaging targeted at the leads you consider most valuable.</p><p>Be a guide for the long-term journey that your customers are in. Anticipate their needs through each stage of the process, and be creative with the offers you make. You’ll find lead capture a lot more rewarding and focused.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>One of the greatest marketing challenges for builders and remodelers, and especially for those in the high performance (or green or <a href="http://www.phius.org/home-page" target="_blank">passive</a> or <a href="http://energy.gov/eere/buildings/zero-energy-ready-home" target="_blank">net zero</a> or <a href="https://www.energystar.gov/index.cfm?c=new_homes.hm_index" target="_blank">EnergyStar</a>) market, is <a href="http://www.energycircle.com/find?terms=lead+capture" target="_blank">lead capture</a>. Your potential client starts thinking about a project many years before it might happen. That lengthy period of dreaming, research and study is when you’d ideally capture the lead – and nurture that opportunity through to a contract.</p><p>The fundamental question, of course, is how to do that given that the consideration phase of a new project is such a long and winding journey.</p><p>At Energy Circle, we think of this as the challenge of multi-stage lead capture. This basic sales funnel diagram shows a hypothetical process for high-performance builders:</p><p><img src="/sites/default/files/resize/remote/7058ecea46c2e9885ac1471032effffb-611x401.png" alt="A basic sales funnel diagram shows hypothetical process for high-performance builders" width="611" height="401"></p><p>In a more accurate diagram for the building industry, the top of the funnel would be even more exaggerated in comparison to the middle and bottom. Again, that’s because there is so much going on in a typical buyer’s mind during the early stages.</p><h4>Dissecting the Top of the Funnel</h4><p>By dissecting the thinking process that goes into a decision to build a new home or a substantial remodel, we can then identify opportunities for prospective clients to contact you. From there the right <a href="http://www.energycircle.com/blog/2012/10/24/low-energy-home-storytelling-what-s-best-channel" target="_blank">level of engagement</a>, nurturing and relationship building is the path to a contract.</p><p>What is fundamental about all <a href="http://www.energycircle.com/blog/2013/07/15/importance-of-strong-call-action" target="_blank">lead capture efforts</a> is to see that it is an exchange. A prospect is only willing to give up their contact information if they feel they are getting something of value in return. So think about it in those terms: What can you offer people that is useful, valuable, and worthy of the gift of their name?</p><p>The key top-of-funnel stages are all about questions and answers. Even the most highly educated leads are on your site to get more details about costs, terminology and process.</p><p>Here are some ideas for customer offers you can make on your site to get a phone call or a name during the early steps:</p><p><strong>Attend a workshop</strong> – you want to look for ways to connect online and offline experiences. Putting faces with names is just as important for you as it is for the customer. Workshops are a nice, very top-of-funnel idea for interacting with leads.</p><p><strong>Attend an open house</strong> – like a workshop, an open house will connect online and offline experiences, but in a more casual way. Here you are likely thinking about socially motivated leads, as opposed to pure high-performance geeks.</p><p><strong>View an online webinar</strong> – not everyone can find time to attend an in-person workshop or open house. Consider starting a webinar program for the online community. You can record the live versions and place them on your site (with an email gate) for ongoing lead capture. More importantly, you can interact with live attendees and do some Q&amp;A.</p><p><strong>Download our guide to high-performance home terminology</strong> – help your leads speak the language, one of their primary needs.</p><p>As potential customers move farther down the funnel toward the middle stages, your offers may start to include:</p><p><strong>Download our “Guide to Planning Your High Performance Home” </strong>– a content asset like this can take quite a bit of time to create, but if you believe your leads are educated and answers-driven (as most are) it can be worth doing.</p><p><strong>Read our “List of Questions to Ask Any Builder”</strong> – this is a pretty easy list to generate, because you can base it off the FAQs you receive in your office. Add your expertise into the mix with a friendly introduction, and don’t forget a strong call to action.</p><p><strong>Learn about financing options for passive homes</strong> – address another big worry (costs) head-on with a page about the options specific to your geographic area.</p><p><strong>Contact Us Directly </strong>- while many people in the consideration phase may not call you, some will and it’s important to offer them this route. Again, be mindful of the value. Can you offer something useful during that call? “Free consultation” is a good label for this type of call-to-action.</p><p><strong>Sign Up for Our Newsletter </strong>– Finally, something to consider having in your lead generation engine throughout the process is an email newsletter program. This works best when it is informational, educational and consistent. If you have the ability to meet those needs, pushing a post into customer inboxes every month or so can help maintain a long-term connection.</p><p><a href="http://www.energycircle.com/pro/white-papers/putting-your-website-to-work" target="_blank">No matter which options you use on your site</a> (and there are plenty more than what we listed above) remember the types of leads you are seeking. A key part of that is to exclude the lead types you are not actively trying to reach. It’s not that you don’t want to hear from everyone, it’s just that you will want to keep your offers and messaging targeted at the leads you consider most valuable.</p><p>Be a guide for the long-term journey that your customers are in. Anticipate their needs through each stage of the process, and be creative with the offers you make. You’ll find lead capture a lot more rewarding and focused.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'field_blog_image\' => array(),
      \'field_content_link\' => array(),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-14 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_blog_article\' => array(),
      \'field_ref_blog_case_study\' => array(),
      \'field_ref_blog_page\' => array(),
      \'field_ref_blog_serv_cat\' => array(),
      \'field_ref_blog_serv_group\' => array(),
      \'field_ref_blog_service\' => array(),
      \'path\' => array(
        \'pid\' => \'384\',
        \'source\' => \'node/166\',
        \'alias\' => \'blog/9-ideas-lead-capture-high-performance-home-builders\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'166\',
            \'revision_id\' => \'185\',
            \'name\' => \'node:blog_post:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_blog_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                )),
                \'new-f9de1328-2b92-49ef-b109-11a59b997651\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f9de1328-2b92-49ef-b109-11a59b997651\',
                )),
                \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                )),
                \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'promotions-panel_pane_2\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'nodes\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'show_this_block\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                  1 => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                  2 => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'159\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-BPI Goldstar Contractor Program\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'70da58cb-b2ca-4100-a9ab-ce92d3e48cfa\',
      \'nid\' => \'140\',
      \'type\' => \'blog_post\',
      \'language\' => \'und\',
      \'created\' => \'1442254840\',
      \'changed\' => \'1442254840\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9ddda92f-ea73-4a2b-bc67-c5cdfea56872\',
      \'revision_timestamp\' => \'1442254840\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The Building Performance Institute is in the process of rolling out their new&nbsp;<a href=\\"http://www.bpi.org/goldstar.aspx\\">BPI GoldStar Contractor Program</a>&nbsp;and we think this is an exceptional opportunity for home performance companies.&nbsp;</p><h3>Symbolizing a Commitment to Quality</h3><p><img class=\\"imagecache-Inline\\" src=\\"http://www.energycircle.com/sites/default/files/resize/imagecache/Inline/images/stories/39871/GoldStar%20white%20bkgd-200x200.jpg\\" title=\\"\\" alt=\\"\\" width=\\"200\\" height=\\"200\\"></p><p>The big shift from the old Accredited Contractor model is that the new program embraces quality management on the front end as a critical differentiator for companies committed to delivering whole house solutions to energy efficiency, safety and comfort problems in the home. Rather than post-job quality assurance, the new designation is for companies that commit to quality processes at the core of their operations. From our experience working with hundreds of companies in this industry, we can definitely attest that those who understand quality, and translate that into repeatable processes, are the most successful ones in this business. Strong process translates to higher profitability, happier employees and more satisfied customers. In this new era of third party reviews, in which your company\'s reputation is fundamentally in the hands of your past customers, quality is the best approach to guaranteeing, and amplifying, positive word of mouth.</p><h3>Differentiating Your Company</h3><p>BPI is working hard to develop consumer awareness of its own brand, and has invested significantly in online advertising to accomplish this goal. We\'re supporting this effort and I can assure you that we\'re making good progress on elevating consumer awareness of what it means to understand and commit to the \'house as a system\' approach to residential contracting. Consumers are more educated than ever, and all the data shows that they are becoming increasingly sophisticated in how they select contractors–relying on a combination of credentials and independent reviews to vet perspective companies. We\'ve written in the past about how old school, generic certifications like the Better Business Bureau are&nbsp;<a href=\\"http://www.energycircle.com/blog/2013/04/10/better-business-bureau-relevant-anymore\\">coming under scrutiny</a>, and about growing consumer suspicion of advertising driven models like Yelp and Angie\'s List. As a result, it is our view that more meaningful certifications that speak to real capabilities and processes are the wave of the future.</p><h3>After All, We\'re...Contractors</h3><p>While companies that embrace home performance are a different breed, the reality is we\'re still contractors. And that means we have to overcome a higher level of general consumer skepticism than many other businesses. Gallup\'s&nbsp;<a href=\\"http://www.gallup.com/poll/151460/Record-Rate-Honesty-Ethics-Members-Congress-Low.aspx\\">annual poll</a>&nbsp;of the honesty and ethics of various professions rates \\"building contractors\\" above Congress and Car Salespeople, but not by much. Programs like BPI GoldStar Contractor are an excellent way to demonstrate that you are different and trustworthy.</p><h3><img class=\\"imagecache-Inline_Full_Width\\" src=\\"http://www.energycircle.com/sites/default/files/imagecache/Inline_Full_Width/images/stories/39871/quality%20wordcloud.jpeg\\" title=\\"\\" alt=\\"\\" width=\\"340\\" height=\\"148\\"></h3><h3>The Value of Trust Symbols</h3><p>Trust Symbols–signs or badges that you can display on your website and marketing materials–are proven to increase lead conversions. This is well known and documented in eCommerce, and through A/B testing we\'re conducting for home performance contractors, we\'re also seeing a meaningful lift in conversion rates from the prominent use of trust symbols. What is important about this is that consumers don\'t have to know exactly what the symbol or certification actually means. (Do you know the difference between Verisign or Truste?) The key point is that the presence of a symbol like BPI GoldStar Contractor (which is a very nice design upgrade by the way) is likely to have a positive impact on your lead conversion rates.</p><h3>Key Takeaways</h3><ol><li>The BPI GoldStar Contractor Program offers a new way to emphasize quality in your business.</li><li>BPI is investing in building consumer awareness of their certifications.</li><li>As a trust symbol alone, the GoldStar designation will probably produce enough conversion \\"lift\\" to justify the cost.</li></ol><h3>Next Steps for Home Performance Contractors</h3><ol><li>If you are already an Accredited Contractor, jump on the opportunity to update your website and collateral with the new logos.</li><li>Don\'t hesitate to trumpet your GoldStar Contractor designation,&nbsp;<a href=\\"http://www.halcoenergy.com/about-us/latest-news/10833-halco-joins-bpi-goldstar-contractor-program.html\\">as some smart contractors are already doing</a>.</li><li>If you are not a past Accredited Contractor, you should seriously consider joining the new program. Its value to your business in training, credibility and commitment to quality are well worth it.</li></ol>",
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<p>The Building Performance Institute is in the process of rolling out their new <a href=\\"http://www.bpi.org/goldstar.aspx\\">BPI GoldStar Contractor Program</a> and we think this is an exceptional opportunity for home performance companies. </p><h3>Symbolizing a Commitment to Quality</h3><p><img class=\\"imagecache-Inline\\" src=\\"/sites/default/files/resize/remote/19132a2ec9381e7a69828004283dde6d-200x200.jpg\\" title=\\"\\" alt=\\"\\" width=\\"200\\" height=\\"200\\"></p><p>The big shift from the old Accredited Contractor model is that the new program embraces quality management on the front end as a critical differentiator for companies committed to delivering whole house solutions to energy efficiency, safety and comfort problems in the home. Rather than post-job quality assurance, the new designation is for companies that commit to quality processes at the core of their operations. From our experience working with hundreds of companies in this industry, we can definitely attest that those who understand quality, and translate that into repeatable processes, are the most successful ones in this business. Strong process translates to higher profitability, happier employees and more satisfied customers. In this new era of third party reviews, in which your company\'s reputation is fundamentally in the hands of your past customers, quality is the best approach to guaranteeing, and amplifying, positive word of mouth.</p><h3>Differentiating Your Company</h3><p>BPI is working hard to develop consumer awareness of its own brand, and has invested significantly in online advertising to accomplish this goal. We\'re supporting this effort and I can assure you that we\'re making good progress on elevating consumer awareness of what it means to understand and commit to the \'house as a system\' approach to residential contracting. Consumers are more educated than ever, and all the data shows that they are becoming increasingly sophisticated in how they select contractors–relying on a combination of credentials and independent reviews to vet perspective companies. We\'ve written in the past about how old school, generic certifications like the Better Business Bureau are <a href=\\"http://www.energycircle.com/blog/2013/04/10/better-business-bureau-relevant-anymore\\">coming under scrutiny</a>, and about growing consumer suspicion of advertising driven models like Yelp and Angie\'s List. As a result, it is our view that more meaningful certifications that speak to real capabilities and processes are the wave of the future.</p><h3>After All, We\'re...Contractors</h3><p>While companies that embrace home performance are a different breed, the reality is we\'re still contractors. And that means we have to overcome a higher level of general consumer skepticism than many other businesses. Gallup\'s <a href=\\"http://www.gallup.com/poll/151460/Record-Rate-Honesty-Ethics-Members-Congress-Low.aspx\\">annual poll</a> of the honesty and ethics of various professions rates \\"building contractors\\" above Congress and Car Salespeople, but not by much. Programs like BPI GoldStar Contractor are an excellent way to demonstrate that you are different and trustworthy.</p><h3><img class=\\"imagecache-Inline_Full_Width\\" src=\\"/sites/default/files/resize/remote/32471f092ecf56e0249bd2f49234784b-340x148.jpeg\\" title=\\"\\" alt=\\"\\" width=\\"340\\" height=\\"148\\"></h3><h3>The Value of Trust Symbols</h3><p>Trust Symbols–signs or badges that you can display on your website and marketing materials–are proven to increase lead conversions. This is well known and documented in eCommerce, and through A/B testing we\'re conducting for home performance contractors, we\'re also seeing a meaningful lift in conversion rates from the prominent use of trust symbols. What is important about this is that consumers don\'t have to know exactly what the symbol or certification actually means. (Do you know the difference between Verisign or Truste?) The key point is that the presence of a symbol like BPI GoldStar Contractor (which is a very nice design upgrade by the way) is likely to have a positive impact on your lead conversion rates.</p><h3>Key Takeaways</h3><ol><li>The BPI GoldStar Contractor Program offers a new way to emphasize quality in your business.</li><li>BPI is investing in building consumer awareness of their certifications.</li><li>As a trust symbol alone, the GoldStar designation will probably produce enough conversion \\"lift\\" to justify the cost.</li></ol><h3>Next Steps for Home Performance Contractors</h3><ol><li>If you are already an Accredited Contractor, jump on the opportunity to update your website and collateral with the new logos.</li><li>Don\'t hesitate to trumpet your GoldStar Contractor designation, <a href=\\"http://www.halcoenergy.com/about-us/latest-news/10833-halco-joins-bpi-goldstar-contractor-program.html\\">as some smart contractors are already doing</a>.</li><li>If you are not a past Accredited Contractor, you should seriously consider joining the new program. Its value to your business in training, credibility and commitment to quality are well worth it.</li></ol>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'field_blog_image\' => array(),
      \'field_content_link\' => array(),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-14 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_blog_article\' => array(),
      \'field_ref_blog_case_study\' => array(),
      \'field_ref_blog_page\' => array(),
      \'field_ref_blog_serv_cat\' => array(),
      \'field_ref_blog_serv_group\' => array(),
      \'field_ref_blog_service\' => array(),
      \'path\' => array(
        \'pid\' => \'238\',
        \'source\' => \'node/140\',
        \'alias\' => \'blog/demo-bpi-goldstar-contractor-program\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'140\',
            \'revision_id\' => \'159\',
            \'name\' => \'node:blog_post:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_blog_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                )),
                \'new-f9de1328-2b92-49ef-b109-11a59b997651\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f9de1328-2b92-49ef-b109-11a59b997651\',
                )),
                \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                )),
                \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'promotions-panel_pane_2\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'nodes\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'show_this_block\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                  1 => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                  2 => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'160\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Top 7 Home Performance Trends for 2014\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5e882e46-412e-4da3-abc5-1acffa176f12\',
      \'nid\' => \'141\',
      \'type\' => \'blog_post\',
      \'language\' => \'und\',
      \'created\' => \'1442255067\',
      \'changed\' => \'1442255701\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cb166184-8ec7-4939-8841-017c62f10ecc\',
      \'revision_timestamp\' => \'1442255701\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "[caption align=\\"right\\"][[{\\"fid\\":\\"73\\",\\"view_mode\\":\\"default\\",\\"fields\\":{\\"format\\":\\"default\\",\\"field_file_image_alt_text[und][0][value]\\":\\"Energy Circle Back to the Future\\",\\"field_file_image_title_text[und][0][value]\\":\\"Energy Circle Back to the Future\\"},\\"type\\":\\"media\\",\\"link_text\\":null,\\"attributes\\":{\\"alt\\":\\"Energy Circle Back to the Future\\",\\"title\\":\\"Energy Circle Back to the Future\\",\\"class\\":\\"panopoly-image-original image-style-panopoly-image-original media-element file-default\\"}}]][/caption]<p>As we dig into 2014, it\'s worth stepping back and looking at the big picture for a moment. We recently took a look at the&nbsp;<a href=\\"http://www.energycircle.com/blog/2013/12/19/7-home-performance-marketing-trends-watch-2014\\">top home performance marketing trends for 2014</a>, and today we\'ll expand that to review what we believe are the most important business trends for the home performance industry in the coming year.&nbsp;</p><p>Without further ado, our top 7 business trends for home performance in 2014:</p><h3>Indoor Air Quality Finally Emerges&nbsp;</h3><p><a href=\\"http://www.energycircle.com/blog/2013/04/04/improving-indoor-air-quality-greater-benefit-energy-efficiency\\">Indoor air quality</a>&nbsp;has always been one of the peripheral benefits of home performance upgrades, but there are signs that it may be creeping up to the forefront as one of the primary drivers of upgrades. The challenge for the home performance industry, of course, is capturing that demand. To the avergage home owner, the relationship of their home\'s indoor air quality and the building\'s performance are not obvious. There\'s plenty of evidence that IAQ may be&nbsp;<em>more</em>&nbsp;important to homeowners than energy efficiency, and there\'s definitely a growing awareness about the health impacts of HP. Contractors will need to work hard in their marketing communications to make this link, but those who do will reap the benefits.</p><h3>HVAC to Home Performance (and HP to HVAC) Gains Velocity</h3><p>One of the most talked about trends over the past few years has been the influx of HVAC companies into the home performance arena. To date, this has been the limited to large, successful, well-established heating and cooling companies that have leveraged their network of existing customers and service contracts to cross-sell whole house services. Our view is that this trend will accelerate in 2014 as the comprehensive, whole house approach is increasingly understood as a better business model. But it won\'t just be HVAC --&gt; HP. Other business models--insulation contractors, remodelers and more--will move to integrate the full set of home energy and comfort services. Smart businesses will figure out ways to learn from this trend, either by partnering with others to round out their service offerings, or moving to integrate. It makes sense that HVAC and Home Performance go together -- both, after all, focus on home energy and comfort. The successful HP companies of 2014 will figure out how to carve out a niche in this integrated space.</p><h3>Net Zero Becomes the Leading Low Energy Home Brand</h3><p>In residential building performance, a disparate collection of \\"brands\\" represent the labels we have applied to low energy homes. Passive House, Deep Energy Retrofit, EnergyStar, etc. While we\'re not suggesting that any of these will go away, our view is that \\"Net Zero\\" is the brand that will move to the forefront in 2014. And the good news is that is applies equally well to retrofits as new construction. As we all know, a big roof and a Hummer\'s worth of solar PV can \\"net zero\\" even the &nbsp;most poorly built house; and the fact that lease financed solar panels appear to be incrementally cheap means that homeowners are not strongly incentivized to keep renewable needs as low as possible. The energy efficiency community needs to work hard to drive home the importance of \\"efficiency first,\\" both in order to stay relevant as Net Zero becomes increasingly popular, and to steer that concept in a healthy direction.</p><h3>Finding New Ways to Provide Recurring Annual Services</h3><p>HVAC companies have mastered this, and home performance related businesses that don\'t have service contracts have something to learn here. We think that in 2014 we\'ll start to see more and more HP companies developing ways to provide recurring annual services like annual energy check-ups and/or check-ins, periodic monitoring of indoor air quality, and other regular services. The idea of \\"staged retrofits\\" will continue to grow (though the industry should heed the cautionary advice on this topic by&nbsp;<a href=\\"http://www.thepowersmith.com/blog/home-performance/dans-blog-danger-staged-retrofits\\">smart contractors like Dan Kartzman of Powersmith</a>), and we\'ll see other innovative ways of maintaining an active customer relationship once the first steps of a home energy upgrade have been completed. (After all, every house is a work in progress, even after initial upgrades have been made.)</p><h3>Getting on the Connected Home Bandwagon</h3><p>For years, the idea of home automation has struggled to become more mainstream. Now, with the emergence of low cost sensors and smartphone integrated controls, the appeal of these technologies will increase. We think the emerging term for all of this is \\"Connected Home.\\" From the homeowner perspective, it\'s a big, confusing field with players of all kinds--wireless providers, security companies, lighting manufacturers and device companies (to name few)--all vying for this business. Since so many of the benefits of these technologies are energy related, we believe the home performance community has a unique opportunity to be the trusted advisor in this category. Companies have a choice of selling and installing, which we think will be a viable business on its own, or just advising, which is yet another point of contact to engage customers in the whole house approach.&nbsp;</p><h3>LED Lighting Becomes an Entry Point</h3><p>This year, the price and quailty of LED lighting reaches a point that everyone wants it. What\'s most significant about this for home performance companies is that it emerges as a new point of entry into the customer relationship. Whole house lighting solutions, combined with smart controls, are an easily integrated new line in a home performance service offering. And just imagine the easy air sealing gains you can accomplish when installing an entire floor\'s worth of LED can lights.&nbsp;</p><h3>The Solar Train Rolls On</h3><p>For better or worse, many homeowners\' first entry point into the world of less or different energy for their homes will be via solar, as the&nbsp;<a href=\\"http://www.seia.org/news/us-solar-industry-records-second-largest-quarter-ever\\" target=\\"_blank\\">solar industry continues to grow</a>. Solar leasing, and the sophisticated marketing capabilties of the big solar companies, assure this. So that energy efficiency stays hot on the trails of solar, contractors should either get on the bandwagon or get a partner, and most definitely amp up their communications about the importance of tackling energy efficiency first.</p><p>Thoughts, comments, questions or contrary points of view? We\'d love to hear about them in the comments; feel free to chime in.</p>",
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<div class=\\"caption caption-right panopoly-image-original\\"><div class=\\"caption-width-container\\" style=\\"width: auto;\\"><div class=\\"caption-inner\\"><img alt=\\"Energy Circle Back to the Future\\" title=\\"Energy Circle Back to the Future\\" class=\\"image-style-panopoly-image-original media-element file-default panopoly-image-original image-style-panopoly-image-original\\" src=\\"http://live-ec-distro.pantheon.io/sites/default/files/styles/panopoly_image_original/public/back-to-the-future.png?itok=Q7GynKnK\\"></div></div></div><p>As we dig into 2014, it\'s worth stepping back and looking at the big picture for a moment. We recently took a look at the <a href=\\"http://www.energycircle.com/blog/2013/12/19/7-home-performance-marketing-trends-watch-2014\\">top home performance marketing trends for 2014</a>, and today we\'ll expand that to review what we believe are the most important business trends for the home performance industry in the coming year. </p><p>Without further ado, our top 7 business trends for home performance in 2014:</p><h3>Indoor Air Quality Finally Emerges </h3><p><a href=\\"http://www.energycircle.com/blog/2013/04/04/improving-indoor-air-quality-greater-benefit-energy-efficiency\\">Indoor air quality</a> has always been one of the peripheral benefits of home performance upgrades, but there are signs that it may be creeping up to the forefront as one of the primary drivers of upgrades. The challenge for the home performance industry, of course, is capturing that demand. To the avergage home owner, the relationship of their home\'s indoor air quality and the building\'s performance are not obvious. There\'s plenty of evidence that IAQ may be <em>more</em> important to homeowners than energy efficiency, and there\'s definitely a growing awareness about the health impacts of HP. Contractors will need to work hard in their marketing communications to make this link, but those who do will reap the benefits.</p><h3>HVAC to Home Performance (and HP to HVAC) Gains Velocity</h3><p>One of the most talked about trends over the past few years has been the influx of HVAC companies into the home performance arena. To date, this has been the limited to large, successful, well-established heating and cooling companies that have leveraged their network of existing customers and service contracts to cross-sell whole house services. Our view is that this trend will accelerate in 2014 as the comprehensive, whole house approach is increasingly understood as a better business model. But it won\'t just be HVAC --&gt; HP. Other business models--insulation contractors, remodelers and more--will move to integrate the full set of home energy and comfort services. Smart businesses will figure out ways to learn from this trend, either by partnering with others to round out their service offerings, or moving to integrate. It makes sense that HVAC and Home Performance go together -- both, after all, focus on home energy and comfort. The successful HP companies of 2014 will figure out how to carve out a niche in this integrated space.</p><h3>Net Zero Becomes the Leading Low Energy Home Brand</h3><p>In residential building performance, a disparate collection of \\"brands\\" represent the labels we have applied to low energy homes. Passive House, Deep Energy Retrofit, EnergyStar, etc. While we\'re not suggesting that any of these will go away, our view is that \\"Net Zero\\" is the brand that will move to the forefront in 2014. And the good news is that is applies equally well to retrofits as new construction. As we all know, a big roof and a Hummer\'s worth of solar PV can \\"net zero\\" even the  most poorly built house; and the fact that lease financed solar panels appear to be incrementally cheap means that homeowners are not strongly incentivized to keep renewable needs as low as possible. The energy efficiency community needs to work hard to drive home the importance of \\"efficiency first,\\" both in order to stay relevant as Net Zero becomes increasingly popular, and to steer that concept in a healthy direction.</p><h3>Finding New Ways to Provide Recurring Annual Services</h3><p>HVAC companies have mastered this, and home performance related businesses that don\'t have service contracts have something to learn here. We think that in 2014 we\'ll start to see more and more HP companies developing ways to provide recurring annual services like annual energy check-ups and/or check-ins, periodic monitoring of indoor air quality, and other regular services. The idea of \\"staged retrofits\\" will continue to grow (though the industry should heed the cautionary advice on this topic by <a href=\\"http://www.thepowersmith.com/blog/home-performance/dans-blog-danger-staged-retrofits\\">smart contractors like Dan Kartzman of Powersmith</a>), and we\'ll see other innovative ways of maintaining an active customer relationship once the first steps of a home energy upgrade have been completed. (After all, every house is a work in progress, even after initial upgrades have been made.)</p><h3>Getting on the Connected Home Bandwagon</h3><p>For years, the idea of home automation has struggled to become more mainstream. Now, with the emergence of low cost sensors and smartphone integrated controls, the appeal of these technologies will increase. We think the emerging term for all of this is \\"Connected Home.\\" From the homeowner perspective, it\'s a big, confusing field with players of all kinds--wireless providers, security companies, lighting manufacturers and device companies (to name few)--all vying for this business. Since so many of the benefits of these technologies are energy related, we believe the home performance community has a unique opportunity to be the trusted advisor in this category. Companies have a choice of selling and installing, which we think will be a viable business on its own, or just advising, which is yet another point of contact to engage customers in the whole house approach. </p><h3>LED Lighting Becomes an Entry Point</h3><p>This year, the price and quailty of LED lighting reaches a point that everyone wants it. What\'s most significant about this for home performance companies is that it emerges as a new point of entry into the customer relationship. Whole house lighting solutions, combined with smart controls, are an easily integrated new line in a home performance service offering. And just imagine the easy air sealing gains you can accomplish when installing an entire floor\'s worth of LED can lights. </p><h3>The Solar Train Rolls On</h3><p>For better or worse, many homeowners\' first entry point into the world of less or different energy for their homes will be via solar, as the <a href=\\"http://www.seia.org/news/us-solar-industry-records-second-largest-quarter-ever\\" target=\\"_blank\\">solar industry continues to grow</a>. Solar leasing, and the sophisticated marketing capabilties of the big solar companies, assure this. So that energy efficiency stays hot on the trails of solar, contractors should either get on the bandwagon or get a partner, and most definitely amp up their communications about the importance of tackling energy efficiency first.</p><p>Thoughts, comments, questions or contrary points of view? We\'d love to hear about them in the comments; feel free to chime in.</p>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'field_blog_image\' => array(),
      \'field_content_link\' => array(),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-14 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_blog_article\' => array(),
      \'field_ref_blog_case_study\' => array(),
      \'field_ref_blog_page\' => array(),
      \'field_ref_blog_serv_cat\' => array(),
      \'field_ref_blog_serv_group\' => array(),
      \'field_ref_blog_service\' => array(),
      \'path\' => array(
        \'pid\' => \'239\',
        \'source\' => \'node/141\',
        \'alias\' => \'blog/top-7-home-performance-trends-2014\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'141\',
            \'revision_id\' => \'160\',
            \'name\' => \'node:blog_post:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_blog_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                )),
                \'new-f9de1328-2b92-49ef-b109-11a59b997651\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f9de1328-2b92-49ef-b109-11a59b997651\',
                )),
                \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                )),
                \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'promotions-panel_pane_2\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'nodes\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'show_this_block\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-e59aa6d9-c0b5-42fa-8fda-f448f54061c9\',
                  1 => \'new-f9de1328-2b92-49ef-b109-11a59b997651\',
                  2 => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-dd10018c-d753-4216-8fb0-b9aa4e519c4d\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'4d6c27ae-a139-405a-83d7-1c9643efe410\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-51b0ebb9-27c4-4fc8-aee6-5ec05832ad97\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
