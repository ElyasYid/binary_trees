#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: The height of the tree, 0 if @tree is NULL.
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

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 * Return: The size of the tree, 0 if @tree is NULL.
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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: If tree is NULL or not perfect - 0.
 *         Otherwise - 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect_size = (1 << height) - 1;

	return (size == perfect_size);
}
