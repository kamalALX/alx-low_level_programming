#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 *			of a listint_t list.
 * @h: Pointer to the list.
 *
 * Return: count of nodes in the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t countNodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		countNodes++;
		h = h->next;
	}
	return (countNodes);
}
