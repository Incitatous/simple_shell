#include "holberton.h"

void _free(pathlist *head)
{
	pathlist *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
