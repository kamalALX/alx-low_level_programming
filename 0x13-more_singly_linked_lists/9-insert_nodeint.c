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

	if (newnode == NULL || idx > listint_len(*head))
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		temp = NULL;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (i == 0)
				{
					newnode->n = n;
					newnode->next = *head;
					*head = newnode;
					return (newnode);
				}
				newnode->next = temp->next;
				temp->next = newnode;
				return (newnode);
			}
			else if (i + 1 == idx)
			{
				temp = *head;
			}
			head = &((*head)->next);
			i++;
		}
	}
	return (NULL);
}

/**
 * listint_len - a function that calculate the number of nodes in a list.
 * @h: pointer to the list
 *
 * Return: number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
