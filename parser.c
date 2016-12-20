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
		if (res[i] != ' ' && res[i] != '\t' && res[i] != '\r'
		&& res[i] != '\n' && res [i] != '\a' && res[i] != '\f'
		&& res[i] != '\v')
			k = 0;
		if (res[i] != ' ' && res[i] != '\t' && res[i] != '\r'
		&& res[i] != '\n' && res [i] != '\a' && res[i] != '\f'
		&& res[i] != '\v' && k == 0)
		{
			k = 1;
			j++;
		}
		i++;
	}
	res[i - 1] = '\0'; /* last addition */
	store = malloc(sizeof(char *) * (j + 1));
	if (store == NULL)
	{
		free(store);
		return (NULL);
	}
	tok = strtok(res, " \t\r\n\f\v\a");
	store[0] = res;
	i = 1;
	store[i] = tok;
	while (tok != '\0')
	{
		/*printf("%s\n", tok);*/
		tok = strtok(NULL, " \t\r\n\f\v\a");
		store[i] = tok;
		i++;
	}
	store[i] = NULL;
	free(store);/*test*/
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
	while (word[i] != ' ' && word[i] != '\t' && word[i] != '\r'
	&& word[i] != '\n' && word[i] != '\a' && word[i] != '\0')
		wc++;
	return (wc);
}
