#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 *
 * Description: This function performs an in-order traversal of a binary tree,
 * starting from the root node. It applies the given function to each node's
 * value, passing the node's value as a parameter to the function.
 * If tree or func is NULL, no action is taken.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

