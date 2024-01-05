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
		fprintf(stdout, "%d\n", node->n);
		node = node->next;
	}
}

#include "monty.h"
/**
* _push - pushes an element to the stack
* @stack: the stack
* @line_number: line number
* @value: value
*/
void _push(stack_t **stack, unsigned int line_number, char *value)
{
	stack_t *new_node;
	int i = 0;

	if (value == NULL)
	{
		dprintf(2, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (value[i])
	{
		if (value[i] == '-')
		{
			i++;
			continue;
		}
		if (value[i] < '0' || value[i] > '9')
		{
			dprintf(2, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free(new_node);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->prev = NULL;
	new_node->n = atoi(value);
	new_node->next = *stack;
	*stack = new_node;
}
