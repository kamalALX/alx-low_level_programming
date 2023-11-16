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

	tmp = head;
	for (i = 0; tmp != NULL; i++)
	{
		free(tmp->str);
		free(head);
		tmp = head->next;
	}
}
