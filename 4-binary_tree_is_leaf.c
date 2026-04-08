#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf- if node is leaf
 * @node: checking node
 * Return:if node NULL = 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
