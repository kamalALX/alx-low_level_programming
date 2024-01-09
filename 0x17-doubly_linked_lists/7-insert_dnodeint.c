#include "lists.h"

/**
 * dlistint_len1 -  function that returns the number of elements in a linked
 * @h: pointer to the linked list.
 * Return:lent of the list.
*/

unsigned int dlistint_len1(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}


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
	unsigned int len;

	while ((*h)->prev)
		*h = (*h)->prev;
	len = dlistint_len1(*h);
	if (len == idx)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

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
