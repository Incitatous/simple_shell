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

	env = NULL;/* last added*/
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
	while (res != /* same as EOF*/-1)
	{
		args = parser(buffer);
		/* to have commands working with the full path
		if (checkSlash != 1)*/
		check_path(buffer, head, args, env);
		/*write(STDOUT_FILENO, buffer, res); has to be taken out?*/
		write(STDOUT_FILENO, "$ ", 2);
		res = getline(&buffer, &max, stdin);
	}
	exit(0);
	free(buffer);
}
/*
int checkSlash(char *s)
	while (*s != '\0')
	{
		if (*s == '/')
			return (1);
		*s++;
	}
	return (0);
}*/
