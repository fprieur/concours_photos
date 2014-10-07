<?php
/**
 * @file
 * concours_photos.features.inc
 */

/**
 * Implements hook_views_api().
 */
function concours_photos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function concours_photos_node_info() {
  $items = array(
    'concours_photographe' => array(
      'name' => t('concours_photographe'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'concours_photos' => array(
      'name' => t('concours_photos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
