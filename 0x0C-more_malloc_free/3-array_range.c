#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: The array should contain all the values from min (included),
 * @max: to max (included).
 *
 * Return: the pointer to the newly created array.
 *	- If min > max , return NULL.
 *	- If malloc fails, return NULL.
*/

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(max - min);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		p[i] = min + i;
	}
	return (p);
}