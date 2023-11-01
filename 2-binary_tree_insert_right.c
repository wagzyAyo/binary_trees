#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the node
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;


        if (parent == NULL)
                return (NULL);

        new_node = malloc(sizeof(binary_tree_t));
        if (new_node == NULL)
                return (NULL);

        new_node->parent = parent;
        new_node->n = value;
        new_node->left = NULL;
        new_node->right = parent->right;

        if (parent->left != NULL)
                parent->left->parent = new_node;

        parent->right = new_node;

        return (new_node);
}
