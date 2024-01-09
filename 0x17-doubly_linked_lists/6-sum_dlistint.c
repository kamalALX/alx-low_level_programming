#include "lists.h"

/***/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head->prev)
		head = head->prev;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
