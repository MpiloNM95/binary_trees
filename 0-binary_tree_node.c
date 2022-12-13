#incude "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree
 * @parent: is a pointer to the parent
 * @value: the value to put in the new node
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;

	return (new_node);
}
