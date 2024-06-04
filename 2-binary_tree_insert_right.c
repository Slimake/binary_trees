#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_right - Inserts a node as
 * the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (!parent)
		return (NULL);

	new_node_right = binary_tree_node(parent, value);
	if (!new_node_right)
		return (NULL);

	new_node_right->right = parent->right;
	if (new_node_right->right)
		new_node_right->right->parent = new_node_right;

	parent->right = new_node_right;

	return (new_node_right);
}
