<?php
/**
 * @file
 * item_key_spreadsheet.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function item_key_spreadsheet_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'item_key_spread_take1';
  $feeds_importer->config = array(
    'name' => 'Item Key Spread take1',
    'description' => 'Trying the spreadsheet',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'item_key_spreadsheet',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'version code',
            'target' => 'field_version_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'display_name',
            'target' => 'field_display_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'item_id',
            'target' => 'field_item_id',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'value',
            'target' => 'field_value',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'support_remarks',
            'target' => 'field_support_remarks',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'item_key_number',
            'target' => 'field_item_key_number',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => 'feed_item_key',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['item_key_spread_take1'] = $feeds_importer;

  return $export;
}
