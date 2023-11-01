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
/**
 * binary_tree_size - measures the size
 * of binary tree
 * @tree: pointer to the root node of the tree
 *  to measure the size
 *  Return: size of the tree
**/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_leaves - Counts the leaves
 * in a binary tree
 * @tree: pointer to the root node of the tree to count the
 * number of leaves
 * Return: number of leaves
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
