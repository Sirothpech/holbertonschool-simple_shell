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
	char *path = _getenv("PATH");
	char *input, *envp[2];

	while (1)
	{
		input = get_input(prompt);
		args = split_input(input);
		if (args[0] == NULL)
		{
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
			set_path_envp(envp, path);
			execute_command(args[0], args, envp);
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
