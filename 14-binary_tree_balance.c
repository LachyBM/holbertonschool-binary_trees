#include "binary_trees.h"
#include <stdlib.h>

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

	lNode = binary_tree_height(tree->left) + 1;
	rNode = binary_tree_height(tree->right) + 1;

	if (lNode > rNode)
		return (lNode);
	return (rNode);
}

/**
 * binary_tree_balance- if node is root
 * @tree: checking node
 * Return:if node NULL = 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((int)binary_tree_height(tree->left) -
		(int)binary_tree_height(tree->right));
}
