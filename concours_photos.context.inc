<?php
/**
 * @file
 * concours_photos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function concours_photos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'concours_recentes_highlight_front';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        '/' => '/',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-823275c5059f54eadc965fed06438efc' => array(
          'module' => 'views',
          'delta' => '823275c5059f54eadc965fed06438efc',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['concours_recentes_highlight_front'] = $context;

  return $export;
}
