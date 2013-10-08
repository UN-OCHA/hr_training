<?php
/**
 * @file
 * hr_training.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hr_training_taxonomy_default_vocabularies() {
  return array(
    'type_of_training' => array(
      'name' => 'Type of Training',
      'machine_name' => 'type_of_training',
      'description' => 'Target audience for the training',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
