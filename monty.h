#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;

	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;

	void (*f)(stack_t **stack, unsigned int line_number, char *value);

} instruction_t;

void _pall(stack_t **stack, unsigned int line_number, char *value);
void _pop(stack_t **stack, unsigned int line_number, char *value);
void _swap(stack_t **stack, unsigned int line_number, char *value);
void _add(stack_t **stack, unsigned int line_number, char *value);
void _pint(stack_t **stack, unsigned int line_number, char *value);
void _push(stack_t **stack, unsigned int line_number, char *value);
void _nop(stack_t **stack, unsigned int line_number, char *value);
void _sub(stack_t **stack, unsigned int line_number, char *value);
void _div(stack_t **stack, unsigned int line_number, char *value);
void _mul(stack_t **stack, unsigned int line_number, char *value);
void _mod(stack_t **stack, unsigned int line_number, char *value);
void _pchar(stack_t **stack, unsigned int line_number, char *value);
void _pstr(stack_t **stack, unsigned int line_number, char *value);
void _rotl(stack_t **stack, unsigned int line_number, char *value);

void co(char *opcode, stack_t **stack, unsigned int line_number, char *value);
void free_stack(stack_t *stack);

#endif
