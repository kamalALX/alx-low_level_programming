#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of
 *		a list_t list.
 * @str: the new node to add.
 * @head: pointer to the head of the list.
 *
 * Return:  the address of the new element, or NULL if it failed.
*/

 list_t *add_node(list_t **head, const char *str)
{
	int length;
	char *dupl;
	list_t *newnode;

	newnode =  malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	dupl = strdup(str);
	if (dupl == NULL)
	{
		free(dupl);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	newnode->str = dupl;
	newnode->len = length;
	newnode->next = *head;

	*head = newnode;


	return (newnode);
}
