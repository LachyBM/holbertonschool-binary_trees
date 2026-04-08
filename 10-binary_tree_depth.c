#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_depth- if node is leaf
 * @tree: pointer
 * Return: value of depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		i++;
	}

	return (i);
}
