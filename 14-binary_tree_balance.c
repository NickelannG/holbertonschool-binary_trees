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
	if (tree == NULL)
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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: the balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft, hright;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);

	if (hleft == hright)
		return (0);

	return (hleft - hright);

}
