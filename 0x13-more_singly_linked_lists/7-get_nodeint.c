#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *			of a listint_t linked list.
 * @head: pointer to the list.
 * @index: the index of the node, starting at .
 *
 * Return:  returns the nth node of a listint_t linked list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (cursor);
}
