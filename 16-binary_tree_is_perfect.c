#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL or is a leaf node
 *
 * Description: This function recursively calculates the height
 *of a binary tree.
 * The height of a tree is defined as the number of edges from the root to the
 * farthest leaf. If the tree is NULL or a leaf node, the height
 *is considered 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return ((height_left > height_right ? height_left : height_right) + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 if the tree is not perfect
 *
 * Description: This function checks if the binary tree is perfect by verifying
 * that all levels are fully filled, and all leaf nodes are at the same level.
 * It uses recursion to check the height of the left and right subtrees,
 * and ensures both subtrees are perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int heightleft, heightright;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);

	if (heightleft != heightright)
		return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
