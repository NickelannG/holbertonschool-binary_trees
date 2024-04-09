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
	
	ldepth = binary_tree_depth(tree->left);
	rdepth = binary_tree_depth(tree->right);

	return ((ldepth == rdepth) &&
		(binary_tree_is_perfect(tree->left)) &&
		(binary_tree_is_perfect(tree->right)));
}
