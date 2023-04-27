#include "main.h"

/**
 * execute_command - command which execute program
 * @command: command input by user
 * @args: array argument command
 * @envp: array environment
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
			char command_path[PATH_MAX];
			int token_len = strlen(token);
			int command_len = strlen(command);
			int command_path_len = token_len + 1 + command_len + 1;

			if (command_path_len >= (int)sizeof(command_path))
			{
				printf("Erreur: dépassement de tampon.\n");
				exit(EXIT_FAILURE);
			}
			sprintf(command_path, "%.*s/%s",
				(int)(sizeof(command_path) - token_len - 1), token, command);
			if (access(command_path, X_OK) == 0)
			{
				execve(command_path, args, environ);
			}
			token = strtok(NULL, ":");
		}
	}
	printf("Erreur: %s: commande introuvable\n", command);
	free(command);
	free(args);
	exit(127);
}
