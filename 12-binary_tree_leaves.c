#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: the number of leaves, 1 if the current node is a leaf 
 * or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lleaf = 0, rleaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lleaf = binary_tree_leaves(tree->left);
	rleaf = binary_tree_leaves(tree->right);

	return (lleaf + rleaf);
}
