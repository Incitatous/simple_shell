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
	int res;

	res = 0;
	path = malloc(1000);
	if (checkSlash(args[0]))
	{
		res = _launch(args[0], args, envp);
	}
	while (store != NULL)
	{	
		strcpy(path, store->str);
		strcat(path, "/");
		strcat(path, checker);
		store = store->next;
		if (access(path, X_OK) == 0)
		/* execute _launch.c if token is a command found in PATH */
			res = _launch(path, args, envp);
	}
	free(path);
	return (res);
}

/**
 * checkSlash - checks if there is a slash in token
 *
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
