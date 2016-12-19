#include "holberton.h"
/**
 * parser - Parses through and tokenizes the arguments passed
 *
 * @res: command passed
 * Return: store
 */
char **parser(char *res)
{
	char *tok;
	char **store;
	int i, j, k;

	/*tok = strtok(res, " \t");*/
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
	res[i - 1] = '\0'; /* last addition */
	store = malloc(sizeof(char *) * (j + 1));
	if (store == NULL)
		return (NULL);
	tok = strtok(res, " \t");
	store[0] = res;
	i = 1;
	store[i] = tok;
	while (tok != '\0')
	{
		/*printf("%s\n", tok);*/
		tok = strtok(NULL, " \t");
		store[i] = tok;
		i++;
	}
	store[i] = NULL;
	return (store);
}

/**
 * wordlength - Counts the length of each word/token
 *
 * @word: SE
 * Return: wc
 */
int wordlength(char *word)
{
	int i, wc;

	i = wc = 0;
	while (word[i] != ' ' && word[i] != '\t' &&  word[i] != '\0')
		wc++;
	return (wc);
}
