#include "main.h"

/**
 * get_input - read input from the user
 * @prompt: the prompt to display to the user
 * Return: a pointer to the input string
 */

char *get_input(char *prompt)
{
	char *line = NULL;
	size_t line_size = 0;
	ssize_t line_length;

	printf("%s", prompt);
	fflush(stdout);

	line_length = getline(&line, &line_size, stdin);

	if (line_length == -1)
	{
		printf("\n");
		exit(EXIT_SUCCESS);
	}

	if (line[line_length - 1] == '\n')
	{
		line[line_length - 1] = '\0';
	}
	return (line);
	free(line);
}
