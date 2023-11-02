#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	x = tree->left;
	tree->left = x->right;
	if (x->right != NULL)
	{
		x->right->parent = tree;
	}
	x->right = tree;
	x->parent = tree->parent;
	tree->parent = x;
	return (x);
}
