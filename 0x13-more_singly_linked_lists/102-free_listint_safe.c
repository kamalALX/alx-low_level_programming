#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 * @h: head of list
 *
 * Return: number of nodes freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t len = 0;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = has_loop(*h);

	while (*h != loopnode || loop)
	{
		len++;
		next = (*h)->next;
		free(*h);

		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				break;
			}
			len++;
			next = next->next;
			free(next);
			loop = 0;
		}

		*h = next;
	}

	*h = NULL;
	return len;
}

