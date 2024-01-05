#include "monty.h"


/**
 * _add - adds the top two elements of the stack.
 * @stack: the stack
 * @line_number: line number
 * @value: value
*/

void _add(stack_t **stack, unsigned int line_number, char *value)
{
	/*(void)value;*/
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	_pop(stack, line_number, value);
	(*stack)->n = sum;
}
