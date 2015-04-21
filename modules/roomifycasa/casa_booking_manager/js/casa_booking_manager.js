(function ($) {

Drupal.behaviors.roomsChangeSearchCalendars = {
  attach: function(context) {
  changeSearchText = Drupal.settings.casaBookingManager.changeSearchText;
  $(".casa_change_search_availability_button").once().click(function(){

      var $target = $('.availability-three-calendar-block'),
      $toggle = $('.pane-availability-calendars-button .availability_calendars_button a')
      $target.slideToggle( 400, function () {
        // Change availability button text.
        $toggle.text(($target.is(':visible') ? 'Close Calendars' : 'Check Availability'));
        // Change "Change search" text.
        $('.casa_change_search_availability_button a').text(($target.is(':visible') ? 'Close Calendars' : changeSearchText));
      });
      // Refresh calendars
      $('#calendar').fullCalendar('refetchEvents');
      $('#calendar1').fullCalendar('refetchEvents');
      $('#calendar2').fullCalendar('refetchEvents');
    });

  if ($(".casa_search-result-addons").children().hasClass('casa-search-result-addons-label')) {
    $(".rooms-book-unit-form").addClass('casa-unit-with-addons');  
  }
  else {
    $(".rooms-book-unit-form").addClass('casa-unit-no-addons');
  }

  }
};

})(jQuery);
