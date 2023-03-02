#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - func to check how many leaves
 * @tree: var pointer to root node
 * Return: a count on leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_count = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leaves_count += 1;
	leaves_count += binary_tree_leaves(tree->left);
	leaves_count += binary_tree_leaves(tree->right);

	return (leaves_count);
}
