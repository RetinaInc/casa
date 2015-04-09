<?php
/**
 * @file
 * casa_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function casa_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function casa_features_node_info() {
  $items = array(
    'features' => array(
      'name' => t('Features'),
      'base' => 'node_content',
      'description' => t('Property main features to highlight on front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
