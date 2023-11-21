#include "lists.h"
#include <stdlib.h>

/**
 * find_loop_2 - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
*/
listint_t *find_loop_2(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

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

	loopnode = find_loop_2(*h);

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

