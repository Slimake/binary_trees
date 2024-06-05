#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Inorder tree traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, return. Base case */
	if (!tree || !func)
		return;

	/* Recursively call binary_tree_inorder */
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
