#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node, or NULL if node is null, or if
 * node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	else if (node->parent->left == node)
		sibling = node->parent->right;

	else if (node->parent->right == node)
		sibling = node->parent->left;

	return (sibling);
}

/**
 * binary_tree_uncle - finds an uncle of a node
 *
 * @node: a pointer to the node to find the uncle
 *
 * Return: pointer to the uncle, or NULL if node is NULL or
 * if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (!binary_tree_sibling(node->parent))
			return (NULL);

	else
	{
		uncle = binary_tree_sibling(node->parent);
		return (uncle);
	}
}
