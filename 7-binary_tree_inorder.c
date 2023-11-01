#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a tree using in-order travaersal
 * @tree:  pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 **/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	binary_tree_inorder(tree->left);
	func(tree->n);
	binary_tree_inorder(tree->right);
}
