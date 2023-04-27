#include "main.h"

/**
 * main - function main
 * Return: 0
 */

int main(void)
{
	char prompt[] = "$ ";
	char **args;
	pid_t pid;
	int status;
	char *input;

	while (1)
	{
		printf("%s", prompt);
		input = get_input(line);
		args = split_input(input);
		if (args[0] == NULL || args[0][0] == '\0')
		{
			free(input);
			free(args);
			continue;
		}
		if (strcmp(args[0], "exit") == 0)
		{
			break;
		}
		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			execute_command(args[0], args);
		}
		else
		{
			waitpid(pid, &status, 0);
		}
		free(input);
		free(args);
	}
	free(input);
	free(args);
	return (0);
}
