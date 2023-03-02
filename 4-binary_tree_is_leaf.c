#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - function to check
 * @node: variable for what we referencing
 * Return: 1 if it is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
