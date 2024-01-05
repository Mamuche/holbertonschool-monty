#include "monty.h"

/**
* _pstr  - prints the string starting at the top of the stack
* @stack: the stack
* @line_number: line number
* @value: value
*/
void _pstr(stack_t **stack, unsigned int line_number, char *value)
{
	(void)value;
	(void)line_number;
	stack_t *node = *stack;

	while (node->n)
	{
		if (node->n < 0 || node->n > 127)
			break;
		dprintf(1, "%c", node->n);
		node = node->next;
	}
	printf("\n");
}
