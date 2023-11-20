#include "lists.h"

/**
 *  * add_nodeint_end - a function that adds a new node
 *			at the end of a listint_t list.
 * @head: Pointer to a pointer to the list.
 * @n: an element of the linked list.
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *temp = *head;

	lastNode = malloc(sizeof(listint_t));
	if (lastNode == NULL)
		return (NULL);
	if (temp == NULL)
		*head = lastNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = lastNode;
	}
	lastNode->n = n;
	lastNode->next = NULL;

	return (lastNode);
}
