<?php
/**
 * @file
 * ec_casestudy.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_casestudy_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.gallery_slideshow_carousel.description"] = 'Case Study page Gallery slideshow with thumbnail navigation';
  $overrides["views_view.gallery_slideshow_carousel.display|default|display_options|arguments"] = array(
    'nid' => array(
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'reverse_field_ref_case_study_gallery_node',
      'default_action' => 'default',
      'default_argument_type' => 'node',
      'summary' => array(
        'number_of_records' => 0,
        'format' => 'default_summary',
      ),
      'summary_options' => array(
        'items_per_page' => 25,
      ),
    ),
  );
  $overrides["views_view.gallery_slideshow_carousel.display|default|display_options|relationships"] = array(
    'reverse_field_ref_case_study_gallery_node' => array(
      'id' => 'reverse_field_ref_case_study_gallery_node',
      'table' => 'node',
      'field' => 'reverse_field_ref_case_study_gallery_node',
    ),
  );
  $overrides["views_view.gallery_slideshow_carousel.display|panel_pane_1|display_options|style_options|captionfield"]["DELETED"] = TRUE;
  $overrides["views_view.gallery_slideshow_carousel.display|panel_pane_2|display_options|fields|field_gallery_image|element_label_colon"] = FALSE;
  $overrides["views_view.gallery_slideshow_carousel.display|panel_pane_2|display_options|fields|field_gallery_image|label"] = '';
  $overrides["views_view.gallery_slideshow_carousel.human_name"] = 'Case Study Gallery Slideshow';

 return $overrides;
}
