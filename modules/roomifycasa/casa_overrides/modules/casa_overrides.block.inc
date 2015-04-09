<?php

/**
 * @file
 *  RoomifyCasa workarounds for disabled Block module.
 */

/**
 * The Roomify distros use Panels Everywhere for layout and the Bean module
 * for entity blocks which overloads core Block terminology in the Admin UI.
 * For this reason the core Block module is left disabled out of the box.
 *
 * The following lines prevent warnings in Panels admin UI and other places
 * caused by any modules, such as Commerce Cart Expiration or Menu Block, that
 * requires these defined variables that are normally provided by the
 * core Block module.
 */

/**
 * Denotes that a block is not enabled in any region and should not be shown.
 */
if (!defined('BLOCK_REGION_NONE')) {
  define('BLOCK_REGION_NONE', -1);
}

/**
 * Users cannot control whether or not they see this block.
 */
if (!defined('BLOCK_CUSTOM_FIXED')) {
  define('BLOCK_CUSTOM_FIXED', 0);
}
/**
 *  Shows this block by default, but lets individual users hide it.
 */
if (!defined('BLOCK_CUSTOM_ENABLED')) {
  define('BLOCK_CUSTOM_ENABLED', 1);
}
/**
 * Hides this block by default but lets individual users show it.
 */
if (!defined('BLOCK_CUSTOM_DISABLED')) {
  define('BLOCK_CUSTOM_DISABLED', 2);
}

/**
 * Shows this block on every page except the listed pages.
 */
if (!defined('BLOCK_VISIBILITY_NOTLISTED')) {
  define('BLOCK_VISIBILITY_NOTLISTED', 0);
}

/**
 * Shows this block on only the listed pages.
 */
if (!defined('BLOCK_VISIBILITY_LISTED')) {
  define('BLOCK_VISIBILITY_LISTED', 1);
}

/**
 * Shows this block if the associated PHP code returns TRUE.
 */
if (!defined('BLOCK_VISIBILITY_PHP')) {
  define('BLOCK_VISIBILITY_PHP', 2);
}
