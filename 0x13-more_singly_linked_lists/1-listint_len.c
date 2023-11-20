#include "lists.h"

/**
 * listint_len - a function that returns the number
 *		of elements in a linked listint_t list.
 * @h: Pointer to the list.
 *
 * Return: count of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t countNodes = 0;

	while (h != NULL)
	{
		countNodes++;
		h = h->next;
	}
	return (countNodes);
}
