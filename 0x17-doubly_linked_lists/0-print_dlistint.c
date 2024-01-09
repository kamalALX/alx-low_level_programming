#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 *					of a dlistint_t list.
 *
 * @h: a pointer to the list
 *
 * Return: number of noded in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
