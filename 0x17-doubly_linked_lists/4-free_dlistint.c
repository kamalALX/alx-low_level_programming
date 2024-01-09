#include "lists.h"

/***/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	while(head->prev)
	{
		head = head->prev;
	}

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
