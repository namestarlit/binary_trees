#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 (if empty), height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t l = 0, r = 0;

		/* Calculate the height of the left subtree recursively */
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		/* Calculate the height of the right subtree recursively */
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/* Return the maximum height between left and right subtrees */
		return (l > r ? l : r);
	}

	/* If tree is NULL, return 0 */
	return (0);
}
