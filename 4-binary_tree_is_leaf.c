#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: the node to check
 *
 * Return: 0 if node is not a leaf or if node is NULL, otherwise 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* No child nodes */
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
