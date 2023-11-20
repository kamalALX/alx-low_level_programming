#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *		of a listint_t linked list.
 * @head: A pointer to a pointer to the list.
 *
 * Return: returns the head node's data (n).
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *first, *second;

	if (*head == NULL)
		return (0);

	first = *head;
	data = first->n;
	second = first->next;
	*head = second;
	free(first);

	return (data);
}
