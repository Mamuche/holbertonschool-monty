#include "monty.h"
/**
* _push - pushes an element to the stack
* @stack: the stack
* @line_number: line number
*/
void _push(stack_t **stack, unsigned int line_number)
{
	/*get value associated (push <int>)*/
    /*using strtok*/
	int value;

	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->prev = NULL;
	new_node->n = value;
	new_node->next = *stack;

	*stack = new_node;
}
