#include "holberton.h"
/**
 * _launch - Launches a program.
 *
 * @linker: linker
 * @args: list of arguments
 * @envp: environment
 * Return: returns 1 to continue running.
 */
int _launch(char *linker, char **args, char **envp)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(linker, args, envp) == -1)
			printf("error");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&status);
		return (status);
	}
	return (1);
}
