#include "monty.h"

/**
* _sub - substracts the top two elements of the stack.
* @stack: the stack
* @line_number: line number
* @value: value
*/

void _sub(stack_t **stack, unsigned int line_number, char *value)
{
	if (!*stack || !(*stack)->next)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	 (*stack)->next->n -= (*stack)->n;
	_pop(stack, line_number, value);
}
