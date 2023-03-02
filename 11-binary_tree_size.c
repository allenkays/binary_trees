#include "binary_trees.h"

/**
 * binary_tree_size - function measures size of a BST
 * @tree: pointer to tree to measure
 * Return: size of tree or 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
