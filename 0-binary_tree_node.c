#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - binary tree node.
 * @parent: pointer to parent node.
 * @value: value of the new node.
 *
 * Return: pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Allocate memory for new node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign values */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
