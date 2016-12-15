#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *buffer;
	ssize_t max;
	ssize_t res;

	max = 100;
	buffer = (char *)malloc(max * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		exit(1); /* last addition */
	}
	write(STDOUT_FILENO, "$ ", 2);
	res = getline(&buffer, &max, stdin);
	while (res != EOF)
	{
		write(STDOUT_FILENO, buffer, res);
		write(STDOUT_FILENO, "$ ", 2);
		res = getline(&buffer, &max, stdin);
	}
	exit(0); /* last addition*/
	free(buffer);
}
