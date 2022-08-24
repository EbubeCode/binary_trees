#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root of the tree
 *
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	return (l && r ? 1 : 0);
}
