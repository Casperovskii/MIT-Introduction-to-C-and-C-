#ifndef BINTREE_H
#define BINTREE_H

// Node structure should have an int node_id, an int data, and pointers to left and right child nodes
typedef struct node node;
struct node
{
	int node_id;
	int data;
	node *left;
	node *right;
};

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///
// Declare the tree modification functions below...
void insert_node(int node_id, int data);
int find_node_data(int node_id);
node* find_children_node_for_insert(node* root, int new_node_id);
node* find_children_node_by_id(node* root, int node_id);

#endif
