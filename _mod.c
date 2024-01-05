#include "monty.h"

/**
* _mod - computes the rest of the division of
* the second element of the stack by the top one
* @stack: the stack
* @line_number: line number
* @value: value
*/

void _mod(stack_t **stack, unsigned int line_number, char *value)
{
	if (!*stack || !(*stack)->next)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n;
	_pop(stack, line_number, value);
}
