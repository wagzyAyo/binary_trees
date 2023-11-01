#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * to measure the height
 *
 * Return: Height of tree
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!(tree))
		return (0);

	return (height(tree) - 1);
}

/**
 * height - the height of tree
 * @tree: our tree
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!(tree))
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}
