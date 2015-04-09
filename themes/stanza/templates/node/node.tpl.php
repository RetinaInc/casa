<?php

/**
 * @file
 * Overrides Omega's version of node.tpl.php.
 *
 * This template provides a way to hide the node title simply by setting the
 * $title variable to ''. This is usually done on a per node type basis and
 * may be placed in a sub-theme's node.preprocess.inc
 *
 * @see omega/omega/templates/node/node.tpl.php
 */
?>
<article<?php print $attributes; ?>>

  <?php if (isset($content['media'])) : ?>
    <div class="node__media">
      <?php print render($content['media']); ?>
    </div>
  <?php endif; ?>


  <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title) && !$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
    </header>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <footer class="node__submitted">
      <?php print $user_picture; ?>
      <p class="submitted"><?php print $submitted; ?></p>
    </footer>
  <?php endif; ?>

  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>
</article>
