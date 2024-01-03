#include "monty.h"


/**
 * _add - adds the top two elements of the stack.
 * @stack: the stack
 * @line_number: line number
*/

void _add(stack_t **stack, unsigned int line_number)
{
	/*stack_t *tmp = NULL;*/
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	/*tmp = *stack;
	sum = tmp->next + tmp->next->n;
	tmp->next->n = sum;*/
	_pop(stack, line_number);
	(*stack)->n = sum;
}
