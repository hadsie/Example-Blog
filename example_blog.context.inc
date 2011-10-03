<?php
/**
 * @file
 * example_blog.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function example_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_blocks';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'blog_listing:page' => 'blog_listing:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_blog_comments-block' => array(
          'module' => 'views',
          'delta' => 'recent_blog_comments-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog_listing-block' => array(
          'module' => 'views',
          'delta' => 'blog_listing-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['blog_blocks'] = $context;

  return $export;
}
