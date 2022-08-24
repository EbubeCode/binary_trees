#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a tree
 * @tree: pointer to the node
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree && tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
