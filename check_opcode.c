#include "monty.h"

/**
* check_opcode - checks opcodes
* @opcode: the opcode to check
* @stack: stack to check in
* @line_number: line number
*/
void check_opcode(char *opcode, stack_t **stack, unsigned int line_number)
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
			functions[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
