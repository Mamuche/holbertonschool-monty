#include "monty.h"

/**
* _pint - prints the value at the top of the stack,
* followed by a new line
* @stack: the stack
* @line_number: line number
* @value: value
*/
void _pint(stack_t **stack, unsigned int line_number, char *value)
{
	(void)value;
	stack_t *node = *stack;

	if (*stack != NULL)
		fprintf(stdout, "%d\n", node->n);
	else
	{
		dprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
