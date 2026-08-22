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
