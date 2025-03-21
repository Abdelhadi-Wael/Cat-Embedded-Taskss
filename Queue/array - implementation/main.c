#include "queue.h"
#include <stdio.h>

int main() {
    queue q;
    init(&q,10);
    printf("is empty : %d\n" , isEmpty(&q));
    for(int i = 1 ; i <= 10 ; i++){
        enqueue(&q,i);
    }
    printf("is full : %d\n" , isFull(&q));
    printf("size = %d\n",size(&q));
    printf("front = %d\n",front(&q));
    dequeue(&q);
    printf("size = %d\n",size(&q));
    printf("front = %d\n",front(&q));
    while (!isEmpty(&q)) {
        printf("%d ", front(&q));
        dequeue(&q);
    }
    printf("\nsize = %d" , size(&q));
    destroy(&q);
    return 0;
}