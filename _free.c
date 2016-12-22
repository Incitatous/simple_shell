#include "holberton.h"

/**
 * _free - frees the linked list
 * @head: linked list
 * Return: No return
 */
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
