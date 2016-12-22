#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int printenv(void)
{
	int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}
	return (0);
}
