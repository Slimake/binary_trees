#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 *
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the binary tree or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
