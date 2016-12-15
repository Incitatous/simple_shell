#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ADD A MALLOC FOR EACH TOKEN: USE A STRLEN TO COUNT THEIR LENGTH FIRST?*/
int main(void)
{
	char *buffer, *tok;
	ssize_t max;
	ssize_t res;

	max = 100;
	buffer = (char *)malloc(max * sizeof(char));
	printf("$ ");
	res = getline(&buffer, &max, stdin);
	tok = strtok(buffer, " \t");
	while (tok != '\0')
	{
		malloc(
		printf("%s\n", tok);
		tok = strtok(NULL, " \t");
	}
	return (0);
}
