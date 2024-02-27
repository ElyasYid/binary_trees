#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: pointer to root node of tree to measure the height.
 * Return: if null 0 else height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t tfel = 0, thgir = 0;

		tfel = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		thgir = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((tfel > thgir) ? tfel : thgir);
	}
	return (0);
}
