#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height oof a binary tree
 *
 * @tree: A pointer to the root of the tree
 *
 * Return: The maximum height of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	/* Base case */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	hleft = binary_tree_height(tree->left) + 1;
	hright = binary_tree_height(tree->right) + 1;

	if (hleft > hright) /* Don't include the root node */
		return (hleft);
	else
		return (hright);
}

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
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)

