#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *x;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	x = tree->right;
	tree->right = x->left;
	if (x->left != NULL)
	{
		x->left->parent = tree;
	}
	x->left = tree;
	x->parent = tree->parent;
	tree->parent = x;
	return (x);
}
