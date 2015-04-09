<?php
/**
 * @file
 * casa_footer_bean_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function casa_footer_bean_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
