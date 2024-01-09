#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts a new node
 *					at a given position.
 * @h: pointer tothe head of the node
 * @idx: the position
 * @n: data of the new node
 * Return: : the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int insert = 1;
	dlistint_t *newnode = NULL;

	while ((*h)->prev)
		*h = (*h)->prev;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	while (*h)
	{
		if (insert == idx)
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
			return (newnode);
		}
		*h = (*h)->next;
		insert++;
	}
	return (NULL);
}
