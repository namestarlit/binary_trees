#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if binary tree node is root node.
 * @node: pointer to the node to check
 *
 * Return: 0 (false), 1 (true)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if node is empty */
	if (node == NULL)
		return (0);

	/* Check if node is root */
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
