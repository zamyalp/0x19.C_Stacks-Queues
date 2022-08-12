#ifndef MONTY_H
#define MONTY_H

<<<<<<< HEAD

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>


=======
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
>>>>>>> 75264b8f45117ce8f45785e10025b1cb13d7cffe
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
<<<<<<< HEAD
 * for stack, queues, LIFO, FIFO Holberton school project
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct functions_s - opcode and it's function.
 * @opcode: The opcode
 * @f: Function to execute the opcode.
 */
typedef struct functions_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} functions_t;

void get_func(char *op_code, stack_t **stack, unsigned int line_number);
void stack_push(stack_t **stack, unsigned int line_number);
void add_to_stack(stack_t **head, const int n);
void _pall(stack_t **stack, unsigned int lin_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void monty_pchar(stack_t **stack, unsigned int line_number);
void monty_pstr(stack_t **stack, unsigned int line_number);
void monty_rotl(stack_t **stack, unsigned int line_number);
void monty_rotr(stack_t **stack, unsigned int line_number);

/* Arithmetic operations functions */
void monty_add(stack_t **stack, unsigned int line_number);
void monty_sub(stack_t **stack, unsigned int line_number);
void monty_div(stack_t **stack, unsigned int line_number);
void monty_mul(stack_t **stack, unsigned int line_number);
void monty_mod(stack_t **stack, unsigned int line_number);

/* On exit functions */
void free_stack(int status, void *arg);
void free_lineptr(int status, void *arg);
void file_close(int status, void *arg);


#endif /* MONTY_H */
=======
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
>>>>>>> 75264b8f45117ce8f45785e10025b1cb13d7cffe
