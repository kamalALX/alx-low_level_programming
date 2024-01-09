#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	int len = dlistint_len(*head);

	while((*head)->prev)
		*head =(*head)->prev;

	if (len == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (len == 0)
		return (-1);
	while(*head)
	{
		if (i == index)
		{
			if ((*head)->prev)
				((*head)->prev)->next = (*head)->next;
			((*head)->next)->prev = (*head)->prev;
			*head = (*head)->next;
			return (1);
		}
		i++;
		*head = (*head)->next;
	}
	return (-1);
}
