#include "monty.h"

/**
* _rotl  - rotates the stack to the top
* @stack: the stack
* @line_number: line number
* @value: value
*/
void _rotl(stack_t **stack, unsigned int line_number, char *value)
{
	(void)value;
	(void)line_number;

	stack_t *node1 = *stack, *node2;

	if (!*stack || !(*stack)->next)
		return;
	node2 = (*stack)->next;
	node2->prev = NULL;

	while (node1->next)
		node1 = node1->next;
	node1->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = node1;
	(*stack) = node2;
}
