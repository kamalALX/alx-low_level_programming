#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the data (n)
 *					of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
