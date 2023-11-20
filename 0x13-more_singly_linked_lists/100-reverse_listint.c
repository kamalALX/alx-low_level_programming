#include "lists.h"

/**
 * reverse_listint-  a function that reverses a listint_t linked list.
 *
 * @head: pointer to the head node of the list.
 *
 * Return: ointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
