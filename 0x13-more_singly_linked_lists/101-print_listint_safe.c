#include "lists.h"

/**
 * has_loop - a function that finds a loop in a linked list
 * @head: linked list to search
 *
 * Return: address of node where the loop starts
 *		- returns NULL if there is no loop.
*/

listint_t *has_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - a function that prints a linked list,
 *			even if it has a loop.
 * @head: pointer to the head of the list.
 *
 * Return: number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int loop;
	listint_t *loopnode;

	loopnode = has_loop((listint_t *) head);

	for (count = 0, loop = 1; (head != loopnode || loop) && head != NULL; count++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			loop = 0;
		head = head->next;
	}
	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (count);
}
