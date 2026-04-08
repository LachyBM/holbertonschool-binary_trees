#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full- if node is leaf
 * @tree: checking node
 * Return:if node NULL = 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
