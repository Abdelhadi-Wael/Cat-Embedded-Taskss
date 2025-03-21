#include "queue.h"

int main() {
    queue q;
    init(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    printf("front :%d\n", front(&q));
    dequeue(&q);
    printf("front :%d\n", front(&q));

    enqueue(&q, 4);
    enqueue(&q, 5);
    printf("size :%d\n", size(&q));

    while (!isEmpty(&q)) {
        printf("%d ", front(&q));
        dequeue(&q);
    }
    printf("\n");

    printf("%d\n", isEmpty(&q));

    return 0;
}
