#include "binary_trees.h"

/**
 * sibling - finds the sibling of a node
 * @node: node to find sibling
 *
 * Return: pointer to sibling else NULL
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to find uncle
 *
 * Return: pointer to uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);
	return (sibling(node->parent));
}
