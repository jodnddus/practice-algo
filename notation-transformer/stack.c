#include "stack.h"

void initStack(stack* stack)
{
	stack->top = -1;
}

int isEmpty(stack* stack)
{
	if (stack->top == -1)
		return 1;
	else
		return 0;
}

void push(stack* stack, Data data)
{
	if (stack->top > 19)
	{
		fprintf(stderr, "%s\n", "stack was full!");
		exit(-1);
	}

	stack->top += 1;
	stack->data[stack->top] = data;	
}	

Data pop(stack* stack)
{
	if (isEmpty(stack) == 1)
	{
		fprintf(stderr, "%s\n", "memory error!");
		exit(-1);
	}

	Data tempData = stack->data[stack->top];	
	stack->top -= 1;
	return tempData;
}

Data peek(stack* stack)
{
	if (isEmpty(stack) == 1)
	{
		fprintf(stderr, "%s\n", "memory error!");
		exit(-1);
	}

	return stack->data[stack->top];
}

void print(stack* stack)
{
	if (isEmpty(stack) == 1)
	{
		fprintf(stderr, "%s\n", "memory error!");
		exit(-1);
	}

	for (int i=0; i < (stack->top)+1; i++)
	{
		printf("%d\n",stack->data[i]);
	}
}
