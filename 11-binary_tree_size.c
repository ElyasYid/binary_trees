#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: pointer to root node of tree to size up
 * Return: size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sza = 0;

	if (tree)
	{
		sza += 1;
		sza += binary_tree_size(tree->left);
		sza += binary_tree_size(tree->right);
	}
	return (sza);
}
