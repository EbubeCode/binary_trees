#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaf nodes in a tree
 * @tree: root of the tree
 *
 * Return: the number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;

	if (!tree)
		return (0);
	total += binary_tree_leaves(tree->left);
	total += binary_tree_leaves(tree->left);

	if (!total)
		return (1);
	return (total);
}
