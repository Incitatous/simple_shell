#include "holberton.h"
extern char **environ;
char *_getenv(const char *name)
{
	extern char **environ;
	int i;
	char *tokHolder;

	i = 0;
	while (environ[i])
	{
		tokHolder = strtok(environ[i], "=");
		if (strcmp(tokHolder, name) == 0)
		{
			tokHolder = strtok(NULL, "=");
			/* testing printf("%s\n", tokHolder);*/
			return (tokHolder);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%s\n", _getenv("PATH"));
}
*/
