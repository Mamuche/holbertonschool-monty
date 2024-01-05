#include "monty.h"

/**
* _pchar  - prints the char at the top of the stack
* @stack: the stack
* @line_number: line number
* @value: value
*/
void _pchar(stack_t **stack, unsigned int line_number, char *value)
{
	(void)value;
	stack_t *node = *stack;

	if (!*stack)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (node->n < 0 || node->n > 127)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	dprintf(1, "%c\n", node->n);

}
