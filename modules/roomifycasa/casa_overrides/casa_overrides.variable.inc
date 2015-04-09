<?php
/**
 * @file
 * Variable API module. Definition for some xample variables
 */

/**
 * Implements hook_variable_info().
 */
function casa_overrides_variable_info($options) {
  $variables['rooms_booking_manager_search_results_deposit'] = array(
    'type' => 'string',
    'title' => t('Search results deposit', array(), $options),
    'description' => t('Message indicating deposit amount on search results page', array(), $options),
    'default' => '(Deposit of @currency_symbol @amount required for booking)',
    'group' => 'rooms_booking_manager',
    'required' => TRUE,
  );
  
  return $variables;
}
