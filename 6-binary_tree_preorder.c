#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using
 * pre order trasversal
 *@tree: Pointer to the root node to trasvers
 *@func: Pointer to a function to call for each node
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
