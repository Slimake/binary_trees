#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child
 * @value: Value to store in the new node
 *
 * Return: A pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeft;

	if (!parent)
		return (NULL);

	newLeft = binary_tree_node(parent, value);
	if (!newLeft)
		return (NULL);

	newLeft->left = parent->left;
	if (newLeft->left)
		newLeft->left->parent = newLeft;

	newLeft->parent = parent;
	parent->left = newLeft;

	return (newLeft);
}

