<?php
/**
 * @file
 * student_profile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function student_profile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-student_profile-body'
  $field_instances['node-student_profile-body'] = array(
    'bundle' => 'student_profile',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<h1>Current Student</h1>

<ul class="fa-ul">
	<li><i class="fa-li fa fa-angle-right"></i>Why did you choose SLCC?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>What do you want prospective students to know about SLCC?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>What are your ministry plans?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>How is SLCC helping to assist you in getting there?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>Who would you most like to meet from the Bible or from history?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>What is one place in the world you would most like to visit?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>Favorite food or snack?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>Favorite Bible Character?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>Favorite Bible verse?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
</ul>

<h1>Alumni</h1>

<ul class="fa-ul">
	<li><i class="fa-li fa fa-angle-right"></i>Where do you serve?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>What ministry degree did you receive at SLCC?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>How long have you been in vocational ministry?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>How did SLCC prepare you for ministry?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
	<li><i class="fa-li fa fa-angle-right"></i>How do you encourage teens and adults to consider Bible college?
	<ul class="fa-ul">
		<li><i class="fa-li fa fa-angle-double-right"></i>answer</li>
	</ul>
	</li>
</ul>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-student_profile-field_academic_class'
  $field_instances['node-student_profile-field_academic_class'] = array(
    'bundle' => 'student_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_academic_class',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-student_profile-field_dept'
  $field_instances['node-student_profile-field_dept'] = array(
    'bundle' => 'student_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dept',
    'label' => 'Major',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-student_profile-field_gender'
  $field_instances['node-student_profile-field_gender'] = array(
    'bundle' => 'student_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gender',
    'label' => 'Gender',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-student_profile-field_social'
  $field_instances['node-student_profile-field_social'] = array(
    'bundle' => 'student_profile',
    'default_value' => array(
      0 => array(
        'value' => '<p><a href="http://www.facebook.com/#" title="Facebook"><i class="fa fa-facebook-square fa-2x fa-fw"></i></a><a href="http://twitter.com/#" title="Twitter"><i class="fa fa-twitter-square fa-2x fa-fw"></i></a></p>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_social',
    'label' => 'Social',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-student_profile-field_student_image'
  $field_instances['node-student_profile-field_student_image'] = array(
    'bundle' => 'student_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'student_thumb',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'student_profile',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_student_image',
    'label' => 'Student Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'field/students',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Gender');
  t('Major');
  t('Social');
  t('Student Image');
  t('Year');

  return $field_instances;
}
