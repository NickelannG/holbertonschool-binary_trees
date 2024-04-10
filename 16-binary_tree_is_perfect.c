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

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: 0 if its not perfect or if tree is NULL, otherwise 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ldepth, rdepth;

	if (tree == NULL)
		return (0);

	/* Means tree only has one node*/
	if (tree->left == NULL && tree->right == NULL)
		return (1); /* one node means its perfect */

	ldepth = binary_tree_depth(tree->left);
	rdepth = binary_tree_depth(tree->right);

	if (binary_tree_is_full(tree))
	{
		if (ldepth == rdepth)
		{
			if (tree->left == NULL && tree->right == NULL)
				return (1);
		}
	}
	return (0);
}
