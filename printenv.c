#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main()
{
	extern char **environ;
	int i;

	i = 0;
	while (environ[i])
	{
		printf("%s\n", environ[i++]);
	}
	return (0);
}
