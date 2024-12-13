#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL if failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (!node)
        return (NULL);

    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent)
        parent->left = node;

    return (node);
}
