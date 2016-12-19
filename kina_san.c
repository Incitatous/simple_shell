#include "holberton.h"

/**
 * buildpath - stores the tokenized PATH into a linked list
 *
 * @head: SE
 * Return: pointer to array or NULL
 */
int buildpath(kina_san **head)
{
	kina_san *max;
	char *temp, *hold;
	int i;

	*head = NULL;
	temp = getenv("PATH");
	hold = strtok(temp, ":");
	for (i = 0; hold != '\0'; ++i)
	{
		max = malloc(sizeof(kina_san));
		if (max == NULL)
			return (-1);
		max->str = hold;
		max->next = *head;
		*head = max;
		hold = strtok(NULL, ":");
	}
	return (0);
}
