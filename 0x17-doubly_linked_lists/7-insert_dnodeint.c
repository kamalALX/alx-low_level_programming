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
	unsigned int insert = 0;
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	while ((*h)->prev)
		*h = (*h)->prev;
	while (*h)
	{
		if (insert == idx)
		{
			newnode->n = n;
			newnode->next = NULL;
			newnode->prev = NULL;
			if (*h != NULL)
			{
				newnode->prev = (*h)->prev;
				newnode->next = *h;
				if (idx != 0)
					((*h)->prev)->next = newnode;
				(*h)->prev = newnode;
			}
			*h = newnode;
			return (newnode);
		}
		*h = (*h)->next;
		insert++;
	}
	return (NULL);
}
