<?php
/**
 * @file
 * item_key_spreadsheet.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function item_key_spreadsheet_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_item_key_spreadsheet';
  $strongarm->value = 0;
  $export['comment_anonymous_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_item_key_spreadsheet';
  $strongarm->value = 1;
  $export['comment_default_mode_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_item_key_spreadsheet';
  $strongarm->value = '50';
  $export['comment_default_per_page_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_item_key_spreadsheet';
  $strongarm->value = 1;
  $export['comment_form_location_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_item_key_spreadsheet';
  $strongarm->value = '2';
  $export['comment_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_item_key_spreadsheet';
  $strongarm->value = '1';
  $export['comment_preview_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_item_key_spreadsheet';
  $strongarm->value = 1;
  $export['comment_subject_field_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__item_key_spreadsheet';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_item_key_spreadsheet';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_item_key_spreadsheet';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_item_key_spreadsheet';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_item_key_spreadsheet';
  $strongarm->value = '1';
  $export['node_preview_item_key_spreadsheet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_item_key_spreadsheet';
  $strongarm->value = 1;
  $export['node_submitted_item_key_spreadsheet'] = $strongarm;

  return $export;
}
