(function ($) {

Drupal.behaviors.invite_node_form = {
  attach: function(context, settings) {
    function toggleFields(e) {
      if ($('#invite-node-form #edit-use-bulk').get(0).checked) {
        // toggle off the name and email fields
        $('#invite-node-form #edit-field-invite-name-first').hide();
        $('#invite-node-form #edit-field-invite-name-last').hide();
        $('#invite-node-form #edit-field-invite-email').hide();
        // toggle on the bulk entry field
        $('#invite-node-form #edit-bulk-csv').parents('.form-type-textarea').show();
      } else {
        // toggle on the name and email fields
        $('#invite-node-form #edit-field-invite-name-first').show();
        $('#invite-node-form #edit-field-invite-name-last').show();
        $('#invite-node-form #edit-field-invite-email').show();
        // toggle off the bulk entry field
        $('#invite-node-form #edit-bulk-csv').parents('.form-type-textarea').hide();
      }
    }
    // toggle when the bulk loading is switched on or off
    $('#invite-node-form #edit-use-bulk').change(toggleFields);
    
    // and toggle on page load to set initial form state
    toggleFields(context);
  }
};

})(jQuery);
