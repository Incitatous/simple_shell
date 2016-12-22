#include "holberton.h"
/**
 * main - Prints argc except executable
 *
 * Return: Always 0
 */
int main(/*int argc, char *argv[], char *env[]*/)
{
	char **env;
	char *buffer;
	char **args;
	size_t max;
	ssize_t res;
	pathlist *head;

	env = NULL;
	head = NULL;
	buildpath(&head);
	max = 100;
	buffer = (char *)malloc(max * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		exit(1);
	}
	write(STDOUT_FILENO, "o_o$ ", 5);
	res = getline(&buffer, &max, stdin);
	while (res != /* same as EOF*/-1)
	{
		args = parser(buffer);
		/* checks if builtins exist, if not tries the PATH */
		if (myBuiltins(args) == 0)
			if (check_path(buffer, head, args, env) == 0)
				write(STDOUT_FILENO, "Command not found\n", 18);
		write(STDOUT_FILENO, "\\^O^/$ ", 7);
		res = getline(&buffer, &max, stdin);
	}
	free(args);
	free(buffer);
	/* freeing the linked list */
	_free(head);
	exit(0);
}
