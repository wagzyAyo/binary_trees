#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: Pointer to the node to check
 * Return: 1 if node is a root 0 if otherwise
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
