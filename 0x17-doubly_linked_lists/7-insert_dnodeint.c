#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts a new node
 *					at a given position.
 * @h: pointer tothe head of the node
 * @idx: the position
 * @n: data of the new node
 * Return: : the address of the new node, or NULL if it failed
 */

size_t dlistint_len1(dlistint_t *h)
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

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	unsigned int index = 1;
	unsigned int len = dlistint_len1(*h);

	newnode = NULL;
	if (*h != NULL)
		while ((*h)->prev != NULL)
			*h = (*h)->prev;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	if (idx > len)
		return (*h);
	else
	{
		while ((*h) != NULL)
		{
			if (index == idx)
			{
				if ((*h)->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = (*h)->next;
						newnode->prev = *h;
						(*h)->next->prev = newnode;
						(*h)->next = newnode;
					}
				}
				break;
			}
			*h = (*h)->next;
			index++;
		}
	}
	return (newnode);
}
