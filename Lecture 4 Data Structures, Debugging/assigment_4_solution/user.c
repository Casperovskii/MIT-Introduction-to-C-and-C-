#include <stdio.h>
#include "bintree.h"

int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/

	insert_node(5, 23);
	insert_node(4, 20);
	insert_node(3, 14);
	insert_node(6, 43);
	insert_node(8, 10);
	insert_node(7, 15);
	
	int data;
	data = find_node_data(8);
	printf("finded data: ");
	printf("%d\n", data);

	data = find_node_data(3);
	printf("finded data: ");
	printf("%d\n", data);
	return 0;
}
