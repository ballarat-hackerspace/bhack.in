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
<div class="section-page-landing" id="header">
  <div class="inner-section">
    <div class="container">
      <?php print $content['header']; ?>
    </div>
  </div>
</div>

<div class="section-page-landing section-color-grey-light" id="blog">
  <div class="inner-section">
    <div class="container">
      <?php print $content['blog']; ?>
    </div>
  </div>
</div>

<div class="section-page-landing section-color-grey-dark" id="about">
  <div class="inner-section">
    <div class="container">
      <?php print $content['about']; ?>
    </div>
  </div>
</div>

<div class="section-page-landing section-color-grey-light" id="what">
  <div class="inner-section">
    <div class="container">
      <?php print $content['what']; ?>
    </div>
  </div>
</div>

<div class="section-page-landing" id="quote">
  <div class="section-overlay">
    <div class="inner-section">
      <?php print $content['quote']; ?>
    </div>
  </div>
</div>

<div class="section-page-landing section-color-grey-light" id="when">
  <div class="inner-section">
    <div class="container">
      <?php print $content['when']; ?>
    </div>
  </div>
</div>

<div class="section-page-landing section-color-grey-dark" id="where">
  <div class="inner-section">
      <div class="container">
      <?php print $content['where']; ?>
    </div>
  </div>
</div>
