#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to root
 *
 * Return: height of the tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t h = 0, r = 0, l = 0;

	if (!tree)
		return (h);
	if (tree->left)
		l = height(tree->left) + 1;
	if (tree->right)
		r = height(tree->right) + 1;

	if (l > r)
		h += l;
	else
		h += r;
	return (h);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root of the tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lh = height(tree->left) + 1;
	if (tree->right)
		rh = height(tree->right) + 1;

	return (lh - rh);
}

