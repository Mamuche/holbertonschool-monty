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
		dprintf(1, "%d\n", node->n);
	else
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
