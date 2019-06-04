#include <stdio.h>
#include <stdlib.h>

typedef char Data;

typedef struct stack {
	Data data[20];
	int top;
} stack;

void initStack(stack* stack);
int isEmpty(stack* stack);
void push(stack* stack, Data data);
Data pop(stack* stack);
Data peek(stack* stack);
void print(stack* stack);
