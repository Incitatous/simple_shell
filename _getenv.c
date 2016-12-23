#include "holberton.h"
/**
 * _getenv - gets the env
 * @name: SE
 * Return: Always 0.
 */
char *_getenv(char *name)
{
	/*char **environ;*/
	int i;
	char *tokHolder;

	i = 0;
	while (tokHolder)
	{
		tokHolder = strtok(environ[i], "=");
		if (_strcmp(name, tokHolder) == 0)
		{
			tokHolder = strtok(NULL, "=");
			/* testing printf("%s\n", tokHolder);*/
			return (tokHolder);
		}
		i++;
	}
	return (0);
}
