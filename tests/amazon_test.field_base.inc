<?php
/**
 * @file
 * amazon_test.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function amazon_test_field_default_field_bases() {
  $field_bases = array();

  $field_bases['field_asin'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_asin',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'asin',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'asin',
  );

  return $field_bases;
}
