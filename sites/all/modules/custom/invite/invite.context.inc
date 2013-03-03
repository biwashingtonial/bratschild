<?php
/**
 * @file
 * invite.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function invite_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'comment_block_display';
  $context->description = 'Display the "Most Recent Comments" block.';
  $context->tag = 'invite';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'invite_event_nid' => 'invite_event_nid',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/comments' => '~node/*/comments',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-invite_comment-block_1' => array(
          'module' => 'views',
          'delta' => 'invite_comment-block_1',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display the "Most Recent Comments" block.');
  t('invite');
  $export['comment_block_display'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'comment_form_display';
  $context->description = 'Display the "Leave a Comment" form (block).';
  $context->tag = 'invite';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/comments' => 'node/*/comments',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'invite-comment_form' => array(
          'module' => 'invite',
          'delta' => 'comment_form',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display the "Leave a Comment" form (block).');
  t('invite');
  $export['comment_form_display'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'invite_rsvp_block_display';
  $context->description = '';
  $context->tag = 'invite';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'invite_count' => 'invite_count',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'invite-rsvp' => array(
          'module' => 'invite',
          'delta' => 'rsvp',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('invite');
  $export['invite_rsvp_block_display'] = $context;

  return $export;
}
