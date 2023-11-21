#include "lists.h"

/**
 * has_loop - a function that finds the loop in a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 *		or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL)
		return (NULL);
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			return (slow);
		}
	}
	return (NULL);
}
