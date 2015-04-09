/**
 * Renders the weather status for a city.
 */
(function ($) {
  /**
   * Process the form on submission.
   */
  Drupal.behaviors.casaSettingsWeather = {
    attach: function (context, settings) {
      $.ajax({
        url: 'http://api.openweathermap.org/data/2.5/weather',
        jsonp: 'callback',
        dataType: 'jsonp',
        cache: false,
        data: {
          q: Drupal.settings.casa_settings_weather.city,
          units: Drupal.settings.casa_settings_weather.type
        },
        // work with the response
        success: function (response) {
          unit = Drupal.settings.casa_settings_weather.type == 'metric' ? '°C' : '°F';
          weather = Math.round(response.main.temp) + unit;

          $('#city').text(Drupal.settings.casa_settings_weather.city + ', ' + Drupal.settings.casa_settings_weather.country);
          $('#weather').text(weather);
        }
      });
    }
  };

})(jQuery);
