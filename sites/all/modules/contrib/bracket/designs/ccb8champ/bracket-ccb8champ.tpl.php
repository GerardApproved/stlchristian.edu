<?php

/**
 * @file
 * Template for ccb8champ bracket design
 *
 * Available variables:
 * - $node: The node object for the bracket to be rendered.
 */
drupal_add_css(drupal_get_path('module', 'bracket') . '/designs/ccb8champ/bracket-ccb8champ.css', array('preprocess' => FALSE));
?>

<div class="bracket-print-link">
  <?php echo l(t('Click here for game recaps'), 'athletics/mens-soccer/tournament/recaps'); ?>
</div>
<div class="bracket-block">
  <?php if ($node->subtitle) { ?>
  <div class="bracket-subtitle"><?php print filter_xss_admin($node->subtitle) ?></div>
  <?php } ?>
  <?php if ($node->comments) { ?>
  <div class="bracket-comments"><?php print nl2br(filter_xss_admin($node->comments)) ?></div>
  <?php } ?>
  <div id="lower-results" class="bracket-results bracket-results-right">
    <div id="fifth-results-spacer"></div>
    <?php print theme('bracket_result', array('node' => $node, 'result_index' => 5, 'orientation' => 'right')) ?>
  </div>
  <div id="round-5" class="bracket-round">
    <div class="bracket-round-comment"><?php print $node->round[5]->comment ? filter_xss_admin($node->round[5]->comment) : '&nbsp;' ?></div>
    <div id="round-2-loser-round-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 5, 'match_index' => 1, 'orientation' => 'right')) ?>
  </div>
  <div id="round-4" class="bracket-round">
    <div class="bracket-round-comment"><?php print $node->round[4]->comment ? filter_xss_admin($node->round[4]->comment) : '&nbsp;' ?></div>
    <div id="round-4-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 4, 'match_index' => 1, 'orientation' => 'right')) ?>
    <div class="bracket-round-4-match-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 4, 'match_index' => 2, 'orientation' => 'right')) ?>
  </div>
  <div id="round-1" class="bracket-round">
    <div class="bracket-round-comment"><?php print $node->round[1]->comment ? filter_xss_admin($node->round[1]->comment) : '&nbsp;' ?></div>
    <div id="round-1-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 1, 'match_index' => 1, 'orientation' => 'left')) ?>
    <div class="bracket-round-1-match-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 1, 'match_index' => 2, 'orientation' => 'left')) ?>
    <div class="bracket-round-1-match-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 1, 'match_index' => 3, 'orientation' => 'left')) ?>
    <div class="bracket-round-1-match-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 1, 'match_index' => 4, 'orientation' => 'left')) ?>
    <div id="round-1-loser-round-spacer"></div>
  </div>
  <div id="round-2" class="bracket-round">
    <div class="bracket-round-comment"><?php print $node->round[2]->comment ? filter_xss_admin($node->round[2]->comment) : '&nbsp;' ?></div>
    <div id="round-2-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 2, 'match_index' => 1, 'orientation' => 'left')) ?>
    <div class="bracket-round-2-match-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 2, 'match_index' => 2, 'orientation' => 'left')) ?>
  </div>
  <div id="round-3" class="bracket-round">
    <div class="bracket-round-comment"><?php print $node->round[3]->comment ? filter_xss_admin($node->round[3]->comment) : '&nbsp;' ?></div>
    <div id="round-3-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 3, 'match_index' => 1, 'orientation' => 'left')) ?>
    <div id="round-3-loser-round-spacer"></div>
    <?php print theme('bracket_match', array('node' => $node, 'round_index' => 6, 'match_index' => 1, 'orientation' => 'left')) ?>
  </div>
  <div id="results" class="bracket-results bracket-results-left">
    <div id="results-spacer"></div>
    <?php print theme('bracket_result', array('node' => $node, 'result_index' => 1, 'orientation' => 'left')) ?>
    <div class="bracket-result-spacer"></div>
    <?php print theme('bracket_result', array('node' => $node, 'result_index' => 2, 'orientation' => 'left')) ?>
    <div id="loser-results-spacer"></div>
    <?php print theme('bracket_result', array('node' => $node, 'result_index' => 3, 'orientation' => 'left')) ?>
  </div>
  <?php print theme('bracket_images', array('node' => $node)) ?>
  <div class="bracket-footer"><?php print nl2br(filter_xss_admin($node->footer)) ?></div>
</div>

