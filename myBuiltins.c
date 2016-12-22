#include "holberton.h"
/**
 * myBuiltins - Checks if builtins exist and if so executes
 *
 * @args: commands passed
 * Return: Always 0 or 1
 */
int myBuiltins(char **args)
{
	int i;

	i = 0;
	builtins commands[] = {
		{"env", printenv},
		{"exit", my_exit},
		/*{"cd", _cd},*/
		{NULL, NULL}
	};
	while (commands[i].s != NULL)
	{
		if (_strcmp(args[0], commands[i].s) == 0)
		{
		/*checks if builtin exists and if so, executes & returns 1 */
			(commands[i].function)(args[0]);
			return (1);
		}
		i++;
	}
	return (0);
}
