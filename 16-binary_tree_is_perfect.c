#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (tree == NULL)
        return (0);

    left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    return (left > right ? left : right);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node to measure
 *
 * Return: Size of the tree, 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height = 0, nodes = 0, perfect_nodes = 0;

    if (tree == NULL)
        return (0);

    height = binary_tree_height(tree);
    nodes = binary_tree_size(tree);
    perfect_nodes = (1 << (height + 1)) - 1;

    return (nodes == perfect_nodes);
}
