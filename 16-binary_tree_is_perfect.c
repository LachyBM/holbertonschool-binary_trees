#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size- total nodes
 * @tree: pointer
 * Return: value of depth
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height- total nodes
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
 * binary_tree_is_perfect- if node is leaf
 * @tree: checking node
 * Return:if node NULL = 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect = (1 << height) - 1;

	return (size == perfect);
}
