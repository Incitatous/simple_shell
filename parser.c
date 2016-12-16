#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **parser(char *res)
{
	char *tok;
	char **store;
	ssize_t max;
	int i, j, k, l;

	max = 100;
	tok = strtok(res, " \t");
	i = j = k = 0;
	while (res[i] != '\0')
	{
		if (res[i] != ' ' && res[i] != '\t')
			k = 0;
		if (res[i] != ' ' && res[i] != '\t' && k == 0)
		{
			k = 1;
			j++;
		}
		
		i++;
	}
	store = malloc(sizeof(char *) * (j + 1));
	if (store == NULL)
		return(NULL);
	i = 0;
	store[i] = tok;
	while (tok != '\0')
	{
		printf("%s\n", tok);
		tok = strtok(NULL, " \t");
		store[i] = tok;
		i++;
	}
	return (store);
}

int wordlength(char *word)
{
	int i, wc;

	wc = 0;
	while (word[i] != ' ' && word[i] != '\t' &&  word[i] != '\0')
		wc++;
	return(wc);
}
