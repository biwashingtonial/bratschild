<?php
/**
 * Variables:
 *   $different_event - TRUE if the session's invite isn't for the event page being viewed
 *   $rsvp - 'planned', 'notified', 'responded', 'attending', 'regrets'
 *   $invite_name - full name on the session's invite
 *   $form - the RSVP form for an invite that isn't already either attending or regrets
 */
?>
<?php if ($different_event) : ?>
  <h3>To RSVP</h3>
  <p>If you received an invitation email <em>for this event</em>, use the link in that email to view the RSVP form.</p>

<?php elseif ($rsvp_received) : ?>
  <h3>Please RSVP!</h3>
  <?php print render($form); ?>
  
<?php else : ?>
  <h3>You're <?php if ($rsvp == 'regrets') print 'Not '?>Attending.</h3>
  <p>Thank you for your RSVP!</p>

<?php endif; ?>