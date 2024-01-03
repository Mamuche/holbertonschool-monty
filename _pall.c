#include "monty.h"

/**
* _pall - prints all the values of the stack
* @stack: the stack
* @line_number: line number
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *node = *stack;

	while (node != NULL)
	{
		fprintf("%d\n", node->n);
		node = node->next;
	}
}
