<?php

/**
 * @file
 *   RoomifyCasa overrides for Rooms module.
 */

/**
 * Implements hook_form_FORM_ID_alter() for rooms_booking_availability_search_form_page.
 */
function casa_overrides_form_rooms_booking_availability_search_form_page_alter(&$form, &$form_state) {

  // Disable unit quantity selector on search form, in RoomifyCasa there is
  // only one property to search for.
  if (isset($form['conditions']['rooms'])) {
    $form['conditions']['rooms']['#access'] = FALSE;
  }

  // Alter submit form text.
  if (isset($form['actions']['submit'])) {
    $form['actions']['submit']['#value'] = t('Check Availability');
  }
}

/**
 * Implements hook_form_FORM_ID_alter() for book_units_per_type_form.
 */
function casa_overrides_form_book_units_per_type_form_alter(&$form, &$form_state) {

  // Special case scenario improves UX on Booking form when there is one
  // single option on the page: auto-select and auto-populate as much
  // information as possible to streamline the checkout process.

  // First, iterate through form elements counting unit_types and price options.
  $unit_type_count = 0;
  $unit_count = 0;
  $availability_count = 0;
  $unit_type_names = array();
  foreach(element_children($form) as $i) {
    if (isset($form[$i]['#attributes']['class'][0]) && $form[$i]['#attributes']['class'][0] === 'rooms-search-result__unit-type') {

      // Store reference to unit type.
      $unit_type = &$form[$i];
      $unit_type_name = $i;
      $unit_type_names[] = $i;
      $unit_type_count++;

      // Units are indexed / grouped by price on booking form.
      foreach(element_children($unit_type) as $price) {
        // Because the booking by price options indexes exist alongside other
        // non-numeric element children we must test each element and single
        // out the numeric ones, which represent a price point.
        if (is_numeric($price)) {
          // Store a reference to price option.
          $unit = &$form[$i][$price];
          $unit_price = $price;
          $unit_count++;
          // Store a count of the number of bookable units available.
          // There is always an option for 0, so we subtract one.
          if (isset($unit['quantity']['#options'])) {
            $availability_count = count($unit['quantity']['#options']) - 1;
          }
        }
      }
    }
  }

  // Next, based on the counts calculated in the previous step, test for our
  // special case scenario where there is one booking result with one unit
  // and one pricing option.
  if ($unit_type_count === 1) {
    // Hide unit type name when there is only one unit type in search results.
    // This is a special case for RoomifyCasa because there is really only
    // one unit type.
    $unit_type['title']['#access'] = FALSE;

    if ($unit_count === 1) {
      // Wrap the result option title price description in a Heading 3, to give
      // it more weight on the page, because it's the most important text.
      $unit['price']['#prefix'] .= $unit['price']['#prefix'] . '<h3>';
      $unit['price']['#suffix'] = '</h3>';

      // When there is only one unit available we should auto-select it, and
      // hide the quantity selector, and render the Unit Options sub-form
      // elements automatically.
      if ($availability_count === 1) {
        // Auto-select default quantity.
        end($unit['quantity']['#options']);
        $unit['quantity']['#default_value'] = key($unit['quantity']['#options']);

        // Hide the quantity field, since there is only one option, note that we
        // cannot set #access false, because we need the quantity selector on
        // the page to trigger the ajax callback.
        $unit['quantity']['#prefix'] = '<td class="rooms-search-result__select-units" style="display:none;">';


        // Trigger change event on page load. NOTE! This should only be done
        // when there is one result only! Triggering the change event will
        // call the ajax callback to load in the Unit options and price form.
        $id = drupal_html_class("edit-$unit_type_name-$unit_price-quantity");
        $unit['quantity']['#attached']['js'][] = array(
          'data' => 'jQuery(document).ready(function(){jQuery("#' . $id . '").change();});',
          'type' => 'inline'
        );

        // CSS is needed to remove the Unit Type name from the Unit Options
        // fieldset.
        $unit['quantity']['#attached']['css'][] = array(
          'data' => drupal_get_path('module', 'casa_overrides') . '/css/casa.booking_search.css',
          'type' => 'file',
        );

        // Hide the submit button here since there is another at the bottom
        // of the form.
        $unit['submit']['#access'] = FALSE;
      }
    }
  }

  $deposit = rules_config_load('rooms_booking_manager_deposit');

  if ($deposit && $deposit->active) {
    $currency_setting = commerce_currency_load(commerce_default_currency());
    $currency_symbol = $currency_setting['symbol'];
    $fixed_amount = $multiply_amount = NULL;
    foreach ($deposit as $action) {
      if ($action instanceof RulesAction) {
        if ($action->getElementName() == 'commerce_line_item_unit_price_amount') {
          $fixed_amount = $action->settings['amount'];
        }
        elseif ($action->getElementName() == 'commerce_line_item_unit_price_multiply') {
          $multiply_amount = $action->settings['amount'];
        }
      }
    }
    foreach ($unit_type_names as $unit_type_name) {
      $unit_type = &$form[$unit_type_name];
    }
    foreach(element_children($unit_type) as $price) {
      if (is_numeric($price)) {
        $element = &$unit_type[$price]['price'];
        $amount = isset($fixed_amount) ? ($fixed_amount / 100) : ($price * $multiply_amount);
        $element['#markup'] .= ' ' . format_string(variable_get_value('rooms_booking_manager_search_results_deposit'), array('@amount' => $amount, '@currency_symbol' => $currency_symbol));
      }
    }
  }
}
