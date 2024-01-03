#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: the stack
 * @line_number: line number
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int temp = 0;

	if (!*stack || !(*stack)->next)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
