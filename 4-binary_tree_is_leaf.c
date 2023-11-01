#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checkes if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf or 0 if otherwise
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
