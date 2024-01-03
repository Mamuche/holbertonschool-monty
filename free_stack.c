#include "monty.c"

/**
* free_stack - frees a stack
* @stack: the stack to free
*/
void free_stack(stack_t *stack)
{
	stack_t *next_stack;

	while (stack != NULL)
	{
		next_stack = stack->next;
		free(stack);
		stack = next_stack;
	}
}
