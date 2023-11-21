#include "lists.h"

/***/

listint_t *has_loop(listint_t *head)
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
	return (0);
}

size_t print_listint_safe(const listint_t *head)
{
	int loop = 0;
	unsigned int count = 0;
	const listint_t *temp = head;
	listint_t *loopnode = has_loop((listint_t *) head);

	if (loopnode == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			count++;
			head = head->next;
		}
	}
	else
	{
		while (temp != NULL && loop == 0)
		{
			if (temp->next == loopnode)
			{
				printf("[%p] %d\n", (void *) temp->next, temp->next->n);
				count++;
				loop = 1;
			}
			else
			{
				printf("[%p] %d\n", (void *) temp, temp->n);
				count++;
				temp = temp->next;
			}
		}
	}
	if (loopnode != NULL)
				printf("-> [%p] %d\n", (void *) loopnode, loopnode->n);
	return (count);
}
