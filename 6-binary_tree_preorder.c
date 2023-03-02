#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - function for traversal
 * @tree: pointer to root node
 * @func: a pointer to a func to call for each node
 * Return: node values in order
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
