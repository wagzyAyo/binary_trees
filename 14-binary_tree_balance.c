#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of
 * a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_bal_height(const binary_tree_t *tree)
{
	size_t x = 0;
	size_t y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			x = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			y = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((x > y) ? x : y);
	}
}

/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree:  pointer to the root node of the tree to
 * measure the balance factor
 * Return: Balance factor of the tree
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, total = 0;

	if (tree)
	{
		left = int(binary_tree_bal_height(tree->left));
		right = int(binary_tree_bal_height(tree->right));
		total = left - right
	}

	return (total);
}
