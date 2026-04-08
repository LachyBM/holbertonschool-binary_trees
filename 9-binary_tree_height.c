#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height- if node is leaf
 * @tree: pointer
 * Return: value of depth
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lNode, rNode = 0;

	if (tree == NULL)
		return (0);

	lNode = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rNode = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	if (lNode > rNode)
		return (lNode);
	return (rNode);
}
