#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right node to parent node.
 * @parent: parent node of the node to insert
 * @value: value of the node to insert.
 *
 * Return: pointer to new node, NULL (if parent/new node is NULL)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent node is empty */
	if (parent == NULL)
		return (NULL);

	/* Create new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* Check if parent node has right child */
	if (parent->right)
	{
		/* set right child as right child of new node */
		new_node->right = parent->right;
		/* set new node as parent of right child */
		parent->right->parent = new_node;
	}
	/* assign new node as parent node's right child */
	parent->right = new_node;

	return (new_node);
}
