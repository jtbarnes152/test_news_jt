<?php
/**
 * @file
 * news_article.features.inc
 */

/**
 * Implements hook_views_api().
 */
function news_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function news_article_node_info() {
  $items = array(
    'newsarticle' => array(
      'name' => t('NewsArticle'),
      'base' => 'node_content',
      'description' => t('This will be my News Article content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
