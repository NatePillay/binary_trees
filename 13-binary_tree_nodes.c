#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - function to count the nodes
 * @tree: pointer to the root node of the tree
 * Return: a count of nodes or 0
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		count++;
	}

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
