#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder- func goes through pinary tree using pre order
 * @tree: pointer to root
 * @func: fpoint to fun call
 * Return: nothing if tree/func == NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
