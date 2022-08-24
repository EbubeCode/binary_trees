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
 * is_full - checks if a binary tree is full
 * @tree: root of the tree
 *
 * Return: 1 if full else 0
 */
int is_full(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	l = is_full(tree->left);
	r = is_full(tree->right);

	return (l && r ? 1 : 0);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: root of the tree
 *
 * Return: 1 if true else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);

	r = height(tree->right);
	l = height(tree->left);

	if (r != l)
		return (0);
	if (is_full(tree->left) && is_full(tree->right))
		return (1);
	return (0);
}

