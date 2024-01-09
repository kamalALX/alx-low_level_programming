#include "lists.h"

/***/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode= malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
