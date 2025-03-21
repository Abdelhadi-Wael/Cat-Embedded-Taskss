#include <stdio.h>
#include <stdlib.h>
#define dataType int
typedef struct queue {
    dataType *data;
    int front , rear , size , MAX_SIZE;
}queue;

void init(queue * , int );

int enqueue(queue *, int);

int dequeue(queue *);

int isEmpty(queue *);

int isFull(queue *);

int size(queue *);

void clear(queue *);

void destroy(queue *);

dataType front(queue *);

