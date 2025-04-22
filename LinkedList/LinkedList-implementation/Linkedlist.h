#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *append(Node *head, int data);
int length(Node *head);
int get(Node *head, int index);
Node *delete_first_node(Node *head);
Node *delete_tail(Node *head);
int delete(Node *head, int index);
Node *insert_first(Node *head, int data);
void printlist(Node *head);

#endif
