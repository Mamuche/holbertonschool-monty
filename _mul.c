#include "monty.h"

/**
* _mul - multiplies the second element of the stack with the top one
* @stack: the stack
* @line_number: line number
* @value: value
*/

void _mul(stack_t **stack, unsigned int line_number, char *value)
{
	if (!*stack || !(*stack)->next)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	_pop(stack, line_number, value);
}
