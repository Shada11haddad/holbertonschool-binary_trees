#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if the node has no uncle,
 *         or if the node, parent, or grandparent is NULL.
 *
 * Description: This function checks if the node, its parent, and its
 *grandparent
 *              are valid. If the grandparent is present, it checks if the
 *parent
 *              is the left child of the grandparent. If so, it returns the
 *right
 *              child of the grandparent as the uncle; otherwise, it returns
 *the
 *              left child of the grandparent.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

	return (NULL);
}
