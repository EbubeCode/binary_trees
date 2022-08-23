#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	if (parent)
	{
		node->parent = parent;
		if (parent->left == NULL)
			parent->left = node;
		else if (parent->right == NULL)
			parent->right = node;
		else
		{
			free(node);
			return (NULL);
		}
	}

	return (node);
}
