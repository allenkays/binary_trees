#include "binary_trees.h"

/**
 * binary_tree_delete - delets an entire binary tree
 * @tree: pointer to root node of tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
