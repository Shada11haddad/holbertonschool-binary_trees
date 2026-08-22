#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if the node has no sibling
 *         or if the node or parent is NULL.
 *
 * Description: This function checks if the node has a sibling by comparing
 *              the node to its parent's left and right children. If the node
 *              is the left child, the function returns the right child of
 *              the parent and vice versa.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}
