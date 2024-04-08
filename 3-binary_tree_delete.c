#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{	
	binary_tree_t *current;

	if (tree == NULL)
		return;


