<?php
/**
 * @file
 * casa_widget.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function casa_widget_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-widget-body'
  $field_instances['node-widget-body'] = array(
    'bundle' => 'widget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'To embed a trip advisor widget, follow these steps:<br />
1. Create a widget at <a href="http://www.tripadvisor.com/Widgets">www.tripadvisor.com/Widgets</a><br />
2. Copy the widget code<br />
3. In the Text Format dropdown, select the Plain Text format<br />
4. Paste the widget code <br />
5. In the Text Format dropdown, select the Full HTML format<br />
6. Save the node',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('To embed a trip advisor widget, follow these steps:<br />
1. Create a widget at <a href="http://www.tripadvisor.com/Widgets">www.tripadvisor.com/Widgets</a><br />
2. Copy the widget code<br />
3. In the Text Format dropdown, select the Plain Text format<br />
4. Paste the widget code <br />
5. In the Text Format dropdown, select the Full HTML format<br />
6. Save the node');

  return $field_instances;
}
