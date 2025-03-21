#include <stdio.h>
#include <stdlib.h>

#define data_type int

typedef struct node{
    int val;
    struct node *next;
} node;

typedef struct stack{
    node *top;
    int size;
} stack;

void init(stack *s);

int isEmpty(stack *s);

int push(stack *s, data_type val);

int pop(stack *s);

data_type top(stack *s);

int size(stack *s);

void clear(stack *s);

int main(){
    return 0;
}

void init(stack *s) {
    s->top = NULL;
    s->size = 0;
}

int isEmpty(stack *s) {
    return s->top == NULL;
}

int push(stack *s, data_type val) {
    node *new = (node *)malloc(sizeof(node));
    if (new == NULL)
        return 0;
    new->val = val;
    new->next = s->top;
    s->top = new;
    s->size++;
    return 1;
}

int pop(stack *s) {
    if (!isEmpty(s)) {
        node *temp = s->top;
        s->top = s->top->next;
        free(temp);
        s->size--;
        return 1;
    }
    return 0;
}

data_type top(stack *s) {
    if (!isEmpty(s)) {
        return s->top->val;
    }
    return -1;
}

int size(stack *s) {
    return s->size;
}

void clear(stack *s) {
    while (!isEmpty(s)){
        pop(s);
    }
}

