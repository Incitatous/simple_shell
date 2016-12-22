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
		exit(1); /* last addition */
	}
	write(STDOUT_FILENO, "o_o$ ", 5);
	res = getline(&buffer, &max, stdin);
	/* remember to free linked list if res == -1 */
	while (res != /* same as EOF*/-1)
	{
		args = parser(buffer);
		if (myBuiltins(args) == 0)
			if (check_path(buffer, head, args, env) == 0)
				write(STDOUT_FILENO, "Command not found\n", 18); 
		write(STDOUT_FILENO, "\\^O^/$ ", 7);
		res = getline(&buffer, &max, stdin);
	}
	/* last addition */
	free(args);
	free(buffer);
	/* FREEDOM !! linked list */
	_free(head);	
	exit(0);
}
