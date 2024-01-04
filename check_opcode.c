#include "monty.h"

/**
* co - checks opcodes
* @opcode: the opcode to check
* @stack: stack to check in
* @line_number: line number
* @value: value
*/
void co(char *opcode, stack_t **stack, unsigned int line_number, char *value)
{
	int i = 0;

	instruction_t functions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"NULL", NULL},
	};

	while (functions[i].opcode != NULL)
	{
		if (strcmp(opcode, functions[i].opcode) == 0)
		{
			functions[i].f(stack, line_number, value);
			return;
		}
		i++;
	}
	dprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
