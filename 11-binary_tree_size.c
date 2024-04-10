#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: the size, or 0 if tree is NULL, or 1 if tree is the root
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize = 0, rsize = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);

	return ((lsize + rsize) + 1);
}
