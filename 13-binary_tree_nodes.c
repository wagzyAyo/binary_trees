#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the node with atlest 1 child
 * @tree: pointer to the root node of the tree to 
 * count the number of nodes
 * Return: number of node counted
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
			return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
