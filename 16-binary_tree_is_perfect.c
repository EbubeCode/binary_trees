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
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: root of the tree
 *
 * Return: 1 if true else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;
	int rp = 0, lp = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);

	if (tree->right)
		r = height(tree->right);
	if (tree->left)
		l = height(tree->left);

	if (r != l)
		return (0);
	rp = binary_tree_is_perfect(tree->right);
	lp = binary_tree_is_perfect(tree->left);

	return (rp && lp ? 1 : 0);
}

