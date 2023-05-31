#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if binary tree node is leaf.
 * @node: pointer to node to check
 *
 * Return: 0 (false), 1 (true)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);

	/* Recursively check each node */
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);
}
