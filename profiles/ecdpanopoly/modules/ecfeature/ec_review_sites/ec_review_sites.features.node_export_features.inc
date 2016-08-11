<?php
/**
 * @file
 * ec_review_sites.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ec_review_sites_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:2:{s:17:"mimemail_textonly";i:0;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_review_site_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'116\',
            \'uid\' => \'1\',
            \'filename\' => \'yelp_logo_100x50.png\',
            \'uri\' => \'public://review-logo/yelp_logo_100x50.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'5236\',
            \'status\' => \'1\',
            \'timestamp\' => \'1470854472\',
            \'type\' => \'image\',
            \'uuid\' => \'b21a4591-b3cf-492d-9080-549b298d75d1\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'rdf_mapping\' => array(),
            \'metadata\' => array(
              \'height\' => 52,
              \'width\' => 102,
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'height\' => \'52\',
            \'width\' => \'102\',
          ),
        ),
      ),
      \'field_review_site_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.yelp.com/biz/your-url-here\',
            \'title\' => \'Post a Review on Yelp\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'machine_name\' => FALSE,
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'116\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_review_site_logo\',
          \'langcode\' => \'und\',
          \'uuid\' => \'b21a4591-b3cf-492d-9080-549b298d75d1\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Yelp\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'review_site\',
      \'uid\' => \'1\',
      \'uuid\' => \'7e249d52-6aff-4359-892b-b309190c50e1\',
      \'vid\' => NULL,
      \'vuuid\' => \'6d42e243-1aab-472f-927c-21c63113ff6e\',
      \'weight_weight\' => \'-20\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:2:{s:17:"mimemail_textonly";i:0;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_review_site_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'117\',
            \'uid\' => \'1\',
            \'filename\' => \'fb-f-logo_blue_100.png\',
            \'uri\' => \'public://review-logo/fb-f-logo_blue_100.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1809\',
            \'status\' => \'1\',
            \'timestamp\' => \'1470854472\',
            \'type\' => \'image\',
            \'uuid\' => \'bf6811f2-e3e0-432b-86bd-4b773b885111\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'rdf_mapping\' => array(),
            \'metadata\' => array(
              \'height\' => 100,
              \'width\' => 100,
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'height\' => \'100\',
            \'width\' => \'100\',
          ),
        ),
      ),
      \'field_review_site_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://www.facebook.com/enter-your-url\',
            \'title\' => \'Post a Review on Facebook\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'machine_name\' => FALSE,
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'117\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_review_site_logo\',
          \'langcode\' => \'und\',
          \'uuid\' => \'bf6811f2-e3e0-432b-86bd-4b773b885111\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Facebook\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'review_site\',
      \'uid\' => \'1\',
      \'uuid\' => \'ef3a77ed-34f2-44df-93fe-202356e266ae\',
      \'vid\' => NULL,
      \'vuuid\' => \'cc1d33e7-68a4-4bd6-bdf3-97b5214abe60\',
      \'weight_weight\' => \'-20\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:2:{s:17:"mimemail_textonly";i:0;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_review_site_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'117\',
            \'uid\' => \'1\',
            \'filename\' => \'fb-f-logo_blue_100.png\',
            \'uri\' => \'public://review-logo/fb-f-logo_blue_100.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1809\',
            \'status\' => \'1\',
            \'timestamp\' => \'1470854472\',
            \'type\' => \'image\',
            \'uuid\' => \'bf6811f2-e3e0-432b-86bd-4b773b885111\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'rdf_mapping\' => array(),
            \'metadata\' => array(
              \'height\' => 100,
              \'width\' => 100,
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'height\' => \'100\',
            \'width\' => \'100\',
          ),
        ),
      ),
      \'field_review_site_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://www.facebook.com/enter-your-url\',
            \'title\' => \'Post a Review on Facebook\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'machine_name\' => FALSE,
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'117\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_review_site_logo\',
          \'langcode\' => \'und\',
          \'uuid\' => \'bf6811f2-e3e0-432b-86bd-4b773b885111\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'pathauto_perform_alias\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Facebook\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'review_site\',
      \'uid\' => \'1\',
      \'uuid\' => \'f1be70ac-9f17-4a3a-b567-73cd5cc6fb24\',
      \'vid\' => NULL,
      \'vuuid\' => \'241c3ab0-353e-46a1-bcf1-04058a7d0723\',
      \'weight_weight\' => \'-20\',
    ),
)',
);
  return $node_export;
}
