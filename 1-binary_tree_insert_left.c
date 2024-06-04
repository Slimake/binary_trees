#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_left - Inserts a node at the 
 * left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: pointer to the created node, or NULL
 * on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node_left;

    if (!parent)
        return (NULL);

    new_node_left = binary_tree_node(parent, value);
    if (!new_node_left)
        return (NULL);

    new_node_left->left = parent->left;
    if (new_node_left->left)
        new_node_left->left->parent = new_node_left;

    parent->left = new_node_left;

    return (new_node_left);
}
