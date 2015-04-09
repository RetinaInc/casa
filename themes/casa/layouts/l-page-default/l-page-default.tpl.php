<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="l-page <?php print $classes; ?>">

  <div class="l-leader"><div class="l-leader-inner">
    <?php print render($content['leader']); ?>
  </div></div>

  <div class="l-header">
    <div class="l-header-inner">

      <div class="l-header-col-1">
      <?php if (!empty($content['branding'])): ?>
        <div class="l-branding" role="banner">
          <?php print render($content['branding']); ?>
        </div>
      <?php endif; ?>
      </div>

      <div class="l-header-col-2">
      <div class="l-user">
        <aside class="l-utility">
          <?php if (!empty($content['utility'])): ?>
          <?php print render($content['utility']); ?>
          <?php endif; ?>
        </aside>
      </div>

      <?php if (!empty($content['nav'])): ?>
        <nav class="l-nav" role="navigation">
          <div class="l-nav-inner">
            <?php print render($content['nav']); ?>
          </div>
        </nav>
      <?php endif; ?>
      </div>

    </div>
  </div>



  <div class="l-content">
    <div class="l-content-inner">
    <?php if (!empty($content['hero'])): ?>
      <div class="l-hero">
        <?php print render($content['hero']); ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['help'])): ?>
      <div class="l-help" role="complementary">
        <?php print render($content['help']); ?>
      </div>
    <?php endif; ?>

    <div class="l-main" role="main">
      <?php print render($content['main']); ?>
    </div>
    </div>
  </div>

  <div class="l-footer" role="contentinfo">
    <div class="l-footer-inner">
      <?php print render($content['footer']); ?>
    </div>
  </div>

</div>
