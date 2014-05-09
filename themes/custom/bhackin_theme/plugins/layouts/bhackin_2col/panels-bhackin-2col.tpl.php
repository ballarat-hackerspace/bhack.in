<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['middle']: The only panel in the layout.
 */
?>
<div class="row">
  <div class="left<?php echo $left_classes ?>">
    <?php print $content['left']; ?>
  </div>
  <div class="right<?php echo $right_classes ?>">
    <?php print $content['right']; ?>
  </div>
</div>
