#include "queue.h"


void init(queue *q){
    q->front = q->rear = NULL;
    q->size = 0;
}

int enqueue(queue *q, int val){
    node* new = (node*)malloc(sizeof(node));
    if(new == NULL) return 0;
    new->data = val;
    new->next = NULL;
    ++q->size;
    if(q->front == NULL)
        q->front = q->rear = new;
    else{
        q->rear->next = new;
        q->rear = new;
    }
    return 1;
}

int dequeue(queue *q){
    if(isEmpty(q)) return 0;
    node* old = q->front;
    q->front = q->front->next;
    free(old);
    if (q->front == NULL) {
        q->rear = NULL;
    }
    --q->size;
    return 1;
}

int isEmpty(queue *q){
    return q->size == 0;
}

int size(queue *q){
    return q->size;
}

void clear(queue *q){
    while (!isEmpty(q)){
        dequeue(q);
    }
}

int front(queue *q){
    if(q->front == NULL) return -1;
    return q->front->data;
}
