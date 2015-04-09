<?php
/**
 * @file
 * casa_further_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function casa_further_info_ctools_plugin_api($module = NULL, $api = NULL) {
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
function casa_further_info_node_info() {
  $items = array(
    'further_info' => array(
      'name' => t('Further Info'),
      'base' => 'node_content',
      'description' => t('Property extra info to show to your future customers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
