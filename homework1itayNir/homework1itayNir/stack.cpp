#include "stack.h"

void push(Stack* s,unsigned int element) {/*
	inserts to  top stack
	*/
	insert(&(s->head),element);
}
void initStack(Stack* s) { /* constructor-- basicly*/
	node* temp = new node; 
	s->head = temp;
	s->head->value = NULL;
}
void cleanStack(Stack* s) { /* frees everything */
	delete(s->head); 
}
bool isEmpty(Stack* s) { /* checks if empty*/
	return isListEmpty(s->head);
}
 int pop(Stack* s) {/*takes out of the stack returning the value*/
	unsigned int value = 0;
	if (!isEmpty(s)) {
		value = s->head->value;
		take(&(s->head));
		return value;
	}
	return -1;
}
bool isFull(Stack* s) {
	/*if you used all memory in your pc maybe its full i dont know but by that point i think vs wont allow it*/
return false;
}