#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: the number of nodes, or 0 if tree is NULL,
 * or if both left subtree and right subtree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lnode = 0, rnode = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lnode = binary_tree_nodes(tree->left);
	rnode = binary_tree_nodes(tree->right);

	return ((lnode + rnode) + 1);
}
