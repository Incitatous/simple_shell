#include "holberton.h"
/**
 * main - Prints argc execpt executable
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
	write(STDOUT_FILENO, "$ ", 2);
	res = getline(&buffer, &max, stdin);
	/* remember to free linked list if res == -1 */
	while (res != /* same as EOF*/-1)
	{
		args = parser(buffer);
		check_path(buffer, head, args, env);
		/*write(STDOUT_FILENO, buffer, res); has to be taken out?*/
		write(STDOUT_FILENO, "$ ", 2);
		res = getline(&buffer, &max, stdin);
	}
	free(buffer);
	exit(0);
}
