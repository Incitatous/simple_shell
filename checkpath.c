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
int check_path(char *checker, kina_san *store, char **args, char **envp)
{
	char *path;
	int res;

	res = 0;
	path = malloc(1000);
	while (store != NULL)
	{
		strcpy(path, store->str);
		strcat(path, "/");
		strcat(path, checker);
		/*printf("%s\n", path);*/
		store = store->next;
		if (access(path, X_OK) == 0)
		/* execute _launch.c */
			res = _launch(path, args, envp);
	}
	return (res);
}
