#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Postorder tree traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, return. Base case */
	if (!tree || !func)
		return;

	/* Recursively call binary_tree_postorder */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
