#include "stack.h"

int main()
{
	stack stack;

	initStack(&stack);

	push(&stack, 1);
    push(&stack, 4);
    push(&stack, 5);
    push(&stack, 3);
    push(&stack, 1);

	print(&stack);

	return 0;
}
