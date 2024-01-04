#include "monty.h"
/**
* _push - pushes an element to the stack
* @stack: the stack
* @line_number: line number
* @value: value
*/
void _push(stack_t **stack, unsigned int line_number, char *value)
{
	(void)line_number;

	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		free(new_node);
		dprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->prev = NULL;
	new_node->n = atoi(value);
	new_node->next = *stack;

	*stack = new_node;
}
