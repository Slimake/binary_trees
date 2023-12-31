#include "binary_trees.h"

/**
 *  binary_tree_node - Creates a binary tree node
 *
 *  @parent: pointer to the parent node of the node to create
 *  @value: value to insert in the new node
 *
 *	Return: the binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
