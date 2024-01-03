#include "monty.h"

/**
* _pint - prints the value at the top of the stack,
* followed by a new line
* @stack: the stack
* @line_number: line number
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (*stack != NULL)
		fprintf(stdout, "%d\n", node->n);
	else
	{
		fprintf(stderr, "L<line_number>: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
}
