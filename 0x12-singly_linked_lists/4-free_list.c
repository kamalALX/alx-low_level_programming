#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: pointer to the head of the list.
 *
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(tmp->str);
		free(head);
		head = tmp
	}
}
