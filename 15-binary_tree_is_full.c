#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer ot the root node
 *
 * Return: 1 if its full, or 0 if its not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		/* Check the subtrees */
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	else
		return (0);
}
