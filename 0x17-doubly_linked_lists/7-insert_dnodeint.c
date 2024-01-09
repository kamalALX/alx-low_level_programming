#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts a new node
 *					at a given position.
 * @h: pointer tothe head of the node
 * @idx: the position
 * @n: data of the new node
 * Return: : the address of the new node, or NULL if it failed
 */

/**
 *  * dlistint_len - returns the number of elements in
 *   * a double linked list
 *    *
 *     * @h: head of the list
 *      * Return: the number of nodes
 *       */
unsigned int dlistint_len1(dlistint_t *h)
{
	unsigned int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int insert = 0;
	dlistint_t *newnode = NULL;
	unsigned int len = dlistint_len1(*h);

	if (len == idx)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
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
