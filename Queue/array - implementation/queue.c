#ifndef QUEUE_H
#define QUEUE_H
#include "queue.h"


void init(queue *q , int MAX_SIZE){
    q->front = q->rear = 0;
    q->size = 0;
    q->MAX_SIZE = MAX_SIZE;
    q->data = malloc(sizeof(dataType) * MAX_SIZE);
}

int enqueue(queue *q, int val){
    if(isFull(q)) return 0;
    q->data[q->rear] = val;
    q->rear = (q->rear + 1) % q->MAX_SIZE;
    ++q->size;
    return 1;
}

int dequeue(queue *q){
    if(isEmpty(q)) return 0;
    q->front = (q->front + 1) % q->MAX_SIZE;
    --q->size;
    return 1;
}

int isEmpty(queue *q){
    return q->size == 0;
}

int isFull(queue *q){
    return q->size == q->MAX_SIZE;
}

int size(queue *q){
    return q->size;
}

void clear(queue *q){
    q->front = q->rear = q->size = 0;
}

void destroy(queue *q){
    free(q->data);
    q->data = NULL;
}

dataType front(queue *q){
    return q->data[q->front];
}
#endif