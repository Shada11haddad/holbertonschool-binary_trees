#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if tree is NULL.
 *
 * Description: This function calculates the depth of a node in a binary tree
 * by recursively moving up the tree from the given node to the root. The depth
 * is the number of edges from the node to the root. If the node is NULL,
 * the function returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);
}
