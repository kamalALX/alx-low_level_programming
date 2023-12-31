#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *		in a linked list_t list.
 *
 * @h: a pointer to a singly linked list node structure.
 *
 * Return: the number of nodes.
*/

size_t list_len(const list_t *h)
{

	size_t count_node = 0;

	while (h != NULL)
	{
		count_node++;
		h = h->next;
	}

	return (count_node);
}
