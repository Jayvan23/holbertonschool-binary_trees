#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL if failure.
 */
void binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return;

    new_node = binary_tree_node(parent, value);

    if (parent->right)
        parent->right->left = new_node;
    parent->right = new_node;
}
