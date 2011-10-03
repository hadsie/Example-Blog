<?php
/**
 * @file
 * example_blog.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function example_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blog';
  $strongarm->value = 0;
  $export['comment_anonymous_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blog';
  $strongarm->value = '2';
  $export['comment_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blog';
  $strongarm->value = 1;
  $export['comment_default_mode_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blog';
  $strongarm->value = '50';
  $export['comment_default_per_page_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blog';
  $strongarm->value = 1;
  $export['comment_form_location_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_available_alerts';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
  );
  $export['comment_notify_available_alerts'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_comment_notify_default_mailtext';
  $strongarm->value = 'Hi [comment-subscribed:author],

[comment:author] has commented on: "[comment:node:title]"

----
[comment:title]
[comment:body]
----

You can view the comment at the following url
[comment:url]

You can stop receiving emails when someone replies to this post,
by going to [comment-subscribed:unsubscribe-url]

You can set up auto-following feature for all future posts
by creating your own user with a few clicks here [site:login-url]

-- [site:name] team
[site:url]';
  $export['comment_notify_comment_notify_default_mailtext'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_default_anon_mailalert';
  $strongarm->value = '1';
  $export['comment_notify_default_anon_mailalert'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_default_registered_mailalert';
  $strongarm->value = '0';
  $export['comment_notify_default_registered_mailalert'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_node_notify_default_mailalert';
  $strongarm->value = 0;
  $export['comment_notify_node_notify_default_mailalert'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_node_notify_default_mailtext';
  $strongarm->value = 'Hi [comment:node:author],

You have received a comment on: "[comment:node:title]"

----
[comment:title]
[comment:body]
----

You can view the comment at the following url
[comment:url]

You will receive emails like this for all replies to your posts. You can
disable this by logging in and changing the settings on your user account at
[comment:node:author:edit-url].

-- [site:name] team
[site:url]';
  $export['comment_notify_node_notify_default_mailtext'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_node_types';
  $strongarm->value = array(
    'blog' => 'blog',
    'article' => 0,
    'page' => 0,
  );
  $export['comment_notify_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blog';
  $strongarm->value = '1';
  $export['comment_preview_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blog';
  $strongarm->value = 1;
  $export['comment_subject_field_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_blog'] = $strongarm;

  return $export;
}
