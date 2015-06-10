(function($) {
  Drupal.behaviors.lazySocial = {
    attach: function (context, settings) {

      // getting custom values from PHP
      var php       = Drupal.settings.lazy_social;
      var FB_locale = php['facebook']['locale'];
      var FB_appID  = php['facebook']['appID'];
      var Gp_locale = php['googleplus']['locale'];

      // defining the waypoint that must be visible on screen before AJAX starts to inject the social scripts
      $('#lazy-social-buttons').waypoint(function() {

        // FACEBOOK wants to be placed right after the opening <body> tag
        $.ajax({
          success: function() {
            $('body').prepend('<div id="fb-root"></div><script>(function(d, s, id) { var js, fjs = d.getElementsByTagName(s)[0]; if (d.getElementById(id)) return; js = d.createElement(s); js.id = id; js.src = "//connect.facebook.net/' + FB_locale + '/sdk.js#xfbml=1&version=v2.3' + FB_appID + '"; fjs.parentNode.insertBefore(js, fjs); }(document, \'script\', \'facebook-jssdk\'));</script>');
          }
        });

        // GOOGLE wants to be placed right before the closing </body> tag
        $.ajax({
          success: function() {
            $('body').append('<script type="text/javascript">window.___gcfg = {lang: \'' + Gp_locale + '\'}; (function() { var po = document.createElement(\'script\'); po.type = \'text/javascript\'; po.async = true; po.src = \'https://apis.google.com/js/platform.js\'; var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(po, s); })();</script>');
          }
        });

        // TWITTER
        $.ajax({
          url: 'https://platform.twitter.com/widgets.js',
          dataType: 'script',
          cache: true
        });

      }, {
        offset: '100%'
      });
      
    }
  };
})(jQuery);