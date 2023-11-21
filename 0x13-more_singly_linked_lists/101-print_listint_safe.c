#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to a singly linked list node structure.
 * Return: The number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			break;
		}
	}
	return (count);
}
