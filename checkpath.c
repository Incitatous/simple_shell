#include "holberton.h"
/**
 * check_path - Appends the command at the end of each token from the PATH
 *
 * @args: arguments
 * @envp: environment
 * @store: tokens
 * @checker: command passed
 * Return: res
 */
int check_path(char *checker, pathlist *store, char **args, char **envp)
{
	char *path;

	path = malloc(1000);
	if (checkSlash(args[0]))
	{
		if (access(args[0], X_OK) == 0)
		{
			_launch(args[0], args, envp);
			free(path);
			return (1);
		}
	}
/*	if (args[0] == "env")		*/
	while (store != NULL)
	{
		_strcpy(path, store->str);
		_strcat(path, "/");
		_strcat(path, checker);
		store = store->next;
		if (access(path, X_OK) == 0)
		{
		/* execute _launch.c if token is a command found in PATH */
			_launch(path, args, envp);
			free(path);
			return (1);
		}
	}
	free(path);
	return (0);
}

/**
 * checkSlash - checks if there is a slash in token
 *
 * @s: string passed
 * Return: Always 1 or 0
 */
int checkSlash(char *s)
{
	while (*s != '\0')
	{
		if (*s == '/')
			return (1);
		s++;
	}
	return (0);
}
