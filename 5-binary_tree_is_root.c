#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: a pointer to the node to check
 *
 * Return: 0 if node is NULL or if node is not a root, otherwise, 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	else
		return (1);
}
