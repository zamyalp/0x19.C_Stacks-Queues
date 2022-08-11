#include "monty.h"

/**
 * get_func - matches opcode from input to existing opcode in stuct
 * @op: character to check
 * @line_number: line number
 * Return: the pointer to the appropriate functiom or NULL if nothing matches
 */

void get_func(char *op, unsigned int line_number)
{
	instruction_t find_op[] = {
		{"push", push_func},
		{"pall", pall_func},
		/**
		{"pint", pint_func},
		{"pop", pop_func},
		{"nop", NULL},
		{"add", add_func},
		{"swap", swap_func},
		{"sub", sub_func},
		{"div", div_func},
		{"mul", mul_func},
		*/
		{NULL, NULL}
	};
	int index = 0;

	while (find_op[index].opcode != NULL)
	{
		if (strcmp(find_op[index].opcode, op) == 0)
			return;
		index++;
	}
		printf("L%d: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
}
