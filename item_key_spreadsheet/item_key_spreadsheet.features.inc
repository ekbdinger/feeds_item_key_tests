<?php
/**
 * @file
 * item_key_spreadsheet.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function item_key_spreadsheet_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function item_key_spreadsheet_node_info() {
  $items = array(
    'item_key_spreadsheet' => array(
      'name' => t('Item Key Spreadsheet'),
      'base' => 'node_content',
      'description' => t('Going to create a content type that mirrors the Item key spreadsheet.  Let\'s go from Item Key Number to Support Remarks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
