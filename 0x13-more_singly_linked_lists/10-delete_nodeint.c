#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev;
	unsigned int list_length = listint_length(*head), i = 0;

	if (index > list_length || list_length == 0)
		return (-1);

	while (temp != NULL)
	{
		if (index == 0)
		{
			if (list_length == 1)
			{
				*head = NULL;
				free(temp);
				return (1);
			}
			else
			{
				*head = temp->next;
				free(temp);
				return (1);
			}
		}
		else if (i + 1 == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}

/**
 * listint_length - counts the number of nodes in a linked list
 * @head: a pointer to the list
 *
 * Return: the number of elements
*/

unsigned int listint_length(const listint_t *head)
{
	unsigned int i = 0;


	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
