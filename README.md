# binary_trees
binary_trees

Tasks
0. New node
mandatory
Write a function that creates a binary tree node

  
1. Insert left
mandatory
Write a function that inserts a node as the left-child of another node
2. Insert right
mandatory
Write a function that inserts a node as the right-child of another node

3. Delete
mandatory
Write a function that deletes an entire binary tree
4. Is leaf
mandatory
  
5. Is root
mandatory
Write a function that checks if a given node is a root

  
6. Pre-order traversal
mandatory
Write a function that goes through a binary tree using pre-order traversal

  
7. In-order traversal
mandatory
Write a function that goes through a binary tree using in-order traversal

  
8. Post-order traversal
mandatory
Write a function that goes through a binary tree using post-order traversal

  
9. Height
mandatory
Write a function that measures the height of a binary tree

  
10. Depth
mandatory
Write a function that measures the depth of a node in a binary tree

  
11. Size
mandatory
Write a function that measures the size of a binary tree
  
12. Leaves
mandatory
Write a function that counts the leaves in a binary tree
13. Nodes
mandatory
Write a function that counts the nodes with at least 1 child in a binary tree

  
14. Balance factor
mandatory
Write a function that measures the balance factor of a binary tree
15. Is full
mandatory
Write a function that checks if a binary tree is full

Prototype: int binary_tree_is_full(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
  
16. Is perfect
mandatory
Write a function that checks if a binary tree is perfect

Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
17. Sibling
mandatory
Write a function that finds the sibling of a node

Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
Where node is a pointer to the node to find the sibling
Your function must return a pointer to the sibling node
If node is NULL or the parent is NULL, return NULL
If node has no sibling, return NULL
  
18. Uncle
mandatory
Write a function that finds the uncle of a node

Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
Where node is a pointer to the node to find the uncle
Your function must return a pointer to the uncle node
If node is NULL, return NULL
If node has no uncle, return NULL

