#include "monty.h"
/**
* main - main function
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL, *opcode = NULL, *value = NULL;

	size_t len = 0;
	unsigned int count_line = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, file) != -1)
	{
		opcode = strtok(line, " \t\n");
		if (strcmp(opcode, "push") == 0)
		{
			value = strtok(NULL, " \t\n");
		}
		co(opcode, &stack, count_line, value);
		count_line++;
	}
	free(line);
	free_stack(stack);
	fclose(file);
	return (0);
}
