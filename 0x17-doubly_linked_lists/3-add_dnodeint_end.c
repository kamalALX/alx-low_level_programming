#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 *						of a dlistint_t list.
 * @head: pointer to the list
 * @n: data of the new node
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastnode = NULL;

	lastnode = malloc(sizeof(dlistint_t));
	if (lastnode == NULL)
		return (NULL);

	lastnode->n = n;
	lastnode->next = NULL;

	if (*head == NULL)
	{
		*head = lastnode;
		lastnode->prev = NULL;
		return (lastnode);
	}
	while ((*head)->next)
	{
		*head = (*head)->next;
	}

	lastnode->prev = *head;
	(*head)->next = lastnode;
	return (lastnode);

}
