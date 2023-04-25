#include "main.h"

/**
 * _getenv - function like getenv built-in
 * @name: name PATH compares
 * Return: returns a pointer to the value in the environment or NULL
 */

char *_getenv(const char *name)
{
	int i = 0;
	size_t name_len = strlen(name);

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, name_len) == 0 && environ[i][name_len] == '=')
		{
			return (&environ[i][name_len + 1]);
		}
		i++;
	}
	return (NULL);
}
