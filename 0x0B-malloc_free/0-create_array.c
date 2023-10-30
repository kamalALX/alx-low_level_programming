#include "main.h"

/**
 * create_array -  function that creates an array of chars,
 *		and initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to insert
 *
 * Return: NULL if size is zero or if it fails,
 *	else return a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	if (p == NULL)
		return (NULL);
	else
		return (p);
}
