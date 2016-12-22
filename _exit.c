#include "holberton.h"

int my_exit(char **args)
{
	free(args);
	exit(98);
}
