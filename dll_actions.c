#include "monty.h"

/**
 * push_func - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
 */

void push_func(stack_t **stack, unsigned int line_number, char *buf)
{
	stack_t *new = NULL;
	int global_var;

	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	global_var = atoi(buf);
	new->n = global_var;
	new->prev = NULL;
	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
		return;
	}
	new->next = *stack;
	(*stack)->prev = new;
	*stack = new;
}

/**
 * pall - prints the data of all nodes in stack
 * @stack: pointer to the head node pointer of stack
 * @nline: the line number
 * Return: nothing
 */

void pall_func(stack_t **stack, unsigned int nline, char *buf)
{
	stack_t *temp;
	(void)nline;
	(void) *buf;
	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
