#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the deapth of a node in a binary tree
 *
 * @tree: a pointer to the node
 *
 * Return: the depth, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
