#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child
 * @value: Value to store in the new node
 *
 * Return: A pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRight;

	if (!parent)
		return (NULL);

	newRight = binary_tree_node(parent, value);
	if (!newRight)
		return (NULL);

	newRight->right = parent->right;
	if (newRight->right)
		newRight->right->parent = newRight;

	newRight->parent = parent;
	parent->right = newRight;

	return (newRight);
}

