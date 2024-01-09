#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the head of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
	}

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
