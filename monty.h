#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
extern int global_var;
int global_var;
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
	void (*f)(stack_t **stack, unsigned int line_number, char *buf);
} instruction_t;

void push_func(stack_t **stack, unsigned int line_number, char *buf);
void pall_func(stack_t **stack, unsigned int line_number, char *buf);

void freestack(stack_t *head);
void get_func(char *op, unsigned int line_number);
char *get_tokens(char *line, unsigned int line_number);
void pint_func(stack_t **stack, unsigned int line_number, char *buf);
void pop_func(stack_t **stack, unsigned int line_number, char *buf);
void swap_func(stack_t **stack, unsigned int line_number, char *buf);
void add_func(stack_t **stack, unsigned int line_number, char *buf);
void sub_func(stack_t **stack, unsigned int line_number, char *buf);
void div_func(stack_t **stack, unsigned int line_number, char *buf);
void mul_func(stack_t **stack, unsigned int line_number, char *buf);
int is_number(char *s);
void free_stack(stack_t *head);
#endif
