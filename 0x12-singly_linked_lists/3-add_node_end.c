#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the beginning of
 *		a list_t list.
 * @str: the new node to add.
 * @head: pointer to the head of the list.
 *
 * Return:  the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	char *dupl;
	list_t *newnode;
	list_t *tmp;

	newnode =  malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	dupl = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	newnode->str = dupl;
	newnode->len = length;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}
