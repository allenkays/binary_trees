#include "binary_trees.h"

/**
 * binary_tree_node - function pointer to create a binary tree node
 * @parent: pointer to the parent noded of the node to create
 * @value: data to put in the new node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (newNode)
	{
		return (newNode);
	}
	else
	{
		return (NULL);
	}
}
