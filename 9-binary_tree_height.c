#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, r = 0, l = 0;

	if (!tree)
		return (h);
	if (tree->left)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;

	if (l > r)
		h += l;
	else
		h += r;
	return (h);
}
