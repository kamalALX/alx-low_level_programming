#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements in a linked
 * @h: pointer to the linked list.
 * Return:lent of the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
