#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 *				at a given position.
 * @head: pointer to a pointer to the list.
 * @idx: the index of the list where the new node should be added.
 *	Index starts at 0.
 * @n: the value to be inserted in the new node.
 *
 * Return: he address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	unsigned int i = 0;
	listint_t *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newnode;
		newnode->n = n;
	}

	temp = *head;
	while (temp != NULL)
	{
		if (idx <= i)
		{
			if (i + 1 == idx)
			{
				newnode->n = n;
				newnode->next = temp->next;
				temp->next = newnode;
			}
		}
		else
			return (NULL);

		temp = temp->next;
		i++;
	}
	return (newnode);
}
