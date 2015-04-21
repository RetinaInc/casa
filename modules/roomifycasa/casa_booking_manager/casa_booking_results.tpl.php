<?php if (isset($change_search)): ?>
  <?php print render($change_search); ?>
<?php endif; ?>

<?php if (!$booking_results): ?>
  <?php print render($no_results); ?>
  <?php print render($booking_search_form); ?>
<?php endif; ?>

<?php if (isset($style) && ($style == ROOMS_INDIVIDUAL)): ?>
  <?php if ($booking_results): ?>
    <?php print render($legend); ?>
    <?php print render($change_search); ?>
    <?php foreach ($units_per_type as $type_name => $units_per_price_level): ?>
      <div class="rooms-search-result__unit-type">
        <?php foreach ($units_per_price_level as $price => $units) : ?>
          <?php foreach ($units as $unit_id => $unit) : ?>
            <div class="rooms-search-result__unit-embedded" id="unit_<?php print $unit_id ?>">
            <?php
              print render($unit['book_unit_form']['price']);
              unset($unit['book_unit_form']['price']);
              unset($unit['unit']['rooms_unit'][1]['rooms_booking_unit_options']);
              ?>
              <div class= "casa_search-result-addons">
                <?php if (count($unit['book_unit_form']['options']) >= 11): ?>
                  <span class="casa-search-result-addons-label"> <?php print (t('Add-ons'))?></span>
                <?php endif;?>
              </div>
              <?php print render($unit['book_unit_form']); ?>
            </div>
          <?php endforeach; ?>
        <?php endforeach; ?>
      </div>
    <?php endforeach; ?>
  <?php endif; ?>
<?php endif; ?>
