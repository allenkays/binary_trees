#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure the depth of a BST
 * @tree: BST to measure
 * Return: depth of BST or 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
