#include "main.h"

/**
 * set_path_envp - Set PATH variable in envp array
 * @envp: Array of environment variables
 * @path: Value of PATH variable
 */
void set_path_envp(char *envp[], char *path)
{
	envp[0] = path;
	envp[1] = NULL;
}
