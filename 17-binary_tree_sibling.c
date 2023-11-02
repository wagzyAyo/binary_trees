#include "binary_trees.h"

/**
 * binary_tree_sibling - finds siblings of a node
 * @node: pointer to the node to find sibling
 * Return: Pointer to sibling node or NULL
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
