#include <stdlib.h>
#include <stdio.h>

#include "Linkedlist.h"



Node *append(Node *head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    Node *n = head;
    while (n->next != NULL) {
        n = n->next;
    }
    n->next = newNode;
    return head;
}

int length(Node *head) {
    int len = 0;
    Node *n = head;
    while (n != NULL) {
        len++;
        n = n->next;
    }
    return len;
}

int get (Node *head, int index) {
    int i = 0;
    Node *n = head;
    while (n != NULL) {
        if (i == index) {
            return n->data;
        }
        i++;
        n = n->next;
    }
    return -1;
}

Node *delete_first_node(Node *head) {
    if (head == NULL) {
        return NULL;
    }
    Node *n = head;
    head = head->next;
    free(n);
    return head;
}

Node *delete_tail(Node *head) {
    if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    Node *n = head;
    Node *prev = NULL;
    while (n->next != NULL) {
        prev = n;
        n = n->next;
    }
    prev->next = NULL;
    free(n);
    return head;
}

int delete (Node *head, int index) {
    if (head == NULL)
        return 0;
    if (index >= length(head) || index < 1) {
        return -1;
    }
    Node *prev = head,*current;
    int i = 0;
    while (i < index-1) {
        prev = prev->next;
        i++;
    }
    current = prev->next;
    prev->next = current->next;
    free(current);
    return 1;
}

Node *insert_first(Node *head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void printlist (Node *head) {
    Node *n = head;
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

