<?php
/**
 * @file
 * ec_article.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_article_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-article-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_author.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_image.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_source.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_source.settings|absolute_url"] = 1;
  $overrides["field_instance.node-article-field_article_source.settings|title_label_use_field_label"] = FALSE;
  $overrides["field_instance.node-article-field_article_type.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_display_date.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_ref_article_blog.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_ref_article_case_study.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_ref_article_product.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_ref_article_promo.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_ref_article_testimonial.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: roles_permissions

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node article breadcrumbs.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node article content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node article content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node article context.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node article defaults.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node article layout.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node article overview.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node article settings.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer taxonomy_term article_types defaults.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
