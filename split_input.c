#include "main.h"

/**
 * split_input - splits the input string into an array of arguments
 * @input: the input string to split
 * Return: an array of pointers to the arguments
 */

char **split_input(char *input)
{
	char *token = strtok(input, " ");
	char **args = malloc(256 * sizeof(char *));
	int arg_count = 0;

	while (token != NULL)
	{
		args[arg_count++] = token;
		token = strtok(NULL, " ");
	}
	args[arg_count] = NULL;

	return (args);
}
