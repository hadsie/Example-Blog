<?php
/**
 * @file
 * example_blog.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function example_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer comment notify
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: create blog content
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(),
  );

  // Exported permission: delete any blog content
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
  );

  // Exported permission: delete own blog content
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(),
  );

  // Exported permission: delete terms in 2
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
  );

  // Exported permission: edit any blog content
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
  );

  // Exported permission: edit own blog content
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(),
  );

  // Exported permission: edit terms in 2
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
  );

  // Exported permission: subscribe to comments
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment_notify',
  );

  return $permissions;
}
