#define Max_Size 100005
#define data_type int
typedef struct {
    data_type arr[Max_Size];
    int top;
} stack;

void init(stack *s);

int isEmpty(stack *s);

int isFull(stack *s);

int push(stack *s, data_type val);

int pop(stack *s);

data_type top(stack *s);

int size(stack *s);

void clear(stack *s);



void init(stack *s) {
    s->top = -1;
}

int isEmpty(stack *s) {
    return s->top == -1;
}

int isFull(stack *s) {
    return s->top == Max_Size - 1;
}

int push(stack *s, data_type val) {
    if (!isFull(s)) {
        s->arr[++s->top] = val;
        return 1;
    }
    return 0;
}

int pop(stack *s) {
    if (!isEmpty(s)) {
        --s->top;
        return 1;
    }
    return 0;
}

data_type top(stack *s) {
    if (!isEmpty(s)) {
        return s->arr[s->top];
    }
    return -1;
}

int size(stack *s) {
    return s->top + 1;
}

void clear(stack *s) {
    s->top = -1;
}

