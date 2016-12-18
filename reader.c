#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int main(int argc, char *argv[], char *env[])
{
	char *buffer;
	char **line;
	ssize_t max;
	ssize_t res;
	kina_san *head;

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
	while (res != /*EOF*/-1)
	{
		parser(buffer);
		check_path(buffer, head);
		write(STDOUT_FILENO, buffer, res);
		write(STDOUT_FILENO, "$ ", 2);
		res = getline(&buffer, &max, stdin);
     		/*parser(buffer);
		check_path(buffer, head);*/
	}
	exit(0); /* last addition*/
	free(buffer);
}
