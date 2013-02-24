(function ($) {

Drupal.behaviors.invite_node_form = {
  attach: function(context, settings) {
    function toggleFields(e) {
      if ($('#invite-rsvp-form #edit-field-invite-rsvp-und-0-value-attending').get(0).checked) {
        // toggle on the attending-only fields
        $('#invite-rsvp-form .form-item-field-invite-attendee-count-und-0-value').show();
        $('#invite-rsvp-form .form-item-field-invite-contributions-und-0-value').show();
      } else {
        // toggle off the attending-only fields
        $('#invite-rsvp-form .form-item-field-invite-attendee-count-und-0-value').hide();
        $('#invite-rsvp-form .form-item-field-invite-contributions-und-0-value').hide();
      }
    }
    // toggle when the bulk loading is switched on or off
    $('#invite-rsvp-form .form-item-field-invite-rsvp-und-0-value input[type=radio]').change(toggleFields);
  }
};

})(jQuery);
