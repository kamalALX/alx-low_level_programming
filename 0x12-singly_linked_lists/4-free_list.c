#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: pointer to the head of the list.
 *
*/

void free_list(list_t *head)
{
	int i;
	list_t tmp;

	for (i = 0; head != NULL; i++)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
