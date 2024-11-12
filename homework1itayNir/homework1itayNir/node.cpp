#include "node.h"
#include <iostream>

bool isListEmpty(node* head){
	/*this function checks if the linkedList is empty
	input: head of list . output: is it empty
	*/
	return head->value==NULL;
}
void insert(node** head, unsigned int value) {
	/*this function inserts a node to the linked list
	 input: pointer to first node and value at new node. output: none
	*/
	node* newHead = new node;
	newHead->next = *head;
	newHead->value = value;
	*head = newHead;
}
void take(node** head) {
	/*this function  removes first node
	* input: pointer to first node output: value at first node
	*/
	node* temp = *head;
	*head = (*head)->next;
	delete temp;
}
void deleteNodes(node* head) {
	/* this function frees all nodes
	* input: first node
	*/
	node* temp = 0;
	while (head->next) {
		temp = head;
		head = head->next;
		delete temp;
	}
	delete head;
}