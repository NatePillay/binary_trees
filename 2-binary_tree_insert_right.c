#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - func to insert onto right of tree
 * @parent: a pointer to the parent node
 * @value: value returned at that position
 * Return: binary_tree_t data type
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	else
	{
		newnode->right = NULL;
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	parent->right = newnode;


	return (newnode);
}
