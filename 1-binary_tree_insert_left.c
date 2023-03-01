#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - func to insert onto left of tree
 * @parent: a pointer to the parent node
 * @value: value returned at that position
 * Return: binary_tree_t data type
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);


	if (parent->newnode != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	else
	{
		newnode->left = NULL;
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	parent->left = newnode;

	return (newnode);
}

