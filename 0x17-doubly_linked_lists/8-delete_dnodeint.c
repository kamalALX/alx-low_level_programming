#include "lists.h"

/**
 * dlistint_len - function that finds the length of
 *				a linked list
 * @h: pointer to the list
 * Return: length of the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

/**
 * delete_dnodeint_at_index -  a function that deletes the node at index
 *					index of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	int len = dlistint_len(*head);

	while ((*head)->prev)
		*head = (*head)->prev;

	if (len == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (len == 0)
		return (-1);
	while (*head)
	{
		if (i == index)
		{
			if ((*head)->prev)
				((*head)->prev)->next = (*head)->next;
			((*head)->next)->prev = (*head)->prev;
			*head = (*head)->next;
			return (1);
		}
		i++;
		*head = (*head)->next;
	}
	return (-1);
}
