#include <stdio.h>
#include "Linkedlist.h"

int main() {
    Node* head = NULL;

    head = insert_first(head, 10);
    head = insert_first(head, 20);
    head = insert_first(head, 30);
    printlist(head);// 30 -> 20 -> 10 -> NULL

    head = append(head, 40);
    head = append(head, 50);
    printlist(head);// 30 -> 20 -> 10 -> 40 -> 50 -> NULL

    printf("Element at index 2: %d\n", get(head, 2)); // 10
    printf("Length: %d\n", length(head)); // 5

    head = delete_first_node(head);
    printlist(head); // 20 -> 10 -> 40 -> 50 -> NULL
    head = delete_tail(head);
    printlist(head); // 20 -> 10 -> 40 -> NULL

    return 0;
}
