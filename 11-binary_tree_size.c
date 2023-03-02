#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - func to determine the size
 * @tree: variable representing the tree
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_tree = 1;

	if (!tree)
		return (0);

	size_tree += binary_tree_size(tree->left);		
	size_tree += binary_tree_size(tree->right);

	return (size_tree);
}
