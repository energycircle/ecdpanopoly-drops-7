<?php
/**
 * @file
 * ec_rms.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ec_rms_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'18\',
      \'uid\' => \'1\',
      \'title\' => \'Yelp\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6d42e243-1aab-472f-927c-21c63113ff6e\',
      \'nid\' => \'18\',
      \'type\' => \'review_site\',
      \'language\' => \'und\',
      \'created\' => \'1419964247\',
      \'changed\' => \'1420050944\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'da50984c-47ab-4a1c-a078-bfa6e734f5d0\',
      \'revision_timestamp\' => \'1420050944\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_review_site_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.yelp.com/biz/your-url-here\',
            \'title\' => \'Post a Review on Yelp\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_review_site_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'yelp_logo_100x50.png\',
            \'uri\' => \'public://review-logo/yelp_logo_100x50.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'5236\',
            \'status\' => \'1\',
            \'timestamp\' => \'1420050944\',
            \'type\' => \'image\',
            \'uuid\' => \'b21a4591-b3cf-492d-9080-549b298d75d1\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'metatags\' => array(),
            \'metadata\' => array(
              \'height\' => 52,
              \'width\' => 102,
            ),
            \'alt\' => \'Yelp\',
            \'title\' => \'\',
            \'width\' => \'102\',
            \'height\' => \'52\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'path\' => array(
        \'pid\' => \'14\',
        \'source\' => \'node/18\',
        \'alias\' => \'yelp\',
        \'language\' => \'und\',
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'-20\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'1\',
      \'title\' => \'Facebook\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cc1d33e7-68a4-4bd6-bdf3-97b5214abe60\',
      \'nid\' => \'17\',
      \'type\' => \'review_site\',
      \'language\' => \'und\',
      \'created\' => \'1419964203\',
      \'changed\' => \'1420051175\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f1be70ac-9f17-4a3a-b567-73cd5cc6fb24\',
      \'revision_timestamp\' => \'1420051175\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_review_site_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://www.facebook.com/enter-your-url\',
            \'title\' => \'Post a Review on Facebook\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_review_site_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'fb-f-logo_blue_100.png\',
            \'uri\' => \'public://review-logo/fb-f-logo_blue_100.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1809\',
            \'status\' => \'1\',
            \'timestamp\' => \'1420051175\',
            \'type\' => \'image\',
            \'uuid\' => \'bf6811f2-e3e0-432b-86bd-4b773b885111\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'metatags\' => array(),
            \'metadata\' => array(
              \'height\' => 100,
              \'width\' => 100,
            ),
            \'alt\' => \'Facebook\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'100\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAYAAABw4pVUAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA2hpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDowNTgwMTE3NDA3MjA2ODExODA4M0NDMTM4MEMyQTVFQiIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpCOUMxMDdGMkE2MTYxMUUyOEJFQUJDRTMzOERDQjM5MCIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpCOUMxMDdGMUE2MTYxMUUyOEJFQUJDRTMzOERDQjM5MCIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M2IChNYWNpbnRvc2gpIj4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6QUM3QUJGQTkzODIwNjgxMThDMTQ5OEFGOTgxQUJBQ0UiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6MDU4MDExNzQwNzIwNjgxMTgwODNDQzEzODBDMkE1RUIiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz4rzsvUAAADP0lEQVR42uycvU9TURiHX9ryESiiFoEIAQQDVkUGRaMghkAgGhMSNcpAiDoxkKiJRhmdhD/BQQcndVcUN4MmLiRGEye0lIIJiECQUuiHnlOLG4OX1ntanyf5Le29afs+vfc995ybm9V86YEkqFQZVDmjUq7iFEglEZUZlecq91T8+kVH4s0ulY8q/QkxyEg9rkStdc0/qHRuCKlWeaJSSI1sY5vKU5UqLeS2ShE1sR3t4I4j0TPADE47Eg0czKDCQQM3CqeDGpgFQhACCEEIIAQhkApclOA32S6HNHrLpKGuVOr2eGR3iVuKd+ZLbrZL8nJdEg5HJbQeiW+7GorIcnBdlld01mT++6p8W1iR2fmgzC8G5d37AEKssrfaIxe69supo5VSWJC7ubBsZzwavV2Jp2DTbVt6HiLkb6koLZKBviZpOVzJKctOsrJEznUekIHeI3/+8Qix68c6HTLY3ypdJ2to6iY07bvX2qS1qYphrwlcv3zceBn/jZCO5lrp7qjnwtAE9BD1xpVjXKmbQm/3ISly5yHEBNz5OXK+y5tW3zmjhZxtq49PeyDEENpP1KTdd85YIcU7CmRfjQchptDoLY1Pk6TdbEKmCvHW7trS/tFoTF6OfZa341PyaWJOlpZDElqLIMQqVeXW7479OvdDbg2/El9ggSMkWZQVuy3tpxeibg6NyuT0Ij0kmXi251vab+T1hG0yMlpITra1n/Zm3M8oKxVYvSD0BRYRYhJ6NIUQgwiGwggxiVjsJ0IAIQgBhCAEEIIQQAhCwD6MXw8Ze3w1bT4vEo1Je9+j+GojR4gB+GeWtiQDIUlmUgmhh5gkZBohRuFLwtIvQpLIlwBCjEGvo0zNIMQY9L1c6+EoQjKpfyAkmUICCOEIgdRegyAkqaesBYSYwuz8StLu5zJ+ttfqk3Wsztpu5Uk+HCEZCEIQAghBCCAEIYAQhABCEAIIAYQgBBCCEEAIQgAhCAGEAEIQAghBCCAEIYAQhABCACEIAQtCopTBGKJayAx1MIaAFvKMOhjDiBYyrLJELWxHOxjSQnwqPSrL1MQ2dO0vqkxujLJeqDSo3Ffx0+j/TQNP1FrX/KDKqH7xlwADADHHxixr3zsSAAAAAElFTkSuQmCC\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'path\' => array(
        \'pid\' => \'13\',
        \'source\' => \'node/17\',
        \'alias\' => \'facebook\',
        \'language\' => \'und\',
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'-20\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
