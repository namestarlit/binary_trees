#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of the parent node.
 * @parent: pointer to the parent node of the node to insert.
 * @value: value of the node to insert
 *
 * Return: Pointer to node, NULL (if parent in NULL)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* check if parent node is empty */
	if (parent == NULL)
		return (NULL);

	/* create new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* check if parent node has left node */
	if (parent->left)
	{
		/* assign left node to new_node left node */
		new_node->left = parent->left;
		/* Assign new_node as left node's parent */
		parent->left->parent = new_node;
	}
	/* Assign new node as parent node's left node */
	parent->left = new_node;

	return (new_node);
}
