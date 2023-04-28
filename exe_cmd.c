#include "main.h"

/**
 * execute_command - command which execute program
 * @command: command input by user
 * @args: array argument command
 */

void execute_command(char *command, char *args[])
{
	char *path = _getenv("PATH");

	if (path  == NULL)
	{
		printf("Erreur: la variable d'env PATH n'est pas définie.\n");
		exit(EXIT_FAILURE);
	}
	if (command[0] == '/')
	{
		if (access(command, X_OK) == 0)
		{
			execve(command, args, environ);
		}
	}
	else
	{
		char *token = strtok(path, ":");

		while (token != NULL)
		{
			char *command_path = malloc(strlen(token) + strlen(command) + 2);

			sprintf(command_path, "%s/%s", token, command);

			if (access(command_path, X_OK) == 0)
			{
				execve(command_path, args, environ);
				perror("execve");
				exit(EXIT_FAILURE);
			}
			free(command_path);
			token = strtok(NULL, ":");
		}
	}
	fprintf(stderr, "%s: command not found\n", command);
	free(command);
	free(args);
	exit(127);
}
