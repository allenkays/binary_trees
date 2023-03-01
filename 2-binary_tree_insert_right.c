#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another
 * @parent: pointer to the node to insert the right-child in
 * @value: value to insert to the given node
 *
 * Return: pointer to created node or
 *	NULL on failure or
 *	if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = parent->right;
	parent->right = newNode;
	if (newNode->right)
		newNode->right->parent = newNode;

	return (newNode);
}
