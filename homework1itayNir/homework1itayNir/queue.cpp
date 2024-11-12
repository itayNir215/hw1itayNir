#include "queue.h"

int dequeue(Queue* q){/*
    this function takes value of first in queue(first to be inserted, not [0]
    input:queue output: value
    */
    if (!isEmpty(q)) {
        unsigned int temp = q->elements[q->removed % q->maxSize];
        q->elements[q->removed % q->maxSize] = 0;
        q->removed++;
        q->count--;
        return temp;
    }
    return -1;
}

void enqueue(Queue* q, unsigned int newValue) {
    /*
     this function 
    */
    if (!isFull(q)) {
        q->elements[(q->removed + q->count) % q->maxSize] = newValue;
        q->count++;
    }
}

void cleanQueue(Queue* q) { 
    delete q->elements; 
}

void initQueue(Queue* q, unsigned int size) {
    unsigned int* newArray = new unsigned int[size];
    q->elements = newArray;
    q->maxSize = size;
    q->count = 0;
    q->removed = 0;
}
bool isEmpty(Queue* s) { return s->count==0; }
bool isFull(Queue* s) {
    return s->count == s->maxSize;
}