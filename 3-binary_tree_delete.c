#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - function that deletes a tree
 * @tree: variable to reference the tree
 * Return: nothing if successful
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (root == NULL)
		return (NULL);

	deleteTree(root->left);
	deleteTree(root->right);
	free(root);
}
