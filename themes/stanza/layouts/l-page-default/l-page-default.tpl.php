<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="l-page <?php print $classes; ?>">

  <div class="l-leader">
    <?php print render($content['leader']); ?>
  </div>

  <div class="l-header">
    <?php if (!empty($content['branding'])): ?>
      <div class="l-branding" role="banner">
        <?php print render($content['branding']); ?>
      </div>
    <?php endif; ?>

    <div class="l-user">
      <aside class="l-utility">
        <?php if (!empty($content['utility'])): ?>
        <?php print render($content['utility']); ?>
        <?php endif; ?>
      </aside>

      <?php if (!empty($content['nav'])): ?>
        <nav class="l-nav" role="navigation">
          <?php print render($content['nav']); ?>
        </nav>
      <?php endif; ?>
    </div>
  </div>

  <div class="l-content">
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

  <div class="l-footer" role="contentinfo">
      <?php print render($content['footer']); ?>
  </div>

</div>
