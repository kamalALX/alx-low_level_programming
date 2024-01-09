#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 *					of a dlistint_t linked list.
 * @head: pointer to the list
 * @index: position of the node to return
 * Return: pointer to the node to find
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head->prev)
		head = head->prev;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
