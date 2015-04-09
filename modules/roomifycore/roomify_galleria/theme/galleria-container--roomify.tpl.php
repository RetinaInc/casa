<?php
/**
 * @file
 * Default output for a galleria node.
*/
?>
<div id="galleria-<?php print $id ?>" class="galleria-content <?php print $optionset_class; ?> clearfix">
  <?php print render($items); ?>
</div>
