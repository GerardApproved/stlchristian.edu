<?php
/**
 * @file
 * basic_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function basic_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function basic_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your (fairly) static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Page Name'),
      'help' => '',
    ),
  );
  return $items;
}
