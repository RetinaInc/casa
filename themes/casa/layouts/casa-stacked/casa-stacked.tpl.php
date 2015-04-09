<div class="l-casa-stacked">

  <?php if (!empty($content['highlighted'])): ?>
  <div class="l-region-highlighted">
    <div class="l-region-highlighted-inner">
      <?php print render($content['highlighted']); ?>
    </div>
  </div>
  <?php endif; ?>

  <?php if (!empty($content['main']) || !empty($content['main_left']) || !empty($content['main_right'])): ?>
  <div class="l-section-main">
    <div class="l-section-main-inner">
      <div class="l-region-main clearfix"><div class="l-region-main-inner">
        <?php print render($content['main']); ?>
      </div></div>
      <div class="l-region-main-left"><div class="l-region-main-left-inner">
        <?php print render($content['main_left']); ?>
      </div></div>
      <div class="l-region-main-right"><div class="l-region-main-right-inner">
        <?php print render($content['main_right']); ?>
      </div></div>
    </div>
  </div>
  <?php endif; ?>

  <?php if (!empty($content['secondary_left']) || !empty($content['secondary_right'])): ?>
  <div class="l-section-secondary">
    <div class="l-section-secondary-inner">
      <div class="l-region-secondary-left"><div class="l-region-secondary-left-inner">
        <?php print render($content['secondary_left']); ?>
      </div></div>
      <div class="l-region-secondary-right"><div class="l-region-secondary-right-inner">
        <?php print render($content['secondary_right']); ?>
      </div></div>
    </div>
  </div>
  <?php endif; ?>


  <?php if (!empty($content['bottom'])): ?>
  <div class="l-bottom">
    <div class="l-bottom-inner">
      <?php print render($content['bottom']); ?>
    </div>
  </div>
  <?php endif; ?>

</div>
