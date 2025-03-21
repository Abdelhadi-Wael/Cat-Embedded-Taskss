#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

typedef struct queue {
    node* front;
    node* rear;
    int size;
}queue;


void init(queue *);

int enqueue(queue *, int);

int dequeue(queue *);

int isEmpty(queue *);

int size(queue *);

void clear(queue *);

int front(queue *);

#endif