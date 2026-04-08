#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder- func goes through pinary tree using post order
 * @tree: pointer to root
 * @func: fpoint to fun call
 * Return: nothing if tree/func == NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
