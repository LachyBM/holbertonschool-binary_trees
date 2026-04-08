#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder- func goes through pinary tree using in order
 * @tree: pointer to root
 * @func: fpoint to fun call
 * Return: nothing if tree/func == NULL
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
