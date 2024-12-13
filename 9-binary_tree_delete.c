#include "binary_trees.h"
#include <stdlib.h>

/**
 * _binary_tree_delete - Deletes a binary tree node and its subtrees.
 * @tree: A pointer to the node to delete.
 *
 * This function recursively deletes a tree, including its left and right
 * subtrees, and then frees the node.
 */
void _binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    _binary_tree_delete(tree->left);

    _binary_tree_delete(tree->right);

    free(tree);
}
