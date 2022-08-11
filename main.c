#include "monty.h"

/**
 * main - reads lines and opens monty file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success, 1 failure
 */

int main(int argc, char *argv[])
{
	FILE *monty;
	ssize_t bytes_read;
	size_t len = 0;
	char *line = NULL;
	char *token =NULL;
	int line_number = 0;
	stack_t *head = NULL;
	char* delim = " \n\r\t";

	(void) head;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		monty = fopen(argv[1], "r");
		if (monty == NULL)
		{
			printf("Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		else
		{
			token = strtok(line, delim);
			while ((bytes_read = getline(&line, &len, monty)) != -1)
			{
				line_number++;
				token = strtok(NULL, delim);
				if (token != NULL)
					get_func(token, line_number);
			}
			free(line);
			fclose(monty);
		}
	}
	return (0);
}
