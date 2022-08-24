#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: root of the tree
 *
 * Return: number of nodes with atleast a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left)
		count = binary_tree_nodes(tree->left) + 1;
	if (tree->right)
	{
		if (count)
			count += binary_tree_nodes(tree->right);
		else
			count = binary_tree_nodes(tree->right) + 1;
	}
	return (count);
}
