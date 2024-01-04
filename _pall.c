#include "monty.h"

/**
* _pall - prints all the values of the stack
* @stack: the stack
* @line_number: line number
* @value: value
*/
void _pall(stack_t **stack, unsigned int line_number, char *value)
{
	(void)line_number;
	(void)value;
	stack_t *node = *stack;

	while (node != NULL)
	{
		dprintf(1, "%d\n", node->n);
		node = node->next;
	}
}
