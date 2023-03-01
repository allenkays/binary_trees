#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a node as the left-child
 * @parent: pointer to the node to insert the left-child to
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or
 *	NULL on failure,or if parent is NULL;
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	newNode->right = NULL;
	parent->left = newNode;

	if (newNode->left)
		newNode->left->parent = newNode;

	return (newNode);
}
