#include "monty.h"


/**
 * _pop - removes the top element of the stack.
 * @stack: the stack
 * @line_number: line number
 * @value: value
 */

void _pop(stack_t **stack, unsigned int line_number, char *value)
{
	(void)value;
	stack_t *node;

	if (stack == NULL)
	{
		fprintf(2, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	node = *stack;
	*stack = (*stack)->next;
	free(node);
}
