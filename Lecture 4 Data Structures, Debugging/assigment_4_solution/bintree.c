#include <stddef.h>
#include <stdlib.h>
#include "bintree.h"

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
	node *new_node = (node *)malloc(sizeof(node));
	new_node->node_id = node_id;
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	if (root == NULL) {
		root = new_node;
	}
	else {
		node *ptr_to_insert = find_children_node_for_insert(root, node_id);
		if (node_id < ptr_to_insert->node_id) {
			ptr_to_insert->left = new_node;
		}
		else {
			ptr_to_insert->right = new_node;
		}

	}
}

// Find the node with node_id, and return its data
int find_node_data(int node_id) {
	node* finded_node = find_children_node_by_id(root, node_id);

	if (finded_node == NULL) {
		return 0;
	}

	return finded_node->data;
}

node* find_children_node_for_insert(node* find_root, int new_node_id) {
	if (new_node_id < find_root->node_id) {
		if (find_root->left != NULL) {
			return find_children_node_for_insert(find_root->left, new_node_id);
		}
		else {
			return find_root;
		}
	}
	else {
		if (find_root->right != NULL) {
			return find_children_node_for_insert(find_root->right, new_node_id);
		}
		else {
			return find_root;
		}
	}
}

node* find_children_node_by_id(node* find_root, int node_id) {
	if (node_id < find_root->node_id) {
		if (find_root->left != NULL) {
			return find_children_node_by_id(find_root->left, node_id);
		}
		else {
			return NULL;
		}
	}
	else {
		if (node_id > find_root->node_id) {
			if (find_root->right != NULL) {
				return find_children_node_by_id(find_root->right, node_id);
			}
			else {
				return NULL;
			}
		}
		else {
			return find_root;
		}
	}
}
///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id. 
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	
}
*/
