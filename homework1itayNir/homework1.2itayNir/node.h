#ifndef NODE_H
#define NODE_H
#include <iostream>

typedef struct node
{
	unsigned int value;
	node* next;
} node;
bool isListEmpty(node* head);
void insert(node** head, unsigned int value);
void take(node** head);
void deleteNodes(node* head);
#endif // NODE_H