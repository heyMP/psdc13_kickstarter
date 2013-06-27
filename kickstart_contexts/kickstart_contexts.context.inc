<?php
/**
 * @file
 * kickstart_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kickstart_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_banner-block' => array(
          'module' => 'views',
          'delta' => 'featured_banner-block',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'views-staff_directory-block_1' => array(
          'module' => 'views',
          'delta' => 'staff_directory-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  return $export;
}
