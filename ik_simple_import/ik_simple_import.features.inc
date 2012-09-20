<?php
/**
 * @file
 * ik_simple_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ik_simple_import_ctools_plugin_api() {
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
function ik_simple_import_node_info() {
  $items = array(
    'feed_item_key' => array(
      'name' => t('Feed Item Key'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'item_key' => array(
      'name' => t('Item Key Import'),
      'base' => 'node_content',
      'description' => t('Item Keys'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
