#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to root node to count the number of nodes.
 * Return: 0 if NULL node count if not
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ncount = 0;

	if (tree)
	{
		ncount += (tree->left || tree->right) ? 1 : 0;
		ncount += binary_tree_nodes(tree->left);
		ncount += binary_tree_nodes(tree->right);
	}
	return (ncount);
}
