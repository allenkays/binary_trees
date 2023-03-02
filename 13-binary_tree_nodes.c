#install "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast one child
 * @tree: pointer to the root node of the tree to count nodes of
 * Return: number of nodes or 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
