#include "monty.h"

/**
* _sub - substracts the top two elements of the stack.
* @stack: the stack
* @line_number: line number
* @value: value
*/

void _sub(stack_t **stack, unsigned int line_number, char *value)
{
	/*(void)value;*/
	int difference = 0;

	if (!*stack || !(*stack)->next)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	difference = (*stack)->n + (*stack)->next->n;
	_pop(stack, line_number, value);
	(*stack)->n = difference;
}