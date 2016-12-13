#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *buffer;
	ssize_t max;
	ssize_t res;

	max = 100;
	buffer = (char *)malloc(max * sizeof(char));
	printf("$ ");
	res = getline(&buffer, &max, stdin);
	while (res != EOF)
	{
		printf("%s", buffer);
		printf("$ ");
		res = getline(&buffer, &max, stdin);
	}
}
