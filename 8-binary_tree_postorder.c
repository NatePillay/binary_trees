#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - function for traversal
 * @tree: pointer to root node
 * @func: a pointer to a func to call for each node
 * Return: node values in order
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
